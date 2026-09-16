/*
 *  Copyright (c), 2026, Alain Miniussi <alain.miniussi@oca.eu>
 *
 *  Distributed under the Boost Software License, Version 1.0.
 *    (See accompanying file LICENSE_1_0.txt or copy at
 *          http://www.boost.org/LICENSE_1_0.txt)
 *
 */
#pragma once

#include <string>

#if HIGHFIVE_USE_STRING_VIEW
#  ifndef __cpp_lib_string_view
#  error "std::string_view not available in this standard librarie
#  include <string_view>
#  endif
#endif

namespace HighFive {
#if HIGHFIVE_USE_STRING_VIEW
using H5Label = std::string_view;
#else
using H5Label = std::string;
#endif
}
