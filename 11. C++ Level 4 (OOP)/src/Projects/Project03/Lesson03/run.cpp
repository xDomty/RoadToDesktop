#include "Projects/Project03/Lesson03/frontend/BackendConnection.hpp"
#include "Projects/Project03/Lesson03/frontend/FrontendConnection.hpp" // includes "run.hpp"
#include "Global/clsDate.hpp"
#include "Global/clsString.hpp"
#include "Projects/Project02/clsForceInputValid.hpp"
#include "Projects/Project01/clsUtil.hpp"
#include <iostream>
#include <limits>

// Project03: Bank Project
// Lesson03: Add Client
// run.cpp



namespace Project03 {
    namespace Lesson03 {
            void run() {
                frontend::AddNewClient();
                Project01::clsUtil::pressAnyKeyToContinue();
            }
    }
}

// run.cpp
// Lesson03: Add Client
// Project03: Bank Project