#pragma once
#include <string>

// Lesson31: Classes Inside clsPerson

namespace Lesson31 {

    class clsPerson {

    public:

        class clsName {
        private:
            std::string _first, _last;
            friend class clsPerson;
        public:
            clsName(const std::string& first, const std::string& last);
        };

        class clsAddress {
        private:
            std::string _street, _city, _country;
            friend class clsPerson;
        public:
            clsAddress(const std::string& street, const std::string& city, const std::string& country);
        };

        class clsCommunication {
        private:
            std::string _email, _phone;
            friend class clsPerson;
        public:
            clsCommunication(const std::string& email, const std::string& phone);
        };

        clsPerson(const clsName& name, const clsAddress& address, const clsCommunication& comm);

        // Setters
        void SetName(std::string first, std::string last);
        void SetAddress(std::string street, std::string city, std::string country);
        void SetCommunication(std::string email, std::string phone);

        // Getters
        std::string GetFullName() const;
        std::string GetAddress() const;
        std::string GetCommunication() const;
        void GetInfo() const;

    private:
        clsName _ClsObjName;
        clsAddress _ClsObjAddress;
        clsCommunication _ClsObjComm;

    };

    void run();

}

// Lesson31: Classes Inside clsPerson