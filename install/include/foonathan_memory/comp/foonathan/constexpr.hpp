// This file was autogenerated using foonathan/compatibility.
// See https://github.com/foonathan/compatibility for further information.
// Do not edit manually!

#ifndef COMP_FOONATHAN_CONSTEXPR_HPP_INCLUDED
#define COMP_FOONATHAN_CONSTEXPR_HPP_INCLUDED

#include <cstddef>

#define FOONATHAN_HAS_CONSTEXPR 1


#if FOONATHAN_HAS_CONSTEXPR
    #if !defined(__cpp_constexpr)
        #define __cpp_constexpr 200704
    #elif 200704 > __cpp_constexpr
        #undef __cpp_constexpr
        #define __cpp_constexpr 200704
    #elif defined(COMP_OVERRIDE_SD6)
        #undef __cpp_constexpr
        #define __cpp_constexpr 200704
    #endif
#endif

#ifndef FOONATHAN_CONSTEXPR
    #if FOONATHAN_HAS_CONSTEXPR
        #define FOONATHAN_CONSTEXPR constexpr
    #else
        #define FOONATHAN_CONSTEXPR const
    #endif
#endif

#ifndef FOONATHAN_CONSTEXPR_FNC
    #if FOONATHAN_HAS_CONSTEXPR
        #define FOONATHAN_CONSTEXPR_FNC constexpr
    #else
        #define FOONATHAN_CONSTEXPR_FNC inline
    #endif
#endif

#endif
