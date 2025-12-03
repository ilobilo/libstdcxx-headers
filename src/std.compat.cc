// -*- C++ -*- [std.modules] module std.compat

// Copyright The GNU Toolchain Authors.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

module;

#if __has_include(<stdbit.h>)
#include <stdbit.h>
#endif
#if __has_include(<stdckdint.h>)
#include <stdckdint.h>
#endif

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreserved-module-identifier"
#pragma GCC diagnostic ignored "-Wcxx-attribute-extension"

export module std.compat;
export import std;

#ifdef __STDC_VERSION_STDBIT_H__
// <stdbit.h>
export
{
#define _GLIBCXX_STDBIT_FUNC(F) \
  [[clang::using_if_exists]] using __gnu_cxx::F ## _uc; \
  [[clang::using_if_exists]] using __gnu_cxx::F ## _us; \
  [[clang::using_if_exists]] using __gnu_cxx::F ## _ui; \
  [[clang::using_if_exists]] using __gnu_cxx::F ## _ul; \
  [[clang::using_if_exists]] using __gnu_cxx::F ## _ull; \
  [[clang::using_if_exists]] using __gnu_cxx::F
_GLIBCXX_STDBIT_FUNC(stdc_leading_zeros);
_GLIBCXX_STDBIT_FUNC(stdc_leading_ones);
_GLIBCXX_STDBIT_FUNC(stdc_trailing_zeros);
_GLIBCXX_STDBIT_FUNC(stdc_trailing_ones);
_GLIBCXX_STDBIT_FUNC(stdc_first_leading_zero);
_GLIBCXX_STDBIT_FUNC(stdc_first_leading_one);
_GLIBCXX_STDBIT_FUNC(stdc_first_trailing_zero);
_GLIBCXX_STDBIT_FUNC(stdc_first_trailing_one);
_GLIBCXX_STDBIT_FUNC(stdc_count_zeros);
_GLIBCXX_STDBIT_FUNC(stdc_count_ones);
_GLIBCXX_STDBIT_FUNC(stdc_has_single_bit);
_GLIBCXX_STDBIT_FUNC(stdc_bit_width);
_GLIBCXX_STDBIT_FUNC(stdc_bit_floor);
_GLIBCXX_STDBIT_FUNC(stdc_bit_ceil);
#undef _GLIBCXX_STDBIT_FUNC
}
#endif

#ifdef __STDC_VERSION_STDCKDINT_H__
// <stdckdint.h>
export
{
  [[clang::using_if_exists]] using __gnu_cxx::ckd_add;
  [[clang::using_if_exists]] using __gnu_cxx::ckd_sub;
  [[clang::using_if_exists]] using __gnu_cxx::ckd_mul;
}
#endif

#define STD_COMPAT 1

// C library exports are appended from std-clib.cc.in.
// C standard library exports for -*- C++ -*- std and std.compat modules
// This file is appended to std.cc.in or std-compat.cc.in.

#ifdef STD_COMPAT
#define C_LIB_NAMESPACE
#else
#define C_LIB_NAMESPACE namespace std
#endif

// C standard library headers [tab:headers.cpp.c]

// 19.3 <cassert>
// No exports

// 23.5.1 <cctype>
export C_LIB_NAMESPACE
{
  [[clang::using_if_exists]] using std::isalnum;
  [[clang::using_if_exists]] using std::isalpha;
#ifdef _GLIBCXX_USE_C99_CTYPE
  [[clang::using_if_exists]] using std::isblank;
#endif
  [[clang::using_if_exists]] using std::iscntrl;
  [[clang::using_if_exists]] using std::isdigit;
  [[clang::using_if_exists]] using std::isgraph;
  [[clang::using_if_exists]] using std::islower;
  [[clang::using_if_exists]] using std::isprint;
  [[clang::using_if_exists]] using std::ispunct;
  [[clang::using_if_exists]] using std::isspace;
  [[clang::using_if_exists]] using std::isupper;
  [[clang::using_if_exists]] using std::isxdigit;
  [[clang::using_if_exists]] using std::tolower;
  [[clang::using_if_exists]] using std::toupper;
}

// 19.4 <cerrno>
// No exports

// 28.3 <cfenv>
export C_LIB_NAMESPACE
{
#ifdef _GLIBCXX_USE_C99_FENV
  [[clang::using_if_exists]] using std::feclearexcept;
  [[clang::using_if_exists]] using std::fegetenv;
  [[clang::using_if_exists]] using std::fegetexceptflag;
  [[clang::using_if_exists]] using std::fegetround;
  [[clang::using_if_exists]] using std::feholdexcept;
  [[clang::using_if_exists]] using std::fenv_t;
  [[clang::using_if_exists]] using std::feraiseexcept;
  [[clang::using_if_exists]] using std::fesetenv;
  [[clang::using_if_exists]] using std::fesetexceptflag;
  [[clang::using_if_exists]] using std::fesetround;
  [[clang::using_if_exists]] using std::fetestexcept;
  [[clang::using_if_exists]] using std::feupdateenv;
  [[clang::using_if_exists]] using std::fexcept_t;
#endif
}

// 17.3.7 <cfloat> [cfloat.syn]
// No exports, only provides macros

// 31.13.2 <cinttypes>
export C_LIB_NAMESPACE
{
#ifdef _GLIBCXX_USE_C99_INTTYPES
  [[clang::using_if_exists]] using std::imaxabs;
  [[clang::using_if_exists]] using std::imaxdiv;
  [[clang::using_if_exists]] using std::imaxdiv_t;
  [[clang::using_if_exists]] using std::strtoimax;
  [[clang::using_if_exists]] using std::strtoumax;
#if defined(_GLIBCXX_USE_WCHAR_T) && _GLIBCXX_USE_C99_INTTYPES_WCHAR_T
  [[clang::using_if_exists]] using std::wcstoimax;
  [[clang::using_if_exists]] using std::wcstoumax;
#endif
#endif
}

// 17.3.6 <climits> [climits.syn]
// No exports, only provides macros

// 30.5 <clocale>
export C_LIB_NAMESPACE
{
  [[clang::using_if_exists]] using std::lconv;
  [[clang::using_if_exists]] using std::localeconv;
  [[clang::using_if_exists]] using std::setlocale;
  // LC_* macros not exported
}

// 28.7.1 <cmath>
export C_LIB_NAMESPACE
{
  [[clang::using_if_exists]] using std::abs;
  [[clang::using_if_exists]] using std::acos;
  [[clang::using_if_exists]] using std::acosf;
  [[clang::using_if_exists]] using std::acosh;
  [[clang::using_if_exists]] using std::acoshf;
  [[clang::using_if_exists]] using std::acoshl;
  [[clang::using_if_exists]] using std::acosl;
  [[clang::using_if_exists]] using std::asin;
  [[clang::using_if_exists]] using std::asinf;
  [[clang::using_if_exists]] using std::asinh;
  [[clang::using_if_exists]] using std::asinhf;
  [[clang::using_if_exists]] using std::asinhl;
  [[clang::using_if_exists]] using std::asinl;
  [[clang::using_if_exists]] using std::atan;
  [[clang::using_if_exists]] using std::atan2;
  [[clang::using_if_exists]] using std::atan2f;
  [[clang::using_if_exists]] using std::atan2l;
  [[clang::using_if_exists]] using std::atanf;
  [[clang::using_if_exists]] using std::atanh;
  [[clang::using_if_exists]] using std::atanhf;
  [[clang::using_if_exists]] using std::atanhl;
  [[clang::using_if_exists]] using std::atanl;
  [[clang::using_if_exists]] using std::cbrt;
  [[clang::using_if_exists]] using std::cbrtf;
  [[clang::using_if_exists]] using std::cbrtl;
  [[clang::using_if_exists]] using std::ceil;
  [[clang::using_if_exists]] using std::ceilf;
  [[clang::using_if_exists]] using std::ceill;
  [[clang::using_if_exists]] using std::copysign;
  [[clang::using_if_exists]] using std::copysignf;
  [[clang::using_if_exists]] using std::copysignl;
  [[clang::using_if_exists]] using std::cos;
  [[clang::using_if_exists]] using std::cosf;
  [[clang::using_if_exists]] using std::cosh;
  [[clang::using_if_exists]] using std::coshf;
  [[clang::using_if_exists]] using std::coshl;
  [[clang::using_if_exists]] using std::cosl;
  [[clang::using_if_exists]] using std::double_t;
  [[clang::using_if_exists]] using std::erf;
  [[clang::using_if_exists]] using std::erfc;
  [[clang::using_if_exists]] using std::erfcf;
  [[clang::using_if_exists]] using std::erfcl;
  [[clang::using_if_exists]] using std::erff;
  [[clang::using_if_exists]] using std::erfl;
  [[clang::using_if_exists]] using std::exp;
  [[clang::using_if_exists]] using std::exp2;
  [[clang::using_if_exists]] using std::exp2f;
  [[clang::using_if_exists]] using std::exp2l;
  [[clang::using_if_exists]] using std::expf;
  [[clang::using_if_exists]] using std::expl;
  [[clang::using_if_exists]] using std::expm1;
  [[clang::using_if_exists]] using std::expm1f;
  [[clang::using_if_exists]] using std::expm1l;
  [[clang::using_if_exists]] using std::fabs;
  [[clang::using_if_exists]] using std::fabsf;
  [[clang::using_if_exists]] using std::fabsl;
  [[clang::using_if_exists]] using std::fdim;
  [[clang::using_if_exists]] using std::fdimf;
  [[clang::using_if_exists]] using std::fdiml;
  [[clang::using_if_exists]] using std::float_t;
  [[clang::using_if_exists]] using std::floor;
  [[clang::using_if_exists]] using std::floorf;
  [[clang::using_if_exists]] using std::floorl;
  [[clang::using_if_exists]] using std::fma;
  [[clang::using_if_exists]] using std::fmaf;
  [[clang::using_if_exists]] using std::fmal;
  [[clang::using_if_exists]] using std::fmax;
  [[clang::using_if_exists]] using std::fmaxf;
  [[clang::using_if_exists]] using std::fmaxl;
  [[clang::using_if_exists]] using std::fmin;
  [[clang::using_if_exists]] using std::fminf;
  [[clang::using_if_exists]] using std::fminl;
  [[clang::using_if_exists]] using std::fmod;
  [[clang::using_if_exists]] using std::fmodf;
  [[clang::using_if_exists]] using std::fmodl;
  [[clang::using_if_exists]] using std::fpclassify;
  [[clang::using_if_exists]] using std::frexp;
  [[clang::using_if_exists]] using std::frexpf;
  [[clang::using_if_exists]] using std::frexpl;
  [[clang::using_if_exists]] using std::hypot;
  [[clang::using_if_exists]] using std::hypotf;
  [[clang::using_if_exists]] using std::hypotl;
  [[clang::using_if_exists]] using std::ilogb;
  [[clang::using_if_exists]] using std::ilogbf;
  [[clang::using_if_exists]] using std::ilogbl;
  [[clang::using_if_exists]] using std::isfinite;
  [[clang::using_if_exists]] using std::isgreater;
  [[clang::using_if_exists]] using std::isgreaterequal;
  [[clang::using_if_exists]] using std::isinf;
  [[clang::using_if_exists]] using std::isless;
  [[clang::using_if_exists]] using std::islessequal;
  [[clang::using_if_exists]] using std::islessgreater;
  [[clang::using_if_exists]] using std::isnan;
  [[clang::using_if_exists]] using std::isnormal;
  [[clang::using_if_exists]] using std::isunordered;
  [[clang::using_if_exists]] using std::ldexp;
  [[clang::using_if_exists]] using std::ldexpf;
  [[clang::using_if_exists]] using std::ldexpl;
#ifndef STD_COMPAT
  [[clang::using_if_exists]] using std::lerp;
#endif
  [[clang::using_if_exists]] using std::lgamma;
  [[clang::using_if_exists]] using std::lgammaf;
  [[clang::using_if_exists]] using std::lgammal;
  [[clang::using_if_exists]] using std::llrint;
  [[clang::using_if_exists]] using std::llrintf;
  [[clang::using_if_exists]] using std::llrintl;
  [[clang::using_if_exists]] using std::llround;
  [[clang::using_if_exists]] using std::llroundf;
  [[clang::using_if_exists]] using std::llroundl;
  [[clang::using_if_exists]] using std::log;
  [[clang::using_if_exists]] using std::log10;
  [[clang::using_if_exists]] using std::log10f;
  [[clang::using_if_exists]] using std::log10l;
  [[clang::using_if_exists]] using std::log1p;
  [[clang::using_if_exists]] using std::log1pf;
  [[clang::using_if_exists]] using std::log1pl;
  [[clang::using_if_exists]] using std::log2;
  [[clang::using_if_exists]] using std::log2f;
  [[clang::using_if_exists]] using std::log2l;
  [[clang::using_if_exists]] using std::logb;
  [[clang::using_if_exists]] using std::logbf;
  [[clang::using_if_exists]] using std::logbl;
  [[clang::using_if_exists]] using std::logf;
  [[clang::using_if_exists]] using std::logl;
  [[clang::using_if_exists]] using std::lrint;
  [[clang::using_if_exists]] using std::lrintf;
  [[clang::using_if_exists]] using std::lrintl;
  [[clang::using_if_exists]] using std::lround;
  [[clang::using_if_exists]] using std::lroundf;
  [[clang::using_if_exists]] using std::lroundl;
  [[clang::using_if_exists]] using std::modf;
  [[clang::using_if_exists]] using std::modff;
  [[clang::using_if_exists]] using std::modfl;
  [[clang::using_if_exists]] using std::nan;
  [[clang::using_if_exists]] using std::nanf;
  [[clang::using_if_exists]] using std::nanl;
  [[clang::using_if_exists]] using std::nearbyint;
  [[clang::using_if_exists]] using std::nearbyintf;
  [[clang::using_if_exists]] using std::nearbyintl;
  [[clang::using_if_exists]] using std::nextafter;
  [[clang::using_if_exists]] using std::nextafterf;
  [[clang::using_if_exists]] using std::nextafterl;
  [[clang::using_if_exists]] using std::nexttoward;
  [[clang::using_if_exists]] using std::nexttowardf;
  [[clang::using_if_exists]] using std::nexttowardl;
  [[clang::using_if_exists]] using std::pow;
  [[clang::using_if_exists]] using std::powf;
  [[clang::using_if_exists]] using std::powl;
  [[clang::using_if_exists]] using std::remainder;
  [[clang::using_if_exists]] using std::remainderf;
  [[clang::using_if_exists]] using std::remainderl;
  [[clang::using_if_exists]] using std::remquo;
  [[clang::using_if_exists]] using std::remquof;
  [[clang::using_if_exists]] using std::remquol;
  [[clang::using_if_exists]] using std::rint;
  [[clang::using_if_exists]] using std::rintf;
  [[clang::using_if_exists]] using std::rintl;
  [[clang::using_if_exists]] using std::round;
  [[clang::using_if_exists]] using std::roundf;
  [[clang::using_if_exists]] using std::roundl;
  [[clang::using_if_exists]] using std::scalbln;
  [[clang::using_if_exists]] using std::scalblnf;
  [[clang::using_if_exists]] using std::scalblnl;
  [[clang::using_if_exists]] using std::scalbn;
  [[clang::using_if_exists]] using std::scalbnf;
  [[clang::using_if_exists]] using std::scalbnl;
  [[clang::using_if_exists]] using std::signbit;
  [[clang::using_if_exists]] using std::sin;
  [[clang::using_if_exists]] using std::sinf;
  [[clang::using_if_exists]] using std::sinh;
  [[clang::using_if_exists]] using std::sinhf;
  [[clang::using_if_exists]] using std::sinhl;
  [[clang::using_if_exists]] using std::sinl;
  [[clang::using_if_exists]] using std::sqrt;
  [[clang::using_if_exists]] using std::sqrtf;
  [[clang::using_if_exists]] using std::sqrtl;
  [[clang::using_if_exists]] using std::tan;
  [[clang::using_if_exists]] using std::tanf;
  [[clang::using_if_exists]] using std::tanh;
  [[clang::using_if_exists]] using std::tanhf;
  [[clang::using_if_exists]] using std::tanhl;
  [[clang::using_if_exists]] using std::tanl;
  [[clang::using_if_exists]] using std::tgamma;
  [[clang::using_if_exists]] using std::tgammaf;
  [[clang::using_if_exists]] using std::tgammal;
  [[clang::using_if_exists]] using std::trunc;
  [[clang::using_if_exists]] using std::truncf;
  [[clang::using_if_exists]] using std::truncl;

#if __cpp_lib_math_special_functions && !defined(STD_COMPAT)
  [[clang::using_if_exists]] using std::assoc_laguerre;
  [[clang::using_if_exists]] using std::assoc_laguerref;
  [[clang::using_if_exists]] using std::assoc_laguerrel;
  [[clang::using_if_exists]] using std::assoc_legendre;
  [[clang::using_if_exists]] using std::assoc_legendref;
  [[clang::using_if_exists]] using std::assoc_legendrel;
  [[clang::using_if_exists]] using std::beta;
  [[clang::using_if_exists]] using std::betaf;
  [[clang::using_if_exists]] using std::betal;
  [[clang::using_if_exists]] using std::comp_ellint_1;
  [[clang::using_if_exists]] using std::comp_ellint_1f;
  [[clang::using_if_exists]] using std::comp_ellint_1l;
  [[clang::using_if_exists]] using std::comp_ellint_2;
  [[clang::using_if_exists]] using std::comp_ellint_2f;
  [[clang::using_if_exists]] using std::comp_ellint_2l;
  [[clang::using_if_exists]] using std::comp_ellint_3;
  [[clang::using_if_exists]] using std::comp_ellint_3f;
  [[clang::using_if_exists]] using std::comp_ellint_3l;
  [[clang::using_if_exists]] using std::cyl_bessel_i;
  [[clang::using_if_exists]] using std::cyl_bessel_if;
  [[clang::using_if_exists]] using std::cyl_bessel_il;
  [[clang::using_if_exists]] using std::cyl_bessel_j;
  [[clang::using_if_exists]] using std::cyl_bessel_jf;
  [[clang::using_if_exists]] using std::cyl_bessel_jl;
  [[clang::using_if_exists]] using std::cyl_bessel_k;
  [[clang::using_if_exists]] using std::cyl_bessel_kf;
  [[clang::using_if_exists]] using std::cyl_bessel_kl;
  [[clang::using_if_exists]] using std::cyl_neumann;
  [[clang::using_if_exists]] using std::cyl_neumannf;
  [[clang::using_if_exists]] using std::cyl_neumannl;
  [[clang::using_if_exists]] using std::ellint_1;
  [[clang::using_if_exists]] using std::ellint_1f;
  [[clang::using_if_exists]] using std::ellint_1l;
  [[clang::using_if_exists]] using std::ellint_2;
  [[clang::using_if_exists]] using std::ellint_2f;
  [[clang::using_if_exists]] using std::ellint_2l;
  [[clang::using_if_exists]] using std::ellint_3;
  [[clang::using_if_exists]] using std::ellint_3f;
  [[clang::using_if_exists]] using std::ellint_3l;
  [[clang::using_if_exists]] using std::expint;
  [[clang::using_if_exists]] using std::expintf;
  [[clang::using_if_exists]] using std::expintl;
  [[clang::using_if_exists]] using std::hermite;
  [[clang::using_if_exists]] using std::hermitef;
  [[clang::using_if_exists]] using std::hermitel;
  [[clang::using_if_exists]] using std::legendre;
  [[clang::using_if_exists]] using std::legendref;
  [[clang::using_if_exists]] using std::legendrel;
  [[clang::using_if_exists]] using std::laguerre;
  [[clang::using_if_exists]] using std::laguerref;
  [[clang::using_if_exists]] using std::laguerrel;
  [[clang::using_if_exists]] using std::riemann_zeta;
  [[clang::using_if_exists]] using std::riemann_zetaf;
  [[clang::using_if_exists]] using std::riemann_zetal;
  [[clang::using_if_exists]] using std::sph_bessel;
  [[clang::using_if_exists]] using std::sph_besself;
  [[clang::using_if_exists]] using std::sph_bessell;
  [[clang::using_if_exists]] using std::sph_legendre;
  [[clang::using_if_exists]] using std::sph_legendref;
  [[clang::using_if_exists]] using std::sph_legendrel;
  [[clang::using_if_exists]] using std::sph_neumann;
  [[clang::using_if_exists]] using std::sph_neumannf;
  [[clang::using_if_exists]] using std::sph_neumannl;
#endif
}

// 17.13.3 <csetjmp>
export C_LIB_NAMESPACE
{
  [[clang::using_if_exists]] using std::jmp_buf;
  [[clang::using_if_exists]] using std::longjmp;
  // setjmp macro not exported
}

// 17.13.4 <csignal>
export C_LIB_NAMESPACE
{
  [[clang::using_if_exists]] using std::raise;
  [[clang::using_if_exists]] using std::sig_atomic_t;
  [[clang::using_if_exists]] using std::signal;
  // SIG_* macros not exported
}

// 17.13.2 <cstdarg>
export C_LIB_NAMESPACE
{
  [[clang::using_if_exists]] using std::va_list;
  // va_arg and friend macros not exported
}

// 17.2.1 <cstddef> [cstddef.syn]
export C_LIB_NAMESPACE
{
  [[clang::using_if_exists]] using std::max_align_t;
  [[clang::using_if_exists]] using std::nullptr_t;
  [[clang::using_if_exists]] using std::ptrdiff_t;
  [[clang::using_if_exists]] using std::size_t;
#ifndef STD_COMPAT
  [[clang::using_if_exists]] using std::byte;
  [[clang::using_if_exists]] using std::operator<<=;
  [[clang::using_if_exists]] using std::operator<<;
  [[clang::using_if_exists]] using std::operator>>=;
  [[clang::using_if_exists]] using std::operator>>;
  [[clang::using_if_exists]] using std::operator|=;
  [[clang::using_if_exists]] using std::operator|;
  [[clang::using_if_exists]] using std::operator&=;
  [[clang::using_if_exists]] using std::operator&;
  [[clang::using_if_exists]] using std::operator^=;
  [[clang::using_if_exists]] using std::operator^;
  [[clang::using_if_exists]] using std::operator~;
  [[clang::using_if_exists]] using std::to_integer;
#endif
  // NULL and offsetof macros not exported
}

// 17.4 <cstdint>
export C_LIB_NAMESPACE
{
  [[clang::using_if_exists]] using std::int8_t;
  [[clang::using_if_exists]] using std::int16_t;
  [[clang::using_if_exists]] using std::int32_t;
  [[clang::using_if_exists]] using std::int64_t;
  [[clang::using_if_exists]] using std::int_fast16_t;
  [[clang::using_if_exists]] using std::int_fast32_t;
  [[clang::using_if_exists]] using std::int_fast64_t;
  [[clang::using_if_exists]] using std::int_fast8_t;
  [[clang::using_if_exists]] using std::int_least16_t;
  [[clang::using_if_exists]] using std::int_least32_t;
  [[clang::using_if_exists]] using std::int_least64_t;
  [[clang::using_if_exists]] using std::int_least8_t;
  [[clang::using_if_exists]] using std::intmax_t;
  [[clang::using_if_exists]] using std::intptr_t;
  [[clang::using_if_exists]] using std::uint8_t;
  [[clang::using_if_exists]] using std::uint16_t;
  [[clang::using_if_exists]] using std::uint32_t;
  [[clang::using_if_exists]] using std::uint64_t;
  [[clang::using_if_exists]] using std::uint_fast16_t;
  [[clang::using_if_exists]] using std::uint_fast32_t;
  [[clang::using_if_exists]] using std::uint_fast64_t;
  [[clang::using_if_exists]] using std::uint_fast8_t;
  [[clang::using_if_exists]] using std::uint_least16_t;
  [[clang::using_if_exists]] using std::uint_least32_t;
  [[clang::using_if_exists]] using std::uint_least64_t;
  [[clang::using_if_exists]] using std::uint_least8_t;
  [[clang::using_if_exists]] using std::uintmax_t;
  [[clang::using_if_exists]] using std::uintptr_t;
}

// 31.13.1 <cstdio>
export C_LIB_NAMESPACE
{
  [[clang::using_if_exists]] using std::clearerr;
  [[clang::using_if_exists]] using std::fclose;
  [[clang::using_if_exists]] using std::feof;
  [[clang::using_if_exists]] using std::ferror;
  [[clang::using_if_exists]] using std::fflush;
  [[clang::using_if_exists]] using std::fgetc;
  [[clang::using_if_exists]] using std::fgetpos;
  [[clang::using_if_exists]] using std::fgets;
  [[clang::using_if_exists]] using std::FILE;
  [[clang::using_if_exists]] using std::fopen;
  [[clang::using_if_exists]] using std::fpos_t;
  [[clang::using_if_exists]] using std::fprintf;
  [[clang::using_if_exists]] using std::fputc;
  [[clang::using_if_exists]] using std::fputs;
  [[clang::using_if_exists]] using std::fread;
  [[clang::using_if_exists]] using std::freopen;
  [[clang::using_if_exists]] using std::fscanf;
  [[clang::using_if_exists]] using std::fseek;
  [[clang::using_if_exists]] using std::fsetpos;
  [[clang::using_if_exists]] using std::ftell;
  [[clang::using_if_exists]] using std::fwrite;
  [[clang::using_if_exists]] using std::getc;
  [[clang::using_if_exists]] using std::getchar;
  [[clang::using_if_exists]] using std::perror;
  [[clang::using_if_exists]] using std::printf;
  [[clang::using_if_exists]] using std::putc;
  [[clang::using_if_exists]] using std::putchar;
  [[clang::using_if_exists]] using std::puts;
  [[clang::using_if_exists]] using std::remove;
  [[clang::using_if_exists]] using std::rename;
  [[clang::using_if_exists]] using std::rewind;
  [[clang::using_if_exists]] using std::scanf;
  [[clang::using_if_exists]] using std::setbuf;
  [[clang::using_if_exists]] using std::setvbuf;
  [[clang::using_if_exists]] using std::size_t;
  [[clang::using_if_exists]] using std::snprintf;
  [[clang::using_if_exists]] using std::sprintf;
  [[clang::using_if_exists]] using std::sscanf;
  [[clang::using_if_exists]] using std::tmpfile;
#if _GLIBCXX_USE_TMPNAM
  [[clang::using_if_exists]] using std::tmpnam;
#endif
  [[clang::using_if_exists]] using std::ungetc;
  [[clang::using_if_exists]] using std::vfprintf;
  [[clang::using_if_exists]] using std::vfscanf;
  [[clang::using_if_exists]] using std::vprintf;
  [[clang::using_if_exists]] using std::vscanf;
  [[clang::using_if_exists]] using std::vsnprintf;
  [[clang::using_if_exists]] using std::vsprintf;
  [[clang::using_if_exists]] using std::vsscanf;
}

// 17.2.2 <cstdlib> [cstdlib.syn]
export C_LIB_NAMESPACE
{
  [[clang::using_if_exists]] using std::_Exit;
  [[clang::using_if_exists]] using std::abort;
  [[clang::using_if_exists]] using std::abs;
#ifdef _GLIBCXX_HAVE_ALIGNED_ALLOC
  [[clang::using_if_exists]] using std::aligned_alloc;
#endif
#ifdef _GLIBCXX_HAVE_AT_QUICK_EXIT
  [[clang::using_if_exists]] using std::at_quick_exit;
#endif
  [[clang::using_if_exists]] using std::atexit;
  [[clang::using_if_exists]] using std::atof;
  [[clang::using_if_exists]] using std::atoi;
  [[clang::using_if_exists]] using std::atol;
  [[clang::using_if_exists]] using std::atoll;
  [[clang::using_if_exists]] using std::bsearch;
  [[clang::using_if_exists]] using std::calloc;
  [[clang::using_if_exists]] using std::div;
  [[clang::using_if_exists]] using std::div_t;
  [[clang::using_if_exists]] using std::exit;
  [[clang::using_if_exists]] using std::free;
  [[clang::using_if_exists]] using std::getenv;
  [[clang::using_if_exists]] using std::labs;
  [[clang::using_if_exists]] using std::ldiv;
  [[clang::using_if_exists]] using std::ldiv_t;
  [[clang::using_if_exists]] using std::llabs;
  [[clang::using_if_exists]] using std::lldiv;
  [[clang::using_if_exists]] using std::lldiv_t;
  [[clang::using_if_exists]] using std::malloc;
#ifdef _GLIBCXX_HAVE_MBSTATE_T
  [[clang::using_if_exists]] using std::mblen;
  [[clang::using_if_exists]] using std::mbstowcs;
  [[clang::using_if_exists]] using std::mbtowc;
#endif
  [[clang::using_if_exists]] using std::qsort;
#ifdef _GLIBCXX_HAVE_QUICK_EXIT
  [[clang::using_if_exists]] using std::quick_exit;
#endif
  [[clang::using_if_exists]] using std::rand;
  [[clang::using_if_exists]] using std::realloc;
  [[clang::using_if_exists]] using std::size_t;
  [[clang::using_if_exists]] using std::srand;
  [[clang::using_if_exists]] using std::strtod;
  [[clang::using_if_exists]] using std::strtof;
  [[clang::using_if_exists]] using std::strtol;
  [[clang::using_if_exists]] using std::strtold;
  [[clang::using_if_exists]] using std::strtoll;
  [[clang::using_if_exists]] using std::strtoul;
  [[clang::using_if_exists]] using std::strtoull;
  [[clang::using_if_exists]] using std::system;
#ifdef _GLIBCXX_USE_WCHAR_T
  [[clang::using_if_exists]] using std::wcstombs;
  [[clang::using_if_exists]] using std::wctomb;
#endif
}

// 23.5.3 <cstring>
export C_LIB_NAMESPACE
{
  [[clang::using_if_exists]] using std::memchr;
  [[clang::using_if_exists]] using std::memcmp;
  [[clang::using_if_exists]] using std::memcpy;
  [[clang::using_if_exists]] using std::memmove;
  [[clang::using_if_exists]] using std::memset;
  [[clang::using_if_exists]] using std::size_t;
  [[clang::using_if_exists]] using std::strcat;
  [[clang::using_if_exists]] using std::strchr;
  [[clang::using_if_exists]] using std::strcmp;
  [[clang::using_if_exists]] using std::strcoll;
  [[clang::using_if_exists]] using std::strcpy;
  [[clang::using_if_exists]] using std::strcspn;
  [[clang::using_if_exists]] using std::strerror;
  [[clang::using_if_exists]] using std::strlen;
  [[clang::using_if_exists]] using std::strncat;
  [[clang::using_if_exists]] using std::strncmp;
  [[clang::using_if_exists]] using std::strncpy;
  [[clang::using_if_exists]] using std::strpbrk;
  [[clang::using_if_exists]] using std::strrchr;
  [[clang::using_if_exists]] using std::strspn;
  [[clang::using_if_exists]] using std::strstr;
  [[clang::using_if_exists]] using std::strtok;
  [[clang::using_if_exists]] using std::strxfrm;
}

// 29.15 <ctime>
export C_LIB_NAMESPACE
{
  [[clang::using_if_exists]] using std::asctime;
  [[clang::using_if_exists]] using std::clock;
  [[clang::using_if_exists]] using std::clock_t;
  [[clang::using_if_exists]] using std::ctime;
  [[clang::using_if_exists]] using std::difftime;
  [[clang::using_if_exists]] using std::gmtime;
  [[clang::using_if_exists]] using std::localtime;
  [[clang::using_if_exists]] using std::mktime;
  [[clang::using_if_exists]] using std::size_t;
  [[clang::using_if_exists]] using std::strftime;
  [[clang::using_if_exists]] using std::time;
  [[clang::using_if_exists]] using std::time_t;
  [[clang::using_if_exists]] using std::tm;
#ifdef _GLIBCXX_HAVE_TIMESPEC_GET
  [[clang::using_if_exists]] using std::timespec;
  [[clang::using_if_exists]] using std::timespec_get;
#endif
}

// 23.5.5 <cuchar>
export C_LIB_NAMESPACE
{
#if _GLIBCXX_USE_UCHAR_C8RTOMB_MBRTOC8_CXX20
  [[clang::using_if_exists]] using std::mbrtoc8;
  [[clang::using_if_exists]] using std::c8rtomb;
#endif
#if _GLIBCXX_USE_C11_UCHAR_CXX11
  [[clang::using_if_exists]] using std::mbrtoc16;
  [[clang::using_if_exists]] using std::c16rtomb;
  [[clang::using_if_exists]] using std::mbrtoc32;
  [[clang::using_if_exists]] using std::c32rtomb;
#endif
}

#if _GLIBCXX_USE_WCHAR_T
// 23.5.4 <cwchar>
export C_LIB_NAMESPACE
{
  [[clang::using_if_exists]] using std::btowc;
  [[clang::using_if_exists]] using std::fgetwc;
  [[clang::using_if_exists]] using std::fgetws;
  [[clang::using_if_exists]] using std::fputwc;
  [[clang::using_if_exists]] using std::fputws;
  [[clang::using_if_exists]] using std::fwide;
  [[clang::using_if_exists]] using std::fwprintf;
  [[clang::using_if_exists]] using std::fwscanf;
  [[clang::using_if_exists]] using std::getwc;
  [[clang::using_if_exists]] using std::getwchar;
  [[clang::using_if_exists]] using std::mbrlen;
  [[clang::using_if_exists]] using std::mbrtowc;
  [[clang::using_if_exists]] using std::mbsinit;
  [[clang::using_if_exists]] using std::mbsrtowcs;
  [[clang::using_if_exists]] using std::mbstate_t;
  [[clang::using_if_exists]] using std::putwc;
  [[clang::using_if_exists]] using std::putwchar;
  [[clang::using_if_exists]] using std::size_t;
  [[clang::using_if_exists]] using std::swprintf;
  [[clang::using_if_exists]] using std::swscanf;
  [[clang::using_if_exists]] using std::tm;
  [[clang::using_if_exists]] using std::ungetwc;
  [[clang::using_if_exists]] using std::vfwprintf;
# if _GLIBCXX_HAVE_VFWSCANF
  [[clang::using_if_exists]] using std::vfwscanf;
#endif
#ifndef _GLIBCXX_HAVE_BROKEN_VSWPRINTF
  [[clang::using_if_exists]] using std::vswprintf;
#endif
# if _GLIBCXX_HAVE_VSWSCANF
  [[clang::using_if_exists]] using std::vswscanf;
#endif
  [[clang::using_if_exists]] using std::vwprintf;
# if _GLIBCXX_HAVE_VWSCANF
  [[clang::using_if_exists]] using std::vwscanf;
#endif
  [[clang::using_if_exists]] using std::wcrtomb;
  [[clang::using_if_exists]] using std::wcscat;
  [[clang::using_if_exists]] using std::wcschr;
  [[clang::using_if_exists]] using std::wcscmp;
  [[clang::using_if_exists]] using std::wcscoll;
  [[clang::using_if_exists]] using std::wcscpy;
  [[clang::using_if_exists]] using std::wcscspn;
  [[clang::using_if_exists]] using std::wcsftime;
  [[clang::using_if_exists]] using std::wcslen;
  [[clang::using_if_exists]] using std::wcsncat;
  [[clang::using_if_exists]] using std::wcsncmp;
  [[clang::using_if_exists]] using std::wcsncpy;
  [[clang::using_if_exists]] using std::wcspbrk;
  [[clang::using_if_exists]] using std::wcsrchr;
  [[clang::using_if_exists]] using std::wcsrtombs;
  [[clang::using_if_exists]] using std::wcsspn;
  [[clang::using_if_exists]] using std::wcsstr;
  [[clang::using_if_exists]] using std::wcstod;
#if _GLIBCXX_HAVE_WCSTOF
  [[clang::using_if_exists]] using std::wcstof;
#endif
  [[clang::using_if_exists]] using std::wcstok;
  [[clang::using_if_exists]] using std::wcstol;
#if _GLIBCXX_USE_C99_WCHAR
  [[clang::using_if_exists]] using std::wcstold;
  [[clang::using_if_exists]] using std::wcstoll;
#endif
  [[clang::using_if_exists]] using std::wcstoul;
#if _GLIBCXX_USE_C99_WCHAR
  [[clang::using_if_exists]] using std::wcstoull;
#endif
  [[clang::using_if_exists]] using std::wcsxfrm;
  [[clang::using_if_exists]] using std::wctob;
  [[clang::using_if_exists]] using std::wint_t;
  [[clang::using_if_exists]] using std::wmemchr;
  [[clang::using_if_exists]] using std::wmemcmp;
  [[clang::using_if_exists]] using std::wmemcpy;
  [[clang::using_if_exists]] using std::wmemmove;
  [[clang::using_if_exists]] using std::wmemset;
  [[clang::using_if_exists]] using std::wprintf;
  [[clang::using_if_exists]] using std::wscanf;
}
#endif

#if _GLIBCXX_USE_WCHAR_T
// 23.5.2 <cwctype>
export C_LIB_NAMESPACE
{
  [[clang::using_if_exists]] using std::iswalnum;
  [[clang::using_if_exists]] using std::iswalpha;
#if _GLIBCXX_HAVE_ISWBLANK
  [[clang::using_if_exists]] using std::iswblank;
#endif
  [[clang::using_if_exists]] using std::iswcntrl;
  [[clang::using_if_exists]] using std::iswctype;
  [[clang::using_if_exists]] using std::iswdigit;
  [[clang::using_if_exists]] using std::iswgraph;
  [[clang::using_if_exists]] using std::iswlower;
  [[clang::using_if_exists]] using std::iswprint;
  [[clang::using_if_exists]] using std::iswpunct;
  [[clang::using_if_exists]] using std::iswspace;
  [[clang::using_if_exists]] using std::iswupper;
  [[clang::using_if_exists]] using std::iswxdigit;
  [[clang::using_if_exists]] using std::towctrans;
  [[clang::using_if_exists]] using std::towlower;
  [[clang::using_if_exists]] using std::towupper;
  [[clang::using_if_exists]] using std::wctrans;
  [[clang::using_if_exists]] using std::wctrans_t;
  [[clang::using_if_exists]] using std::wctype;
  [[clang::using_if_exists]] using std::wctype_t;
  [[clang::using_if_exists]] using std::wint_t;
}

#pragma GCC diagnostic pop

#endif
