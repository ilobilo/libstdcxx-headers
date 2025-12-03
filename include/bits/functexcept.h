// Function-Based Exception Support -*- C++ -*-

// Copyright (C) 2001-2024 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

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

/** @file bits/functexcept.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{exception}
 *
 *  This header provides support for -fno-exceptions.
 */

//
// ISO C++ 14882: 19.1  Exception classes
//

#ifndef _FUNCTEXCEPT_H
#define _FUNCTEXCEPT_H 1

#include <bits/c++config.h>
#include <bits/exception_defines.h>

namespace std _GLIBCXX_VISIBILITY(default)
{
_GLIBCXX_BEGIN_NAMESPACE_VERSION

  // Helper for exception objects in <except>
  __attribute__((__noreturn__)) inline void
  __throw_bad_exception(void)
  { std::__terminate(); }

  // Helper for exception objects in <new>
  __attribute__((__noreturn__)) inline void
  __throw_bad_alloc(void)
  { std::__terminate(); }

  __attribute__((__noreturn__)) inline void
  __throw_bad_array_new_length(void)
  { std::__terminate(); }

  // Helper for exception objects in <typeinfo>
  __attribute__((__noreturn__,__cold__)) inline void
  __throw_bad_cast(void)
  { std::__terminate(); }

  __attribute__((__noreturn__,__cold__)) inline void
  __throw_bad_typeid(void)
  { std::__terminate(); }

  // Helpers for exception objects in <stdexcept>
  __attribute__((__noreturn__,__cold__)) inline void
  __throw_logic_error(const char*)
  { std::__terminate(); }

  __attribute__((__noreturn__,__cold__)) inline void
  __throw_domain_error(const char*)
  { std::__terminate(); }

  __attribute__((__noreturn__,__cold__)) inline void
  __throw_invalid_argument(const char*)
  { std::__terminate(); }

  __attribute__((__noreturn__,__cold__)) inline void
  __throw_length_error(const char*)
  { std::__terminate(); }

  __attribute__((__noreturn__,__cold__)) inline void
  __throw_out_of_range(const char*)
  { std::__terminate(); }

  __attribute__((__noreturn__,__cold__)) inline void
  __throw_out_of_range_fmt(const char*, ...)
  { std::__terminate(); }

  __attribute__((__noreturn__,__cold__)) inline void
  __throw_runtime_error(const char*)
  { std::__terminate(); }

  __attribute__((__noreturn__,__cold__)) inline void
  __throw_range_error(const char*)
  { std::__terminate(); }

  __attribute__((__noreturn__,__cold__)) inline void
  __throw_overflow_error(const char*)
  { std::__terminate(); }

  __attribute__((__noreturn__,__cold__)) inline void
  __throw_underflow_error(const char*)
  { std::__terminate(); }

  // Helpers for exception objects in <ios>
  __attribute__((__noreturn__,__cold__)) inline void
  __throw_ios_failure(const char*)
  { std::__terminate(); }

  __attribute__((__noreturn__,__cold__)) inline void
  __throw_ios_failure(const char*, int)
  { std::__terminate(); }

  // Helpers for exception objects in <system_error>
  __attribute__((__noreturn__,__cold__)) inline void
  __throw_system_error(int)
  { std::__terminate(); }

  // Helpers for exception objects in <future>
  __attribute__((__noreturn__,__cold__)) inline void
  __throw_future_error(int)
  { std::__terminate(); }

  // Helpers for exception objects in <functional>
  __attribute__((__noreturn__,__cold__)) inline void
  __throw_bad_function_call()
  { std::__terminate(); }

_GLIBCXX_END_NAMESPACE_VERSION
} // namespace

#endif
