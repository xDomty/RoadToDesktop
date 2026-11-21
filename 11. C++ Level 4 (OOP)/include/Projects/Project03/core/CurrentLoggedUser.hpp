#pragma once
#include "clsUser.hpp"

namespace Project03 {

    namespace core {

        inline clsUser CurrentUser = clsUser::Find("", "");

    } // namespace core

} // namespace Project03
