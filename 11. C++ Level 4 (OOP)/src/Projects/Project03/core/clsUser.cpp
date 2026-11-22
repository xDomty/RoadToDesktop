#include "Projects/Project03/core/clsUser.hpp"
#include "Global/clsString.hpp"
#include <fstream>
#include <string>

namespace Project03 {
    namespace core {
        // private:
        clsUser clsUser::_ConvertLineToUserObj(std::string Line, std::string Seperator) {
            std::vector<std::string> vUserData;
            vUserData = Global::clsString::SplitString(Line, Seperator);

            return clsUser(enMode::UpdateMode,
                           vUserData[0] /*FirstName*/,
                           vUserData[1] /*LastName*/,
                           stoi(vUserData[2]) /*age*/,
                           vUserData[3] /*Email*/,
                           vUserData[4] /*Phone*/,
                           vUserData[5] /*UserName*/,
                           vUserData[6] /*Password*/,
                           stoi(vUserData[7]) /*Permissions*/);
        }
        std::string clsUser::_ConvertUserObjToLine(clsUser User, std::string Seperator) {
            std::string UserRecord = "";
            UserRecord += User.GetFirstName() + Seperator;
            UserRecord += User.GetLastName() + Seperator;
            UserRecord += std::to_string(User.GetAge()) + Seperator;
            UserRecord += User.GetEmail() + Seperator;
            UserRecord += User.GetPhoneNumber() + Seperator;
            UserRecord += User.GetUserName() + Seperator;
            UserRecord += User.GetPassword() + Seperator;
            UserRecord += std::to_string(User.GetPermissions());

            return UserRecord;
        }
        std::vector<clsUser> clsUser::_LoadUsersDataFromFile() {
            std::vector<clsUser> vUsers;

            std::fstream UsersFile;
            UsersFile.open("Users.txt", std::ios::in); // read mode

            if (UsersFile.is_open()) {
                std::string Line;

                while (std::getline(UsersFile, Line)) {
                    clsUser objUser = _ConvertLineToUserObj(Line);
                    vUsers.push_back(objUser);
                }
            }
            return vUsers;
        }
        void clsUser::_SaveUsersDataToFile(std::vector<clsUser> vUsers) {
            std::fstream UsersFile;
            UsersFile.open("Users.txt", std::ios::out); // overwrite

            std::string DataLine;
            if (UsersFile.is_open()) {
                for (clsUser U : vUsers) {
                    if (U._MarkedToDelete != true) { /*Lesson04: Delete Client*/
                        DataLine = _ConvertUserObjToLine(U);
                        UsersFile << DataLine << std::endl;
                    }
                }

                UsersFile.close();
            }
        }
        void clsUser::_Update() {
            std::vector<clsUser> vUsers;
            vUsers = _LoadUsersDataFromFile();

            for (clsUser& U : vUsers) {
                if (U.GetUserName() == _UserName) {
                    U = *this;
                    break;
                }
            }
            _SaveUsersDataToFile(vUsers);
        }
        void clsUser::_AddDataLineToFile(std::string sDataLine) {
            std::fstream UsersFile;
            UsersFile.open("Users.txt", std::ios::out | std::ios::app); // append mode
            if (UsersFile.is_open()) {
                UsersFile << sDataLine;
                UsersFile.close();
            }
        }
        void clsUser::_AddNew() {
            _AddDataLineToFile(_ConvertUserObjToLine(*this));
        }

        clsUser clsUser::_GetEmptyUserObj() {
            return clsUser(enMode::EmptyMode, "", "", 0, "", "", "", "", 0);
        }

        // public:
        clsUser::clsUser(enMode Mode, std::string FirstName, std::string LastName, short age, std::string Email, std::string PhoneNumber, std::string UserName, std::string Password, int Permissions) : clsPerson(FirstName, LastName, age, Email, PhoneNumber) {
            _Mode = Mode;
            _UserName = UserName;
            _Password = Password;
            _Permissions = Permissions;
        }
        bool clsUser::IsEmpty() {
            return (_Mode == enMode::EmptyMode);
        }
        bool clsUser::MarkedForDeleted() {
            return _MarkedToDelete;
        }

        // get
        std::string clsUser::GetUserName() const {
            return _UserName;
        }
        std::string clsUser::GetPassword() const {
            return _Password;
        }
        int clsUser::GetPermissions() const {
            return _Permissions;
        }

        // set
        void clsUser::SetUserName(std::string UserName) {
            _UserName = UserName;
        }
        void clsUser::SetPassword(std::string Password) {
            _Password = Password;
        }
        void clsUser::SetPermissions(int Permissions) {
            _Permissions = Permissions;
        }

        // pub funcs and some shit i swear
        clsUser clsUser::Find(std::string UserName) {
            std::fstream UsersFile;
            UsersFile.open("Users.txt", std::ios::in); // read mode

            if (UsersFile.is_open()) {
                std::string Line;
                while (getline(UsersFile, Line)) {
                    clsUser objUser = _ConvertLineToUserObj(Line);
                    if (objUser.GetUserName() == UserName) {
                        UsersFile.close();
                        return objUser;
                    }
                }
            }
            return _GetEmptyUserObj();
        }
        clsUser clsUser::Find(std::string UserName, std::string Password) {
            std::fstream UsersFile;
            UsersFile.open("Users.txt", std::ios::in); // read mode

            if (UsersFile.is_open()) {
                std::string Line;
                while (getline(UsersFile, Line)) {
                    clsUser objUser = _ConvertLineToUserObj(Line);
                    if ((objUser.GetUserName() == UserName) && (objUser.GetPassword() == Password)) {
                        UsersFile.close();
                        return objUser;
                    }
                }
            }
            return _GetEmptyUserObj();
        }
        clsUser::enSaveResults clsUser::Save() {

            switch (_Mode) {
            case enMode::EmptyMode: {
                if (IsEmpty()) {
                    return enSaveResults::svFailedEmptyObj;
                }
            }

            case enMode::UpdateMode: {
                _Update();
                return enSaveResults::svSucceeded;
                break;
            }

            case enMode::AddNewMode: {
                // This will add new record to file or database
                if (clsUser::IsUserExists(_UserName)) {
                    return enSaveResults::svFailedUserExists;
                } else {
                    _AddNew();
                    // We need to set the mode to update after add new
                    _Mode = enMode::UpdateMode;
                    return enSaveResults::svSucceeded;
                }

                break;
            }
            }
        }

        bool clsUser::IsUserExists(std::string UserName) {
            clsUser User = clsUser::Find(UserName);
            return (!User.IsEmpty());
        }

        bool clsUser::Delete() {
            std::vector<clsUser> _vUsers;
            _vUsers = _LoadUsersDataFromFile();

            for (clsUser& U : _vUsers) {
                if (U.GetUserName() == _UserName) {
                    U._MarkedToDelete = true;
                    break;
                }
            }

            _SaveUsersDataToFile(_vUsers);

            *this = _GetEmptyUserObj();

            return true;
        }

        clsUser clsUser::GetAddNewUserObj(std::string UserName) {
            return clsUser(enMode::AddNewMode, "", "", 0, "", "", UserName, "", 0);
        }

        std::vector<clsUser> clsUser::GetUsersList() {
            return _LoadUsersDataFromFile();
        }

        bool clsUser::CheckAccessPermission(enPermissions Permission) {
            if (this->_Permissions == enPermissions::eAll)
                return true;

            if ((Permission & this->_Permissions) == Permission)
                return true;
            else
                return false;
        }
    } // namespace core
} // namespace Project03
