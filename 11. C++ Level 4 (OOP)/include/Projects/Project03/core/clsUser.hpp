#pragma once
#include "clsPerson.hpp"
#include <vector>

namespace Project03 {
    namespace core {
        class clsUser : public clsPerson {
        public:
            enum enMode {
                EmptyMode = 0,
                UpdateMode = 1,
                AddNewMode = 2
            };
            enum enPermissions {
                eAll = -1,
                pListClients = 1,
                pAddNewClient = 2,
                pDeleteClient = 4,
                pUpdateClients = 8,
                pFindClient = 16,
                pTransactions = 32,
                pManageUsers = 64
            };

        private:
            enMode _Mode;
            std::string _UserName;
            std::string _Password;
            int _Permissions;
            bool _MarkedToDelete = false;

            static core::clsUser _ConvertLineToUserObj(std::string Line, std::string Seperator = "#//#");
            static std::string _ConvertUserObjToLine(core::clsUser User, std::string Seperator = "#//#");
            static std::vector<core::clsUser> _LoadUsersDataFromFile();
            static void _SaveUsersDataToFile(std::vector<core::clsUser> vUsers);
            void _Update();
            void _AddDataLineToFile(std::string sDataLine);
            void _AddNew();
            static core::clsUser _GetEmptyUserObj();

        public:
            clsUser(enMode Mode, std::string FirstName, std::string LastName, short age, std::string Email, std::string PhoneNumber, std::string UserName, std::string Password, int Permissions);
            bool IsEmpty();
            bool MarkedForDeleted();

            // get
            std::string GetUserName() const;
            std::string GetPassword() const;
            int GetPermissions() const;

            // set
            void SetUserName(std::string UserName);
            void SetPassword(std::string Password);
            void SetPermissions(int Permissions);

            // pub funcs and some shitty things
            static clsUser Find(std::string UserName);
            static clsUser Find(std::string UserName, std::string Password);

            enum class enSaveResults { svFailedEmptyObj = 0,
                                       svSucceeded = 1,
                                       svFailedUserExists = 2
            };
            enSaveResults Save();

            static bool IsUserExists(std::string UserName);

            bool Delete();

            static clsUser GetAddNewUserObj(std::string UserName);

            static std::vector<clsUser> GetUsersList();
        };
    } // namespace core
} // namespace Project03
