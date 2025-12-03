// -*- C++ -*- [std.modules] module std

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

#include <bits/stdc++.h>

// stdc++.h doesn't include <execution> because of TBB issues;
// FIXME for now let's avoid the problem by suppressing TBB.
#ifdef _PSTL_PAR_BACKEND_TBB
#undef _PSTL_PAR_BACKEND_TBB
#define _PSTL_PAR_BACKEND_SERIAL
#endif
// #include <execution>

// Module std does include deprecated library interfaces.
#undef __DEPRECATED
// #include <strstream>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreserved-module-identifier"
#pragma GCC diagnostic ignored "-Wcxx-attribute-extension"

export module std;

// C library exports are appended from std-clib.cc.in.

// 27.4 <algorithm>
export namespace std
{
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::in_found_result;
    [[clang::using_if_exists]] using std::ranges::in_fun_result;
    [[clang::using_if_exists]] using std::ranges::in_in_out_result;
    [[clang::using_if_exists]] using std::ranges::in_in_result;
    [[clang::using_if_exists]] using std::ranges::in_out_out_result;
    [[clang::using_if_exists]] using std::ranges::in_out_result;
    [[clang::using_if_exists]] using std::ranges::min_max_result;
  }
  [[clang::using_if_exists]] using std::all_of;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::all_of;
  }
  [[clang::using_if_exists]] using std::any_of;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::any_of;
  }
  [[clang::using_if_exists]] using std::none_of;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::none_of;
  }
  [[clang::using_if_exists]] using std::for_each;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::for_each;
    [[clang::using_if_exists]] using std::ranges::for_each_result;
  }
  [[clang::using_if_exists]] using std::for_each_n;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::for_each_n;
    [[clang::using_if_exists]] using std::ranges::for_each_n_result;
  }
  [[clang::using_if_exists]] using std::find;
  [[clang::using_if_exists]] using std::find_if;
  [[clang::using_if_exists]] using std::find_if_not;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::find;
    [[clang::using_if_exists]] using std::ranges::find_if;
    [[clang::using_if_exists]] using std::ranges::find_if_not;
  }
  [[clang::using_if_exists]] using std::find_end;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::find_end;
  }
  [[clang::using_if_exists]] using std::find_first_of;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::find_first_of;
  }
  [[clang::using_if_exists]] using std::adjacent_find;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::adjacent_find;
  }
  [[clang::using_if_exists]] using std::count;
  [[clang::using_if_exists]] using std::count_if;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::count;
    [[clang::using_if_exists]] using std::ranges::count_if;
  }
  [[clang::using_if_exists]] using std::mismatch;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::mismatch;
    [[clang::using_if_exists]] using std::ranges::mismatch_result;
  }
  [[clang::using_if_exists]] using std::equal;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::equal;
  }
  [[clang::using_if_exists]] using std::is_permutation;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::is_permutation;
  }
  [[clang::using_if_exists]] using std::search;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::search;
  }
  [[clang::using_if_exists]] using std::search_n;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::search_n;
  }
  namespace ranges
  {}
  [[clang::using_if_exists]] using std::copy;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::copy;
    [[clang::using_if_exists]] using std::ranges::copy_result;
  }
  [[clang::using_if_exists]] using std::copy_n;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::copy_n;
    [[clang::using_if_exists]] using std::ranges::copy_n_result;
  }
  [[clang::using_if_exists]] using std::copy_if;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::copy_if;
    [[clang::using_if_exists]] using std::ranges::copy_if_result;
  }
  [[clang::using_if_exists]] using std::copy_backward;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::copy_backward;
    [[clang::using_if_exists]] using std::ranges::copy_backward_result;
  }
  [[clang::using_if_exists]] using std::move;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::move;
    [[clang::using_if_exists]] using std::ranges::move_result;
  }
  [[clang::using_if_exists]] using std::move_backward;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::move_backward;
    [[clang::using_if_exists]] using std::ranges::move_backward_result;
  }
  [[clang::using_if_exists]] using std::swap_ranges;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::swap_ranges;
    [[clang::using_if_exists]] using std::ranges::swap_ranges_result;
  }
  [[clang::using_if_exists]] using std::iter_swap;
  [[clang::using_if_exists]] using std::transform;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::binary_transform_result;
    [[clang::using_if_exists]] using std::ranges::transform;
    [[clang::using_if_exists]] using std::ranges::unary_transform_result;
  }
  [[clang::using_if_exists]] using std::replace;
  [[clang::using_if_exists]] using std::replace_if;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::replace;
    [[clang::using_if_exists]] using std::ranges::replace_if;
  }
  [[clang::using_if_exists]] using std::replace_copy;
  [[clang::using_if_exists]] using std::replace_copy_if;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::replace_copy;
    [[clang::using_if_exists]] using std::ranges::replace_copy_if;
    [[clang::using_if_exists]] using std::ranges::replace_copy_if_result;
    [[clang::using_if_exists]] using std::ranges::replace_copy_result;
  }
  [[clang::using_if_exists]] using std::fill;
  [[clang::using_if_exists]] using std::fill_n;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::fill;
    [[clang::using_if_exists]] using std::ranges::fill_n;
  }
  [[clang::using_if_exists]] using std::generate;
  [[clang::using_if_exists]] using std::generate_n;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::generate;
    [[clang::using_if_exists]] using std::ranges::generate_n;
  }
  [[clang::using_if_exists]] using std::remove;
  [[clang::using_if_exists]] using std::remove_if;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::remove;
    [[clang::using_if_exists]] using std::ranges::remove_if;
  }
  [[clang::using_if_exists]] using std::remove_copy;
  [[clang::using_if_exists]] using std::remove_copy_if;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::remove_copy;
    [[clang::using_if_exists]] using std::ranges::remove_copy_if;
    [[clang::using_if_exists]] using std::ranges::remove_copy_if_result;
    [[clang::using_if_exists]] using std::ranges::remove_copy_result;
  }
  [[clang::using_if_exists]] using std::unique;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::unique;
  }
  [[clang::using_if_exists]] using std::unique_copy;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::unique_copy;
    [[clang::using_if_exists]] using std::ranges::unique_copy_result;
  }
  [[clang::using_if_exists]] using std::reverse;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::reverse;
  }
  [[clang::using_if_exists]] using std::reverse_copy;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::reverse_copy;
    [[clang::using_if_exists]] using std::ranges::reverse_copy_result;
  }
  [[clang::using_if_exists]] using std::rotate;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::rotate;
  }
  [[clang::using_if_exists]] using std::rotate_copy;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::rotate_copy;
    [[clang::using_if_exists]] using std::ranges::rotate_copy_result;
  }
  [[clang::using_if_exists]] using std::sample;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::sample;
  }
  [[clang::using_if_exists]] using std::shuffle;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::shuffle;
  }
  [[clang::using_if_exists]] using std::shift_left;
  [[clang::using_if_exists]] using std::shift_right;
#if __cpp_lib_shift >= 202202L // >= C++23
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::shift_left;
    [[clang::using_if_exists]] using std::ranges::shift_right;
  }
#endif
  [[clang::using_if_exists]] using std::sort;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::sort;
  }
  [[clang::using_if_exists]] using std::stable_sort;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::stable_sort;
  }
  [[clang::using_if_exists]] using std::partial_sort;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::partial_sort;
  }
  [[clang::using_if_exists]] using std::partial_sort_copy;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::partial_sort_copy;
    [[clang::using_if_exists]] using std::ranges::partial_sort_copy_result;
  }
  [[clang::using_if_exists]] using std::is_sorted;
  [[clang::using_if_exists]] using std::is_sorted_until;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::is_sorted;
    [[clang::using_if_exists]] using std::ranges::is_sorted_until;
  }
  [[clang::using_if_exists]] using std::nth_element;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::nth_element;
  }
  [[clang::using_if_exists]] using std::lower_bound;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::lower_bound;
  }
  [[clang::using_if_exists]] using std::upper_bound;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::upper_bound;
  }
  [[clang::using_if_exists]] using std::equal_range;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::equal_range;
  }
  [[clang::using_if_exists]] using std::binary_search;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::binary_search;
  }
  [[clang::using_if_exists]] using std::is_partitioned;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::is_partitioned;
  }
  [[clang::using_if_exists]] using std::partition;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::partition;
  }
  [[clang::using_if_exists]] using std::stable_partition;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::stable_partition;
  }
  [[clang::using_if_exists]] using std::partition_copy;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::partition_copy;
    [[clang::using_if_exists]] using std::ranges::partition_copy_result;
  }
  [[clang::using_if_exists]] using std::partition_point;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::partition_point;
  }
  [[clang::using_if_exists]] using std::merge;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::merge;
    [[clang::using_if_exists]] using std::ranges::merge_result;
  }
  [[clang::using_if_exists]] using std::inplace_merge;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::inplace_merge;
  }
  [[clang::using_if_exists]] using std::includes;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::includes;
  }
  [[clang::using_if_exists]] using std::set_union;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::set_union;
    [[clang::using_if_exists]] using std::ranges::set_union_result;
  }
  [[clang::using_if_exists]] using std::set_intersection;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::set_intersection;
    [[clang::using_if_exists]] using std::ranges::set_intersection_result;
  }
  [[clang::using_if_exists]] using std::set_difference;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::set_difference;
    [[clang::using_if_exists]] using std::ranges::set_difference_result;
  }
  [[clang::using_if_exists]] using std::set_symmetric_difference;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::set_symmetric_difference;
    [[clang::using_if_exists]] using std::ranges::set_symmetric_difference_result;
  }
  [[clang::using_if_exists]] using std::push_heap;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::push_heap;
  }
  [[clang::using_if_exists]] using std::pop_heap;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::pop_heap;
  }
  [[clang::using_if_exists]] using std::make_heap;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::make_heap;
  }
  [[clang::using_if_exists]] using std::sort_heap;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::sort_heap;
  }
  [[clang::using_if_exists]] using std::is_heap;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::is_heap;
  }
  [[clang::using_if_exists]] using std::is_heap_until;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::is_heap_until;
  }
  [[clang::using_if_exists]] using std::min;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::min;
  }
  [[clang::using_if_exists]] using std::max;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::max;
  }
  [[clang::using_if_exists]] using std::minmax;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::minmax;
    [[clang::using_if_exists]] using std::ranges::minmax_result;
  }
  [[clang::using_if_exists]] using std::min_element;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::min_element;
  }
  [[clang::using_if_exists]] using std::max_element;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::max_element;
  }
  [[clang::using_if_exists]] using std::minmax_element;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::minmax_element;
    [[clang::using_if_exists]] using std::ranges::minmax_element_result;
  }
  [[clang::using_if_exists]] using std::clamp;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::clamp;
  }
  [[clang::using_if_exists]] using std::lexicographical_compare;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::lexicographical_compare;
  }
  [[clang::using_if_exists]] using std::lexicographical_compare_three_way;
  [[clang::using_if_exists]] using std::next_permutation;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::next_permutation;
    [[clang::using_if_exists]] using std::ranges::next_permutation_result;
  }
  [[clang::using_if_exists]] using std::prev_permutation;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::prev_permutation;
    [[clang::using_if_exists]] using std::ranges::prev_permutation_result;
  }
  namespace ranges
  {
#if __cpp_lib_ranges_contains
    [[clang::using_if_exists]] using ranges::contains;
    [[clang::using_if_exists]] using ranges::contains_subrange;
#endif
#if __cpp_lib_ranges_fold
    [[clang::using_if_exists]] using ranges::fold_left;
    [[clang::using_if_exists]] using ranges::fold_left_first;
    [[clang::using_if_exists]] using ranges::fold_left_first_with_iter;
    [[clang::using_if_exists]] using ranges::fold_left_first_with_iter_result;
    [[clang::using_if_exists]] using ranges::fold_left_with_iter;
    [[clang::using_if_exists]] using ranges::fold_left_with_iter_result;
    [[clang::using_if_exists]] using ranges::fold_right;
    [[clang::using_if_exists]] using ranges::fold_right_last;
    [[clang::using_if_exists]] using ranges::in_value_result;
    [[clang::using_if_exists]] using ranges::out_value_result;
#endif
#if __cpp_lib_ranges_find_last
    [[clang::using_if_exists]] using ranges::find_last;
    [[clang::using_if_exists]] using ranges::find_last_if;
    [[clang::using_if_exists]] using ranges::find_last_if_not;
#endif
#if __cpp_lib_ranges_starts_ends_with
    [[clang::using_if_exists]] using ranges::starts_with;
    [[clang::using_if_exists]] using ranges::ends_with;
#endif
  }
}

// 22.7.2 <any>
export namespace std
{
  [[clang::using_if_exists]] using std::any;
  [[clang::using_if_exists]] using std::any_cast;
  [[clang::using_if_exists]] using std::bad_any_cast;
  [[clang::using_if_exists]] using std::make_any;
  [[clang::using_if_exists]] using std::swap;
}

// 24.3.2 <array>
export namespace std
{
  [[clang::using_if_exists]] using std::array;
  [[clang::using_if_exists]] using std::operator==;
  [[clang::using_if_exists]] using std::operator<=>;
  [[clang::using_if_exists]] using std::get;
  [[clang::using_if_exists]] using std::swap;
  [[clang::using_if_exists]] using std::to_array;
  [[clang::using_if_exists]] using std::tuple_element;
  [[clang::using_if_exists]] using std::tuple_size;
}

// 33.5.2 <atomic>
export namespace std
{
  [[clang::using_if_exists]] using std::atomic;
  [[clang::using_if_exists]] using std::atomic_bool;
  [[clang::using_if_exists]] using std::atomic_char;
  [[clang::using_if_exists]] using std::atomic_char16_t;
  [[clang::using_if_exists]] using std::atomic_char32_t;
  [[clang::using_if_exists]] using std::atomic_char8_t;
  [[clang::using_if_exists]] using std::atomic_compare_exchange_strong;
  [[clang::using_if_exists]] using std::atomic_compare_exchange_strong_explicit;
  [[clang::using_if_exists]] using std::atomic_compare_exchange_weak;
  [[clang::using_if_exists]] using std::atomic_compare_exchange_weak_explicit;
  [[clang::using_if_exists]] using std::atomic_exchange;
  [[clang::using_if_exists]] using std::atomic_exchange_explicit;
  [[clang::using_if_exists]] using std::atomic_fetch_add;
  [[clang::using_if_exists]] using std::atomic_fetch_add_explicit;
  [[clang::using_if_exists]] using std::atomic_fetch_and;
  [[clang::using_if_exists]] using std::atomic_fetch_and_explicit;
  [[clang::using_if_exists]] using std::atomic_fetch_or;
  [[clang::using_if_exists]] using std::atomic_fetch_or_explicit;
  [[clang::using_if_exists]] using std::atomic_fetch_sub;
  [[clang::using_if_exists]] using std::atomic_fetch_sub_explicit;
  [[clang::using_if_exists]] using std::atomic_fetch_xor;
  [[clang::using_if_exists]] using std::atomic_fetch_xor_explicit;
  [[clang::using_if_exists]] using std::atomic_flag;
  [[clang::using_if_exists]] using std::atomic_flag_clear;
  [[clang::using_if_exists]] using std::atomic_flag_clear_explicit;
  [[clang::using_if_exists]] using std::atomic_flag_notify_all;
  [[clang::using_if_exists]] using std::atomic_flag_notify_one;
  [[clang::using_if_exists]] using std::atomic_flag_test;
  [[clang::using_if_exists]] using std::atomic_flag_test_and_set;
  [[clang::using_if_exists]] using std::atomic_flag_test_and_set_explicit;
  [[clang::using_if_exists]] using std::atomic_flag_test_explicit;
  [[clang::using_if_exists]] using std::atomic_flag_wait;
  [[clang::using_if_exists]] using std::atomic_flag_wait_explicit;
  [[clang::using_if_exists]] using std::atomic_init;
  [[clang::using_if_exists]] using std::atomic_int;
  [[clang::using_if_exists]] using std::atomic_int16_t;
  [[clang::using_if_exists]] using std::atomic_int32_t;
  [[clang::using_if_exists]] using std::atomic_int64_t;
  [[clang::using_if_exists]] using std::atomic_int8_t;
  [[clang::using_if_exists]] using std::atomic_int_fast16_t;
  [[clang::using_if_exists]] using std::atomic_int_fast32_t;
  [[clang::using_if_exists]] using std::atomic_int_fast64_t;
  [[clang::using_if_exists]] using std::atomic_int_fast8_t;
  [[clang::using_if_exists]] using std::atomic_int_least16_t;
  [[clang::using_if_exists]] using std::atomic_int_least32_t;
  [[clang::using_if_exists]] using std::atomic_int_least64_t;
  [[clang::using_if_exists]] using std::atomic_int_least8_t;
  [[clang::using_if_exists]] using std::atomic_intmax_t;
  [[clang::using_if_exists]] using std::atomic_intptr_t;
  [[clang::using_if_exists]] using std::atomic_is_lock_free;
  [[clang::using_if_exists]] using std::atomic_llong;
  [[clang::using_if_exists]] using std::atomic_load;
  [[clang::using_if_exists]] using std::atomic_load_explicit;
  [[clang::using_if_exists]] using std::atomic_long;
  [[clang::using_if_exists]] using std::atomic_notify_all;
  [[clang::using_if_exists]] using std::atomic_notify_one;
  [[clang::using_if_exists]] using std::atomic_ptrdiff_t;
  [[clang::using_if_exists]] using std::atomic_ref;
  [[clang::using_if_exists]] using std::atomic_schar;
  [[clang::using_if_exists]] using std::atomic_short;
  [[clang::using_if_exists]] using std::atomic_signal_fence;
#ifdef __cpp_lib_atomic_lock_free_type_aliases
  [[clang::using_if_exists]] using std::atomic_signed_lock_free;
#endif
  [[clang::using_if_exists]] using std::atomic_size_t;
  [[clang::using_if_exists]] using std::atomic_store;
  [[clang::using_if_exists]] using std::atomic_store_explicit;
  [[clang::using_if_exists]] using std::atomic_thread_fence;
  [[clang::using_if_exists]] using std::atomic_uchar;
  [[clang::using_if_exists]] using std::atomic_uint;
  [[clang::using_if_exists]] using std::atomic_uint16_t;
  [[clang::using_if_exists]] using std::atomic_uint32_t;
  [[clang::using_if_exists]] using std::atomic_uint64_t;
  [[clang::using_if_exists]] using std::atomic_uint8_t;
  [[clang::using_if_exists]] using std::atomic_uint_fast16_t;
  [[clang::using_if_exists]] using std::atomic_uint_fast32_t;
  [[clang::using_if_exists]] using std::atomic_uint_fast64_t;
  [[clang::using_if_exists]] using std::atomic_uint_fast8_t;
  [[clang::using_if_exists]] using std::atomic_uint_least16_t;
  [[clang::using_if_exists]] using std::atomic_uint_least32_t;
  [[clang::using_if_exists]] using std::atomic_uint_least64_t;
  [[clang::using_if_exists]] using std::atomic_uint_least8_t;
  [[clang::using_if_exists]] using std::atomic_uintmax_t;
  [[clang::using_if_exists]] using std::atomic_uintptr_t;
  [[clang::using_if_exists]] using std::atomic_ullong;
  [[clang::using_if_exists]] using std::atomic_ulong;
#ifdef __cpp_lib_atomic_lock_free_type_aliases
  [[clang::using_if_exists]] using std::atomic_unsigned_lock_free;
#endif
  [[clang::using_if_exists]] using std::atomic_ushort;
  [[clang::using_if_exists]] using std::atomic_wait;
  [[clang::using_if_exists]] using std::atomic_wait_explicit;
  [[clang::using_if_exists]] using std::atomic_wchar_t;
  [[clang::using_if_exists]] using std::kill_dependency;
  [[clang::using_if_exists]] using std::memory_order;
  [[clang::using_if_exists]] using std::memory_order_acq_rel;
  [[clang::using_if_exists]] using std::memory_order_acquire;
  [[clang::using_if_exists]] using std::memory_order_consume;
  [[clang::using_if_exists]] using std::memory_order_relaxed;
  [[clang::using_if_exists]] using std::memory_order_release;
  [[clang::using_if_exists]] using std::memory_order_seq_cst;
  // ATOMIC_*_LOCK_FREE not exported
}

// 33.9.3 <barrier>
#if __cpp_lib_barrier
export namespace std
{
  [[clang::using_if_exists]] using std::barrier;
}
#endif

// 22.15 <bit>
export namespace std
{
  [[clang::using_if_exists]] using std::bit_cast;
  [[clang::using_if_exists]] using std::bit_ceil;
  [[clang::using_if_exists]] using std::bit_floor;
  [[clang::using_if_exists]] using std::bit_width;
  [[clang::using_if_exists]] using std::countl_one;
  [[clang::using_if_exists]] using std::countl_zero;
  [[clang::using_if_exists]] using std::countr_one;
  [[clang::using_if_exists]] using std::countr_zero;
  [[clang::using_if_exists]] using std::endian;
  [[clang::using_if_exists]] using std::has_single_bit;
  [[clang::using_if_exists]] using std::popcount;
  [[clang::using_if_exists]] using std::rotl;
  [[clang::using_if_exists]] using std::rotr;
#if __cpp_lib_byteswap // >= C++23
  [[clang::using_if_exists]] using std::byteswap;
#endif
}

// 22.9 <bitset>
export namespace std
{
  [[clang::using_if_exists]] using std::bitset;
  [[clang::using_if_exists]] using std::operator&;
  [[clang::using_if_exists]] using std::operator|;
  [[clang::using_if_exists]] using std::operator^;
  [[clang::using_if_exists]] using std::operator>>;
  [[clang::using_if_exists]] using std::operator<<;
  [[clang::using_if_exists]] using std::hash;
}

// 22.13 <charconv>
export namespace std
{
  [[clang::using_if_exists]] using std::chars_format;
  [[clang::using_if_exists]] using std::operator&;
  [[clang::using_if_exists]] using std::operator&=;
  [[clang::using_if_exists]] using std::operator^;
  [[clang::using_if_exists]] using std::operator^=;
  [[clang::using_if_exists]] using std::operator|;
  [[clang::using_if_exists]] using std::operator|=;
  [[clang::using_if_exists]] using std::operator~;
  [[clang::using_if_exists]] using std::from_chars;
  [[clang::using_if_exists]] using std::from_chars_result;
  [[clang::using_if_exists]] using std::to_chars;
  [[clang::using_if_exists]] using std::to_chars_result;
}

// 29.2 <chrono>
export namespace std
{
  namespace chrono
  {
    [[clang::using_if_exists]] using std::chrono::duration;
    [[clang::using_if_exists]] using std::chrono::time_point;
  }
  [[clang::using_if_exists]] using std::common_type;
  namespace chrono
  {
    [[clang::using_if_exists]] using std::chrono::duration_values;
    [[clang::using_if_exists]] using std::chrono::treat_as_floating_point;
    [[clang::using_if_exists]] using std::chrono::treat_as_floating_point_v;
    [[clang::using_if_exists]] using std::chrono::operator+;
    [[clang::using_if_exists]] using std::chrono::operator-;
    [[clang::using_if_exists]] using std::chrono::operator*;
    [[clang::using_if_exists]] using std::chrono::operator/;
    [[clang::using_if_exists]] using std::chrono::operator%;
    [[clang::using_if_exists]] using std::chrono::operator==;
    [[clang::using_if_exists]] using std::chrono::operator<;
    [[clang::using_if_exists]] using std::chrono::operator>;
    [[clang::using_if_exists]] using std::chrono::operator<=;
    [[clang::using_if_exists]] using std::chrono::operator>=;
    [[clang::using_if_exists]] using std::chrono::operator<=>;
    [[clang::using_if_exists]] using std::chrono::ceil;
    [[clang::using_if_exists]] using std::chrono::duration_cast;
    [[clang::using_if_exists]] using std::chrono::floor;
    [[clang::using_if_exists]] using std::chrono::round;
    [[clang::using_if_exists]] using std::chrono::operator<<;
    [[clang::using_if_exists]] using std::chrono::abs;
    [[clang::using_if_exists]] using std::chrono::day;
    [[clang::using_if_exists]] using std::chrono::days;
    [[clang::using_if_exists]] using std::chrono::file_clock;
    [[clang::using_if_exists]] using std::chrono::file_time;
    [[clang::using_if_exists]] using std::chrono::hh_mm_ss;
    [[clang::using_if_exists]] using std::chrono::high_resolution_clock;
    [[clang::using_if_exists]] using std::chrono::hours;
    [[clang::using_if_exists]] using std::chrono::is_am;
    [[clang::using_if_exists]] using std::chrono::is_pm;
    [[clang::using_if_exists]] using std::chrono::last_spec;
    [[clang::using_if_exists]] using std::chrono::local_days;
    [[clang::using_if_exists]] using std::chrono::local_seconds;
    [[clang::using_if_exists]] using std::chrono::local_t;
    [[clang::using_if_exists]] using std::chrono::local_time;
    [[clang::using_if_exists]] using std::chrono::make12;
    [[clang::using_if_exists]] using std::chrono::make24;
    [[clang::using_if_exists]] using std::chrono::microseconds;
    [[clang::using_if_exists]] using std::chrono::milliseconds;
    [[clang::using_if_exists]] using std::chrono::minutes;
    [[clang::using_if_exists]] using std::chrono::month;
    [[clang::using_if_exists]] using std::chrono::month_day;
    [[clang::using_if_exists]] using std::chrono::month_day_last;
    [[clang::using_if_exists]] using std::chrono::month_weekday;
    [[clang::using_if_exists]] using std::chrono::month_weekday_last;
    [[clang::using_if_exists]] using std::chrono::months;
    [[clang::using_if_exists]] using std::chrono::nanoseconds;
    [[clang::using_if_exists]] using std::chrono::seconds;
    [[clang::using_if_exists]] using std::chrono::steady_clock;
    [[clang::using_if_exists]] using std::chrono::sys_days;
    [[clang::using_if_exists]] using std::chrono::sys_seconds;
    [[clang::using_if_exists]] using std::chrono::sys_time;
    [[clang::using_if_exists]] using std::chrono::system_clock;
    [[clang::using_if_exists]] using std::chrono::time_point_cast;
    [[clang::using_if_exists]] using std::chrono::weekday;
    [[clang::using_if_exists]] using std::chrono::weekday_indexed;
    [[clang::using_if_exists]] using std::chrono::weekday_last;
    [[clang::using_if_exists]] using std::chrono::weeks;
    [[clang::using_if_exists]] using std::chrono::year;
    [[clang::using_if_exists]] using std::chrono::year_month;
    [[clang::using_if_exists]] using std::chrono::year_month_day;
    [[clang::using_if_exists]] using std::chrono::year_month_day_last;
    [[clang::using_if_exists]] using std::chrono::year_month_weekday;
    [[clang::using_if_exists]] using std::chrono::year_month_weekday_last;
    [[clang::using_if_exists]] using std::chrono::years;
  }
  [[clang::using_if_exists]] using std::formatter;
  namespace chrono
  {
    [[clang::using_if_exists]] using std::chrono::April;
    [[clang::using_if_exists]] using std::chrono::August;
    [[clang::using_if_exists]] using std::chrono::December;
    [[clang::using_if_exists]] using std::chrono::February;
    [[clang::using_if_exists]] using std::chrono::Friday;
    [[clang::using_if_exists]] using std::chrono::January;
    [[clang::using_if_exists]] using std::chrono::July;
    [[clang::using_if_exists]] using std::chrono::June;
    [[clang::using_if_exists]] using std::chrono::last;
    [[clang::using_if_exists]] using std::chrono::March;
    [[clang::using_if_exists]] using std::chrono::May;
    [[clang::using_if_exists]] using std::chrono::Monday;
    [[clang::using_if_exists]] using std::chrono::November;
    [[clang::using_if_exists]] using std::chrono::October;
    [[clang::using_if_exists]] using std::chrono::Saturday;
    [[clang::using_if_exists]] using std::chrono::September;
    [[clang::using_if_exists]] using std::chrono::Sunday;
    [[clang::using_if_exists]] using std::chrono::Thursday;
    [[clang::using_if_exists]] using std::chrono::Tuesday;
    [[clang::using_if_exists]] using std::chrono::Wednesday;
    [[clang::using_if_exists]] using chrono::utc_clock;
    [[clang::using_if_exists]] using chrono::utc_time;
    [[clang::using_if_exists]] using chrono::utc_seconds;
    [[clang::using_if_exists]] using chrono::tai_clock;
    [[clang::using_if_exists]] using chrono::tai_time;
    [[clang::using_if_exists]] using chrono::tai_seconds;
    [[clang::using_if_exists]] using chrono::gps_clock;
    [[clang::using_if_exists]] using chrono::gps_time;
    [[clang::using_if_exists]] using chrono::gps_seconds;
    [[clang::using_if_exists]] using chrono::clock_cast;
    [[clang::using_if_exists]] using chrono::parse;
    [[clang::using_if_exists]] using chrono::from_stream;
    [[clang::using_if_exists]] using chrono::clock_time_conversion;
#if __cpp_lib_chrono >= 201907L
    [[clang::using_if_exists]] using chrono::tzdb;
    [[clang::using_if_exists]] using chrono::tzdb_list;
    [[clang::using_if_exists]] using chrono::get_tzdb;
    [[clang::using_if_exists]] using chrono::get_tzdb_list;
    [[clang::using_if_exists]] using chrono::locate_zone;
    [[clang::using_if_exists]] using chrono::current_zone;
    [[clang::using_if_exists]] using chrono::reload_tzdb;
    [[clang::using_if_exists]] using chrono::remote_version;
    [[clang::using_if_exists]] using chrono::nonexistent_local_time;
    [[clang::using_if_exists]] using chrono::ambiguous_local_time;
    [[clang::using_if_exists]] using chrono::sys_info;
    [[clang::using_if_exists]] using chrono::local_info;
    [[clang::using_if_exists]] using chrono::choose;
    [[clang::using_if_exists]] using chrono::time_zone;
    [[clang::using_if_exists]] using chrono::zoned_traits;
    [[clang::using_if_exists]] using chrono::zoned_time;
    [[clang::using_if_exists]] using chrono::zoned_seconds;
    [[clang::using_if_exists]] using chrono::leap_second;
    [[clang::using_if_exists]] using chrono::leap_second_info;
    [[clang::using_if_exists]] using chrono::get_leap_second_info;
    [[clang::using_if_exists]] using chrono::time_zone_link;
    [[clang::using_if_exists]] using chrono::local_time_format;
#endif
    [[clang::using_if_exists]] using chrono::is_clock;
    [[clang::using_if_exists]] using chrono::is_clock_v;
  }
}
export namespace std::inline literals::inline chrono_literals
{
  [[clang::using_if_exists]] using std::literals::chrono_literals::operator""h;
  [[clang::using_if_exists]] using std::literals::chrono_literals::operator""min;
  [[clang::using_if_exists]] using std::literals::chrono_literals::operator""s;
  [[clang::using_if_exists]] using std::literals::chrono_literals::operator""ms;
  [[clang::using_if_exists]] using std::literals::chrono_literals::operator""us;
  [[clang::using_if_exists]] using std::literals::chrono_literals::operator""ns;
  [[clang::using_if_exists]] using std::literals::chrono_literals::operator""d;
  [[clang::using_if_exists]] using std::literals::chrono_literals::operator""y;
}
export namespace std::chrono {
  using namespace literals::chrono_literals;
}

// <codecvt>: deprecated C++17, removed C++26
export namespace std
{
  [[clang::using_if_exists]] using std::codecvt_mode;
  [[clang::using_if_exists]] using std::codecvt_utf16;
  [[clang::using_if_exists]] using std::codecvt_utf8;
  [[clang::using_if_exists]] using std::codecvt_utf8_utf16;
}

// 17.11.1 <compare>
export namespace std
{
  [[clang::using_if_exists]] using std::common_comparison_category;
  [[clang::using_if_exists]] using std::common_comparison_category_t;
  [[clang::using_if_exists]] using std::compare_three_way;
  [[clang::using_if_exists]] using std::compare_three_way_result;
  [[clang::using_if_exists]] using std::compare_three_way_result_t;
  [[clang::using_if_exists]] using std::is_eq;
  [[clang::using_if_exists]] using std::is_gt;
  [[clang::using_if_exists]] using std::is_gteq;
  [[clang::using_if_exists]] using std::is_lt;
  [[clang::using_if_exists]] using std::is_lteq;
  [[clang::using_if_exists]] using std::is_neq;
  [[clang::using_if_exists]] using std::partial_ordering;
  [[clang::using_if_exists]] using std::strong_ordering;
  [[clang::using_if_exists]] using std::three_way_comparable;
  [[clang::using_if_exists]] using std::three_way_comparable_with;
  [[clang::using_if_exists]] using std::weak_ordering;
  [[clang::using_if_exists]] using std::compare_partial_order_fallback;
  [[clang::using_if_exists]] using std::compare_strong_order_fallback;
  [[clang::using_if_exists]] using std::compare_weak_order_fallback;
  [[clang::using_if_exists]] using std::partial_order;
  [[clang::using_if_exists]] using std::strong_order;
  [[clang::using_if_exists]] using std::weak_order;
#if __glibcxx_type_order >= 202506L
  [[clang::using_if_exists]] using std::type_order;
  [[clang::using_if_exists]] using std::type_order_v;
#endif
}

// 28.4 <complex>
export namespace std
{
  [[clang::using_if_exists]] using std::complex;
  [[clang::using_if_exists]] using std::operator+;
  [[clang::using_if_exists]] using std::operator-;
  // [[clang::using_if_exists]] using std::operator*;
  // [[clang::using_if_exists]] using std::operator/;
  [[clang::using_if_exists]] using std::operator==;
  [[clang::using_if_exists]] using std::operator>>;
  [[clang::using_if_exists]] using std::operator<<;
  [[clang::using_if_exists]] using std::abs;
  [[clang::using_if_exists]] using std::acos;
  [[clang::using_if_exists]] using std::acosh;
  [[clang::using_if_exists]] using std::arg;
  [[clang::using_if_exists]] using std::asin;
  [[clang::using_if_exists]] using std::asinh;
  [[clang::using_if_exists]] using std::atan;
  [[clang::using_if_exists]] using std::atanh;
  [[clang::using_if_exists]] using std::conj;
  [[clang::using_if_exists]] using std::cos;
  [[clang::using_if_exists]] using std::cosh;
  [[clang::using_if_exists]] using std::exp;
  [[clang::using_if_exists]] using std::imag;
  [[clang::using_if_exists]] using std::log;
  [[clang::using_if_exists]] using std::log10;
  [[clang::using_if_exists]] using std::norm;
  [[clang::using_if_exists]] using std::polar;
  [[clang::using_if_exists]] using std::pow;
  [[clang::using_if_exists]] using std::proj;
  [[clang::using_if_exists]] using std::real;
  [[clang::using_if_exists]] using std::sin;
  [[clang::using_if_exists]] using std::sinh;
  [[clang::using_if_exists]] using std::sqrt;
  [[clang::using_if_exists]] using std::tan;
  [[clang::using_if_exists]] using std::tanh;
#if __cpp_lib_tuple_like >= 202311L
  [[clang::using_if_exists]] using std::tuple_element;
  [[clang::using_if_exists]] using std::tuple_element_t;
  [[clang::using_if_exists]] using std::tuple_size;
  [[clang::using_if_exists]] using std::tuple_size_v;
  [[clang::using_if_exists]] using std::get;
#endif
}
export namespace std::inline literals::inline complex_literals
{
  [[clang::using_if_exists]] using std::operator""il;
  [[clang::using_if_exists]] using std::operator""i;
  [[clang::using_if_exists]] using std::operator""if;
}

// 18 <concepts>
export namespace std
{
  [[clang::using_if_exists]] using std::assignable_from;
  [[clang::using_if_exists]] using std::common_reference_with;
  [[clang::using_if_exists]] using std::common_with;
  [[clang::using_if_exists]] using std::convertible_to;
  [[clang::using_if_exists]] using std::derived_from;
  [[clang::using_if_exists]] using std::floating_point;
  [[clang::using_if_exists]] using std::integral;
  [[clang::using_if_exists]] using std::same_as;
  [[clang::using_if_exists]] using std::signed_integral;
  [[clang::using_if_exists]] using std::unsigned_integral;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::swap;
  }
  [[clang::using_if_exists]] using std::constructible_from;
  [[clang::using_if_exists]] using std::copy_constructible;
  [[clang::using_if_exists]] using std::copyable;
  [[clang::using_if_exists]] using std::default_initializable;
  [[clang::using_if_exists]] using std::destructible;
  [[clang::using_if_exists]] using std::equality_comparable;
  [[clang::using_if_exists]] using std::equality_comparable_with;
  [[clang::using_if_exists]] using std::equivalence_relation;
  [[clang::using_if_exists]] using std::invocable;
  [[clang::using_if_exists]] using std::movable;
  [[clang::using_if_exists]] using std::move_constructible;
  [[clang::using_if_exists]] using std::predicate;
  [[clang::using_if_exists]] using std::regular;
  [[clang::using_if_exists]] using std::regular_invocable;
  [[clang::using_if_exists]] using std::relation;
  [[clang::using_if_exists]] using std::semiregular;
  [[clang::using_if_exists]] using std::strict_weak_order;
  [[clang::using_if_exists]] using std::swappable;
  [[clang::using_if_exists]] using std::swappable_with;
  [[clang::using_if_exists]] using std::totally_ordered;
  [[clang::using_if_exists]] using std::totally_ordered_with;
}

// 33.7 <condition_variable>
export namespace std
{
  [[clang::using_if_exists]] using std::condition_variable;
  [[clang::using_if_exists]] using std::condition_variable_any;
  [[clang::using_if_exists]] using std::cv_status;
  [[clang::using_if_exists]] using std::notify_all_at_thread_exit;
}

// 17.12.2 <coroutine>
#if __cpp_lib_coroutine
export namespace std
{
  [[clang::using_if_exists]] using std::coroutine_handle;
  [[clang::using_if_exists]] using std::coroutine_traits;
  [[clang::using_if_exists]] using std::operator==;
  [[clang::using_if_exists]] using std::operator<=>;
  [[clang::using_if_exists]] using std::hash;
  [[clang::using_if_exists]] using std::noop_coroutine;
  [[clang::using_if_exists]] using std::noop_coroutine_handle;
  [[clang::using_if_exists]] using std::noop_coroutine_promise;
  [[clang::using_if_exists]] using std::suspend_always;
  [[clang::using_if_exists]] using std::suspend_never;
}
#endif // __cpp_lib_coroutine

// 22.16 <debugging>
#if __cpp_lib_debugging
export namespace std
{
  [[clang::using_if_exists]] using std::breakpoint;
  [[clang::using_if_exists]] using std::breakpoint_if_debugging;
  [[clang::using_if_exists]] using std::is_debugger_present;
}
#endif

// 24.3 <deque>
export namespace std
{
  [[clang::using_if_exists]] using std::deque;
  [[clang::using_if_exists]] using std::operator==;
  [[clang::using_if_exists]] using std::operator<=>;
  [[clang::using_if_exists]] using std::erase;
  [[clang::using_if_exists]] using std::erase_if;
  [[clang::using_if_exists]] using std::swap;
  namespace pmr
  {
    [[clang::using_if_exists]] using std::pmr::deque;
  }
}

// 17.9.2 <exception>
export namespace std
{
  [[clang::using_if_exists]] using std::bad_exception;
  [[clang::using_if_exists]] using std::current_exception;
  [[clang::using_if_exists]] using std::exception;
  [[clang::using_if_exists]] using std::exception_ptr;
  [[clang::using_if_exists]] using std::get_terminate;
  [[clang::using_if_exists]] using std::make_exception_ptr;
  [[clang::using_if_exists]] using std::nested_exception;
  [[clang::using_if_exists]] using std::rethrow_exception;
  [[clang::using_if_exists]] using std::rethrow_if_nested;
  [[clang::using_if_exists]] using std::set_terminate;
  [[clang::using_if_exists]] using std::terminate;
  [[clang::using_if_exists]] using std::terminate_handler;
  [[clang::using_if_exists]] using std::throw_with_nested;
  [[clang::using_if_exists]] using std::uncaught_exception;
  [[clang::using_if_exists]] using std::uncaught_exceptions;
#if __cpp_lib_exception_ptr_cast >= 202506L
  [[clang::using_if_exists]] using std::exception_ptr_cast;
#endif
}

// 34.4 <execution>
#if __cpp_lib_execution
export namespace std
{
  [[clang::using_if_exists]] using std::is_execution_policy;
  [[clang::using_if_exists]] using std::is_execution_policy_v;
  namespace execution
  {
    [[clang::using_if_exists]] using std::execution::sequenced_policy;
    [[clang::using_if_exists]] using std::execution::parallel_policy;
    [[clang::using_if_exists]] using std::execution::parallel_unsequenced_policy;
    [[clang::using_if_exists]] using std::execution::unsequenced_policy;
    [[clang::using_if_exists]] using std::execution::seq;
    [[clang::using_if_exists]] using std::execution::par;
    [[clang::using_if_exists]] using std::execution::par_unseq;
    [[clang::using_if_exists]] using std::execution::unseq;
  }
#if __cpp_lib_senders
  [[clang::using_if_exists]] using std::forwarding_query_t;
  [[clang::using_if_exists]] using std::get_allocator_t;
  [[clang::using_if_exists]] using std::get_stop_token_t;
  [[clang::using_if_exists]] using std::forwarding_query;
  [[clang::using_if_exists]] using std::get_allocator;
  [[clang::using_if_exists]] using std::get_stop_token;
  [[clang::using_if_exists]] using std::stop_token_of_t;
  namespace execution
  {
    [[clang::using_if_exists]] using std::execution::get_domain_t;
    [[clang::using_if_exists]] using std::execution::get_scheduler_t;
    [[clang::using_if_exists]] using std::execution::get_delegation_scheduler_t;
    [[clang::using_if_exists]] using std::execution::get_forward_progress_guarantee_t;
    [[clang::using_if_exists]] using std::execution::get_completion_scheduler_t;
    [[clang::using_if_exists]] using std::execution::get_domain;
    [[clang::using_if_exists]] using std::execution::get_scheduler;
    [[clang::using_if_exists]] using std::execution::get_delegation_scheduler;
    [[clang::using_if_exists]] using std::execution::forward_progress_guarantee;
    [[clang::using_if_exists]] using std::execution::get_forward_progress_guarantee;
    [[clang::using_if_exists]] using std::execution::get_completion_scheduler;
    [[clang::using_if_exists]] using std::execution::empty_env;
    [[clang::using_if_exists]] using std::execution::get_env_t;
    [[clang::using_if_exists]] using std::execution::get_env;
    [[clang::using_if_exists]] using std::execution::env_of_t;
    [[clang::using_if_exists]] using std::execution::default_domain;
    [[clang::using_if_exists]] using std::execution::scheduler_t;
    [[clang::using_if_exists]] using std::execution::scheduler;
    [[clang::using_if_exists]] using std::execution::receiver_t;
    [[clang::using_if_exists]] using std::execution::receiver;
    [[clang::using_if_exists]] using std::execution::receiver_of;
    [[clang::using_if_exists]] using std::execution::set_value_t;
    [[clang::using_if_exists]] using std::execution::set_error_t;
    [[clang::using_if_exists]] using std::execution::set_stopped_t;
    [[clang::using_if_exists]] using std::execution::set_value;
    [[clang::using_if_exists]] using std::execution::set_error;
    [[clang::using_if_exists]] using std::execution::set_stopped;
    [[clang::using_if_exists]] using std::execution::operation_state_t;
    [[clang::using_if_exists]] using std::execution::operation_state;
    [[clang::using_if_exists]] using std::execution::start_t;
    [[clang::using_if_exists]] using std::execution::start;
    [[clang::using_if_exists]] using std::execution::sender_t;
    [[clang::using_if_exists]] using std::execution::sender;
    [[clang::using_if_exists]] using std::execution::sender_in;
    [[clang::using_if_exists]] using std::execution::sender_to;
    [[clang::using_if_exists]] using std::execution::get_completion_signatures_t;
    [[clang::using_if_exists]] using std::execution::get_completion_signatures;
    [[clang::using_if_exists]] using std::execution::completion_signatures_of_t;
    [[clang::using_if_exists]] using std::execution::value_types_of_t;
    [[clang::using_if_exists]] using std::execution::error_types_of_t;
    [[clang::using_if_exists]] using std::execution::sends_stopped;
    [[clang::using_if_exists]] using std::execution::tag_of_t;
    [[clang::using_if_exists]] using std::execution::transform_sender;
    [[clang::using_if_exists]] using std::execution::transform_env;
    [[clang::using_if_exists]] using std::execution::apply_sender;
    [[clang::using_if_exists]] using std::execution::connect_t;
    [[clang::using_if_exists]] using std::execution::connect;
    [[clang::using_if_exists]] using std::execution::connect_result_t;
    [[clang::using_if_exists]] using std::execution::just_t;
    [[clang::using_if_exists]] using std::execution::just_error_t;
    [[clang::using_if_exists]] using std::execution::just_stopped_t;
    [[clang::using_if_exists]] using std::execution::schedule_t;
    [[clang::using_if_exists]] using std::execution::just;
    [[clang::using_if_exists]] using std::execution::just_error;
    [[clang::using_if_exists]] using std::execution::just_stopped;
    [[clang::using_if_exists]] using std::execution::schedule;
    [[clang::using_if_exists]] using std::execution::read_env;
    [[clang::using_if_exists]] using std::execution::schedule_result_t;
    [[clang::using_if_exists]] using std::execution::sender_adaptor_closure;
    [[clang::using_if_exists]] using std::execution::starts_on_t;
    [[clang::using_if_exists]] using std::execution::continues_on_t;
    [[clang::using_if_exists]] using std::execution::on_t;
    [[clang::using_if_exists]] using std::execution::schedule_from_t;
    [[clang::using_if_exists]] using std::execution::then_t;
    [[clang::using_if_exists]] using std::execution::upon_error_t;
    [[clang::using_if_exists]] using std::execution::upon_stopped_t;
    [[clang::using_if_exists]] using std::execution::let_value_t;
    [[clang::using_if_exists]] using std::execution::let_error_t;
    [[clang::using_if_exists]] using std::execution::let_stopped_t;
    [[clang::using_if_exists]] using std::execution::bulk_t;
    [[clang::using_if_exists]] using std::execution::split_t;
    [[clang::using_if_exists]] using std::execution::when_all_t;
    [[clang::using_if_exists]] using std::execution::when_all_with_variant_t;
    [[clang::using_if_exists]] using std::execution::into_variant_t;
    [[clang::using_if_exists]] using std::execution::stopped_as_optional_t;
    [[clang::using_if_exists]] using std::execution::stopped_as_error_t;
    [[clang::using_if_exists]] using std::execution::starts_on;
    [[clang::using_if_exists]] using std::execution::continues_on;
    [[clang::using_if_exists]] using std::execution::on;
    [[clang::using_if_exists]] using std::execution::schedule_from;
    [[clang::using_if_exists]] using std::execution::then;
    [[clang::using_if_exists]] using std::execution::upon_error;
    [[clang::using_if_exists]] using std::execution::upon_stopped;
    [[clang::using_if_exists]] using std::execution::let_value;
    [[clang::using_if_exists]] using std::execution::let_error;
    [[clang::using_if_exists]] using std::execution::let_stopped;
    [[clang::using_if_exists]] using std::execution::bulk;
    [[clang::using_if_exists]] using std::execution::split;
    [[clang::using_if_exists]] using std::execution::when_all;
    [[clang::using_if_exists]] using std::execution::when_all_with_variant;
    [[clang::using_if_exists]] using std::execution::into_variant;
    [[clang::using_if_exists]] using std::execution::stopped_as_optional;
    [[clang::using_if_exists]] using std::execution::stopped_as_error;
    [[clang::using_if_exists]] using std::execution::completion_signatures;
    [[clang::using_if_exists]] using std::execution::transform_completion_signatures;
    [[clang::using_if_exists]] using std::execution::transform_completion_signatures_of;
    [[clang::using_if_exists]] using std::execution::run_loop;
  }
  namespace this_thread
  {
    [[clang::using_if_exists]] using std::this_thread::sync_wait_t;
    [[clang::using_if_exists]] using std::this_thread::sync_wait_with_variant_t;
    [[clang::using_if_exists]] using std::this_thread::sync_wait;
    [[clang::using_if_exists]] using std::this_thread::sync_wait_with_variant;
  }
#endif // __cpp_lib_senders
}
#endif // __cpp_lib_execution

// 22.8 <expected>
#if __cpp_lib_expected
export namespace std
{
  [[clang::using_if_exists]] using std::unexpected;
  [[clang::using_if_exists]] using std::bad_expected_access;
  [[clang::using_if_exists]] using std::unexpect_t;
  [[clang::using_if_exists]] using std::unexpect;
  [[clang::using_if_exists]] using std::expected;
}
#endif

// <filesystem>
#if __cpp_lib_filesystem
export namespace std::filesystem
{
  [[clang::using_if_exists]] using std::filesystem::begin;
  [[clang::using_if_exists]] using std::filesystem::copy_options;
  [[clang::using_if_exists]] using std::filesystem::directory_entry;
  [[clang::using_if_exists]] using std::filesystem::directory_iterator;
  [[clang::using_if_exists]] using std::filesystem::directory_options;
  [[clang::using_if_exists]] using std::filesystem::end;
  [[clang::using_if_exists]] using std::filesystem::file_status;
  [[clang::using_if_exists]] using std::filesystem::file_time_type;
  [[clang::using_if_exists]] using std::filesystem::file_type;
  [[clang::using_if_exists]] using std::filesystem::filesystem_error;
  [[clang::using_if_exists]] using std::filesystem::hash_value;
  [[clang::using_if_exists]] using std::filesystem::path;
  [[clang::using_if_exists]] using std::filesystem::perm_options;
  [[clang::using_if_exists]] using std::filesystem::perms;
  [[clang::using_if_exists]] using std::filesystem::recursive_directory_iterator;
  [[clang::using_if_exists]] using std::filesystem::space_info;
  [[clang::using_if_exists]] using std::filesystem::swap;
  [[clang::using_if_exists]] using std::filesystem::operator&;
  [[clang::using_if_exists]] using std::filesystem::operator&=;
  [[clang::using_if_exists]] using std::filesystem::operator^;
  [[clang::using_if_exists]] using std::filesystem::operator^=;
  [[clang::using_if_exists]] using std::filesystem::operator|;
  [[clang::using_if_exists]] using std::filesystem::operator|=;
  [[clang::using_if_exists]] using std::filesystem::operator~;
  [[clang::using_if_exists]] using std::filesystem::absolute;
  [[clang::using_if_exists]] using std::filesystem::canonical;
  [[clang::using_if_exists]] using std::filesystem::copy;
  [[clang::using_if_exists]] using std::filesystem::copy_file;
  [[clang::using_if_exists]] using std::filesystem::copy_symlink;
  [[clang::using_if_exists]] using std::filesystem::create_directories;
  [[clang::using_if_exists]] using std::filesystem::create_directory;
  [[clang::using_if_exists]] using std::filesystem::create_directory_symlink;
  [[clang::using_if_exists]] using std::filesystem::create_hard_link;
  [[clang::using_if_exists]] using std::filesystem::create_symlink;
  [[clang::using_if_exists]] using std::filesystem::current_path;
  [[clang::using_if_exists]] using std::filesystem::equivalent;
  [[clang::using_if_exists]] using std::filesystem::exists;
  [[clang::using_if_exists]] using std::filesystem::file_size;
  [[clang::using_if_exists]] using std::filesystem::hard_link_count;
  [[clang::using_if_exists]] using std::filesystem::is_block_file;
  [[clang::using_if_exists]] using std::filesystem::is_character_file;
  [[clang::using_if_exists]] using std::filesystem::is_directory;
  [[clang::using_if_exists]] using std::filesystem::is_empty;
  [[clang::using_if_exists]] using std::filesystem::is_fifo;
  [[clang::using_if_exists]] using std::filesystem::is_other;
  [[clang::using_if_exists]] using std::filesystem::is_regular_file;
  [[clang::using_if_exists]] using std::filesystem::is_socket;
  [[clang::using_if_exists]] using std::filesystem::is_symlink;
  [[clang::using_if_exists]] using std::filesystem::last_write_time;
  [[clang::using_if_exists]] using std::filesystem::permissions;
  [[clang::using_if_exists]] using std::filesystem::proximate;
  [[clang::using_if_exists]] using std::filesystem::read_symlink;
  [[clang::using_if_exists]] using std::filesystem::relative;
  [[clang::using_if_exists]] using std::filesystem::remove;
  [[clang::using_if_exists]] using std::filesystem::remove_all;
  [[clang::using_if_exists]] using std::filesystem::rename;
  [[clang::using_if_exists]] using std::filesystem::resize_file;
  [[clang::using_if_exists]] using std::filesystem::space;
  [[clang::using_if_exists]] using std::filesystem::status;
  [[clang::using_if_exists]] using std::filesystem::status_known;
  [[clang::using_if_exists]] using std::filesystem::symlink_status;
  [[clang::using_if_exists]] using std::filesystem::temp_directory_path;
  [[clang::using_if_exists]] using std::filesystem::u8path;
  [[clang::using_if_exists]] using std::filesystem::weakly_canonical;
}
#endif // __cpp_lib_filesystem

// <flat_map>
#if __cpp_lib_flat_map
export namespace std
{
  [[clang::using_if_exists]] using std::flat_map;
  [[clang::using_if_exists]] using std::flat_multimap;
  [[clang::using_if_exists]] using std::sorted_equivalent;
  [[clang::using_if_exists]] using std::sorted_equivalent_t;
  [[clang::using_if_exists]] using std::sorted_unique;
  [[clang::using_if_exists]] using std::sorted_unique_t;
}
#endif

// <flat_set>
#if __cpp_lib_flat_set
export namespace std
{
  [[clang::using_if_exists]] using std::flat_set;
  [[clang::using_if_exists]] using std::flat_multiset;
  [[clang::using_if_exists]] using std::sorted_equivalent;
  [[clang::using_if_exists]] using std::sorted_equivalent_t;
  [[clang::using_if_exists]] using std::sorted_unique;
  [[clang::using_if_exists]] using std::sorted_unique_t;
}
#endif

// <format>
export namespace std
{
  [[clang::using_if_exists]] using std::basic_format_arg;
  [[clang::using_if_exists]] using std::basic_format_args;
  [[clang::using_if_exists]] using std::basic_format_context;
  [[clang::using_if_exists]] using std::basic_format_parse_context;
  [[clang::using_if_exists]] using std::basic_format_string;
  [[clang::using_if_exists]] using std::format;
  [[clang::using_if_exists]] using std::format_args;
  [[clang::using_if_exists]] using std::format_context;
  [[clang::using_if_exists]] using std::format_error;
  [[clang::using_if_exists]] using std::format_parse_context;
  [[clang::using_if_exists]] using std::format_string;
  [[clang::using_if_exists]] using std::format_to;
  [[clang::using_if_exists]] using std::format_to_n;
  [[clang::using_if_exists]] using std::format_to_n_result;
  [[clang::using_if_exists]] using std::formatted_size;
#if __cpp_lib_format_ranges
  [[clang::using_if_exists]] using std::formattable;
#endif
  [[clang::using_if_exists]] using std::formatter;
  [[clang::using_if_exists]] using std::make_format_args;
  [[clang::using_if_exists]] using std::make_wformat_args;
#if __cpp_lib_format >= 202311L // >= C++26
  [[clang::using_if_exists]] using std::runtime_format;
#endif
  [[clang::using_if_exists]] using std::vformat;
  [[clang::using_if_exists]] using std::vformat_to;
  [[clang::using_if_exists]] using std::visit_format_arg;
  [[clang::using_if_exists]] using std::wformat_args;
  [[clang::using_if_exists]] using std::wformat_context;
  [[clang::using_if_exists]] using std::wformat_parse_context;
  [[clang::using_if_exists]] using std::wformat_string;
#ifdef __cpp_lib_format_ranges
  [[clang::using_if_exists]] using std::format_kind;
  [[clang::using_if_exists]] using std::range_format;
  [[clang::using_if_exists]] using std::range_formatter;
#endif
}

// <forward_list>
export namespace std
{
  [[clang::using_if_exists]] using std::forward_list;
  [[clang::using_if_exists]] using std::operator==;
  [[clang::using_if_exists]] using std::operator<=>;
  [[clang::using_if_exists]] using std::erase;
  [[clang::using_if_exists]] using std::erase_if;
  [[clang::using_if_exists]] using std::swap;
  namespace pmr
  {
    [[clang::using_if_exists]] using std::pmr::forward_list;
  }
}

// <fstream>
export namespace std
{
  [[clang::using_if_exists]] using std::basic_filebuf;
  [[clang::using_if_exists]] using std::basic_fstream;
  [[clang::using_if_exists]] using std::basic_ifstream;
  [[clang::using_if_exists]] using std::basic_ofstream;
  [[clang::using_if_exists]] using std::filebuf;
  [[clang::using_if_exists]] using std::fstream;
  [[clang::using_if_exists]] using std::ifstream;
  [[clang::using_if_exists]] using std::ofstream;
  [[clang::using_if_exists]] using std::swap;
  [[clang::using_if_exists]] using std::wfilebuf;
  [[clang::using_if_exists]] using std::wfstream;
  [[clang::using_if_exists]] using std::wifstream;
  [[clang::using_if_exists]] using std::wofstream;
}

// <functional>
export namespace std
{
  [[clang::using_if_exists]] using std::bind;
  [[clang::using_if_exists]] using std::bind_front;
#if __cpp_lib_bind_back
  [[clang::using_if_exists]] using std::bind_back;
#endif
  [[clang::using_if_exists]] using std::bit_and;
  [[clang::using_if_exists]] using std::bit_not;
  [[clang::using_if_exists]] using std::bit_or;
  [[clang::using_if_exists]] using std::bit_xor;
  [[clang::using_if_exists]] using std::compare_three_way;
  [[clang::using_if_exists]] using std::cref;
  [[clang::using_if_exists]] using std::divides;
  [[clang::using_if_exists]] using std::equal_to;
  [[clang::using_if_exists]] using std::greater;
  [[clang::using_if_exists]] using std::greater_equal;
  [[clang::using_if_exists]] using std::identity;
  [[clang::using_if_exists]] using std::invoke;
#if __cpp_lib_invoke_r
  [[clang::using_if_exists]] using std::invoke_r;
#endif
  [[clang::using_if_exists]] using std::is_bind_expression;
  [[clang::using_if_exists]] using std::is_bind_expression_v;
  [[clang::using_if_exists]] using std::is_placeholder;
  [[clang::using_if_exists]] using std::is_placeholder_v;
  [[clang::using_if_exists]] using std::less;
  [[clang::using_if_exists]] using std::less_equal;
  [[clang::using_if_exists]] using std::logical_and;
  [[clang::using_if_exists]] using std::logical_not;
  [[clang::using_if_exists]] using std::logical_or;
  [[clang::using_if_exists]] using std::minus;
  [[clang::using_if_exists]] using std::modulus;
#if __cpp_lib_move_only_function
  [[clang::using_if_exists]] using std::move_only_function;
#endif
#if __cpp_lib_copyable_function
  [[clang::using_if_exists]] using std::copyable_function;
#endif
#if __cpp_lib_function_ref
  [[clang::using_if_exists]] using std::function_ref;
#endif
  [[clang::using_if_exists]] using std::multiplies;
  [[clang::using_if_exists]] using std::negate;
  [[clang::using_if_exists]] using std::not_equal_to;
  [[clang::using_if_exists]] using std::not_fn;
  [[clang::using_if_exists]] using std::plus;
  [[clang::using_if_exists]] using std::ref;
  [[clang::using_if_exists]] using std::reference_wrapper;
  namespace placeholders
  {
    [[clang::using_if_exists]] using std::placeholders::_1;
    [[clang::using_if_exists]] using std::placeholders::_10;
    [[clang::using_if_exists]] using std::placeholders::_2;
    [[clang::using_if_exists]] using std::placeholders::_3;
    [[clang::using_if_exists]] using std::placeholders::_4;
    [[clang::using_if_exists]] using std::placeholders::_5;
    [[clang::using_if_exists]] using std::placeholders::_6;
    [[clang::using_if_exists]] using std::placeholders::_7;
    [[clang::using_if_exists]] using std::placeholders::_8;
    [[clang::using_if_exists]] using std::placeholders::_9;
  }
  [[clang::using_if_exists]] using std::bad_function_call;
  [[clang::using_if_exists]] using std::function;
  [[clang::using_if_exists]] using std::mem_fn;
  [[clang::using_if_exists]] using std::swap;
  [[clang::using_if_exists]] using std::operator==;
  [[clang::using_if_exists]] using std::boyer_moore_horspool_searcher;
  [[clang::using_if_exists]] using std::boyer_moore_searcher;
  [[clang::using_if_exists]] using std::default_searcher;
  [[clang::using_if_exists]] using std::hash;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::equal_to;
    [[clang::using_if_exists]] using std::ranges::greater;
    [[clang::using_if_exists]] using std::ranges::greater_equal;
    [[clang::using_if_exists]] using std::ranges::less;
    [[clang::using_if_exists]] using std::ranges::less_equal;
    [[clang::using_if_exists]] using std::ranges::not_equal_to;
  }
}

// <future>
export namespace std
{
  [[clang::using_if_exists]] using std::future_errc;
  [[clang::using_if_exists]] using std::future_status;
  [[clang::using_if_exists]] using std::launch;
  [[clang::using_if_exists]] using std::operator&;
  [[clang::using_if_exists]] using std::operator&=;
  [[clang::using_if_exists]] using std::operator^;
  [[clang::using_if_exists]] using std::operator^=;
  [[clang::using_if_exists]] using std::operator|;
  [[clang::using_if_exists]] using std::operator|=;
  [[clang::using_if_exists]] using std::operator~;
  [[clang::using_if_exists]] using std::async;
  [[clang::using_if_exists]] using std::future;
  [[clang::using_if_exists]] using std::future_category;
  [[clang::using_if_exists]] using std::future_error;
  [[clang::using_if_exists]] using std::is_error_code_enum;
  [[clang::using_if_exists]] using std::make_error_code;
  [[clang::using_if_exists]] using std::make_error_condition;
  [[clang::using_if_exists]] using std::packaged_task;
  [[clang::using_if_exists]] using std::promise;
  [[clang::using_if_exists]] using std::shared_future;
  [[clang::using_if_exists]] using std::swap;
  [[clang::using_if_exists]] using std::uses_allocator;
}

#if __cpp_lib_generator
export namespace std
{
  [[clang::using_if_exists]] using std::generator;
  namespace pmr
  {
    [[clang::using_if_exists]] using pmr::generator;
  }
}
#endif

// <hazard_pointer> FIXME

// 17.10.2 <initializer_list>
export namespace std
{
  [[clang::using_if_exists]] using std::begin;
  [[clang::using_if_exists]] using std::end;
  [[clang::using_if_exists]] using std::initializer_list;
}

// <inplace_vector>
#if __cpp_lib_inplace_vector
export namespace std
{
  [[clang::using_if_exists]] using std::inplace_vector;
  [[clang::using_if_exists]] using std::erase;
  [[clang::using_if_exists]] using std::erase_if;
}
#endif

// <iomanip>
export namespace std
{
  [[clang::using_if_exists]] using std::get_money;
  [[clang::using_if_exists]] using std::get_time;
  [[clang::using_if_exists]] using std::put_money;
  [[clang::using_if_exists]] using std::put_time;
  [[clang::using_if_exists]] using std::quoted;
  [[clang::using_if_exists]] using std::resetiosflags;
  [[clang::using_if_exists]] using std::setbase;
  [[clang::using_if_exists]] using std::setfill;
  [[clang::using_if_exists]] using std::setiosflags;
  [[clang::using_if_exists]] using std::setprecision;
  [[clang::using_if_exists]] using std::setw;
}

// <ios>
export namespace std
{
  [[clang::using_if_exists]] using std::fpos;
  [[clang::using_if_exists]] using std::operator!=;
  [[clang::using_if_exists]] using std::operator-;
  [[clang::using_if_exists]] using std::operator==;
  [[clang::using_if_exists]] using std::basic_ios;
  [[clang::using_if_exists]] using std::boolalpha;
  [[clang::using_if_exists]] using std::dec;
  [[clang::using_if_exists]] using std::defaultfloat;
  [[clang::using_if_exists]] using std::fixed;
  [[clang::using_if_exists]] using std::hex;
  [[clang::using_if_exists]] using std::hexfloat;
  [[clang::using_if_exists]] using std::internal;
  [[clang::using_if_exists]] using std::io_errc;
  [[clang::using_if_exists]] using std::ios;
  [[clang::using_if_exists]] using std::ios_base;
  [[clang::using_if_exists]] using std::iostream_category;
  [[clang::using_if_exists]] using std::is_error_code_enum;
  [[clang::using_if_exists]] using std::left;
  [[clang::using_if_exists]] using std::make_error_code;
  [[clang::using_if_exists]] using std::make_error_condition;
  [[clang::using_if_exists]] using std::noboolalpha;
  [[clang::using_if_exists]] using std::noshowbase;
  [[clang::using_if_exists]] using std::noshowpoint;
  [[clang::using_if_exists]] using std::noshowpos;
  [[clang::using_if_exists]] using std::noskipws;
  [[clang::using_if_exists]] using std::nounitbuf;
  [[clang::using_if_exists]] using std::nouppercase;
  [[clang::using_if_exists]] using std::oct;
  [[clang::using_if_exists]] using std::right;
  [[clang::using_if_exists]] using std::scientific;
  [[clang::using_if_exists]] using std::showbase;
  [[clang::using_if_exists]] using std::showpoint;
  [[clang::using_if_exists]] using std::showpos;
  [[clang::using_if_exists]] using std::skipws;
  [[clang::using_if_exists]] using std::streamoff;
  [[clang::using_if_exists]] using std::streamsize;
  [[clang::using_if_exists]] using std::unitbuf;
  [[clang::using_if_exists]] using std::uppercase;
  [[clang::using_if_exists]] using std::wios;
}

// <iosfwd>
export namespace std
{
  [[clang::using_if_exists]] using std::streampos;
  [[clang::using_if_exists]] using std::u16streampos;
  [[clang::using_if_exists]] using std::u32streampos;
  [[clang::using_if_exists]] using std::u8streampos;
  [[clang::using_if_exists]] using std::wstreampos;
  [[clang::using_if_exists]] using std::istreambuf_iterator;
  [[clang::using_if_exists]] using std::ostreambuf_iterator;
  [[clang::using_if_exists]] using std::fpos;
#ifdef __cpp_lib_syncbuf
  [[clang::using_if_exists]] using std::basic_osyncstream;
  [[clang::using_if_exists]] using std::basic_syncbuf;
  [[clang::using_if_exists]] using std::osyncstream;
  [[clang::using_if_exists]] using std::syncbuf;
  [[clang::using_if_exists]] using std::wosyncstream;
  [[clang::using_if_exists]] using std::wsyncbuf;
#endif
}

// <iostream>
export namespace std
{
  [[clang::using_if_exists]] using std::cerr;
  [[clang::using_if_exists]] using std::cin;
  [[clang::using_if_exists]] using std::clog;
  [[clang::using_if_exists]] using std::cout;
  [[clang::using_if_exists]] using std::wcerr;
  [[clang::using_if_exists]] using std::wcin;
  [[clang::using_if_exists]] using std::wclog;
  [[clang::using_if_exists]] using std::wcout;
}

// <istream>
export namespace std
{
  [[clang::using_if_exists]] using std::basic_iostream;
  [[clang::using_if_exists]] using std::basic_istream;
  [[clang::using_if_exists]] using std::iostream;
  [[clang::using_if_exists]] using std::istream;
  [[clang::using_if_exists]] using std::wiostream;
  [[clang::using_if_exists]] using std::wistream;
  [[clang::using_if_exists]] using std::ws;
  [[clang::using_if_exists]] using std::operator>>;
}

// <iterator>
export namespace std
{
  [[clang::using_if_exists]] using std::incrementable_traits;
  [[clang::using_if_exists]] using std::indirectly_readable_traits;
  [[clang::using_if_exists]] using std::iter_difference_t;
  [[clang::using_if_exists]] using std::iter_reference_t;
  [[clang::using_if_exists]] using std::iter_value_t;
  [[clang::using_if_exists]] using std::iterator_traits;
  // _Cpo is an implementation detail we can't avoid exposing; if we do the
  // [[clang::using_if_exists]] using in ranges directly, it conflicts with any friend functions of the
  // same name, which is why the customization points are in an inline
  // namespace in the first place.
  namespace ranges::inline _Cpo
  {
    [[clang::using_if_exists]] using _Cpo::iter_move;
    [[clang::using_if_exists]] using _Cpo::iter_swap;
  }
  [[clang::using_if_exists]] using std::advance;
  [[clang::using_if_exists]] using std::bidirectional_iterator;
  [[clang::using_if_exists]] using std::bidirectional_iterator_tag;
  [[clang::using_if_exists]] using std::contiguous_iterator;
  [[clang::using_if_exists]] using std::contiguous_iterator_tag;
  [[clang::using_if_exists]] using std::disable_sized_sentinel_for;
  [[clang::using_if_exists]] using std::distance;
  [[clang::using_if_exists]] using std::forward_iterator;
  [[clang::using_if_exists]] using std::forward_iterator_tag;
  [[clang::using_if_exists]] using std::incrementable;
  [[clang::using_if_exists]] using std::indirect_binary_predicate;
  [[clang::using_if_exists]] using std::indirect_equivalence_relation;
  [[clang::using_if_exists]] using std::indirect_result_t;
  [[clang::using_if_exists]] using std::indirect_strict_weak_order;
  [[clang::using_if_exists]] using std::indirect_unary_predicate;
  [[clang::using_if_exists]] using std::indirectly_comparable;
  [[clang::using_if_exists]] using std::indirectly_copyable;
  [[clang::using_if_exists]] using std::indirectly_copyable_storable;
  [[clang::using_if_exists]] using std::indirectly_movable;
  [[clang::using_if_exists]] using std::indirectly_movable_storable;
  [[clang::using_if_exists]] using std::indirectly_readable;
  [[clang::using_if_exists]] using std::indirectly_regular_unary_invocable;
  [[clang::using_if_exists]] using std::indirectly_swappable;
  [[clang::using_if_exists]] using std::indirectly_unary_invocable;
  [[clang::using_if_exists]] using std::indirectly_writable;
  [[clang::using_if_exists]] using std::input_iterator;
  [[clang::using_if_exists]] using std::input_iterator_tag;
  [[clang::using_if_exists]] using std::input_or_output_iterator;
  [[clang::using_if_exists]] using std::iter_common_reference_t;
  [[clang::using_if_exists]] using std::iter_rvalue_reference_t;
  [[clang::using_if_exists]] using std::mergeable;
  [[clang::using_if_exists]] using std::next;
  [[clang::using_if_exists]] using std::output_iterator;
  [[clang::using_if_exists]] using std::output_iterator_tag;
  [[clang::using_if_exists]] using std::permutable;
  [[clang::using_if_exists]] using std::prev;
  [[clang::using_if_exists]] using std::projected;
  [[clang::using_if_exists]] using std::random_access_iterator;
  [[clang::using_if_exists]] using std::random_access_iterator_tag;
  [[clang::using_if_exists]] using std::sentinel_for;
  [[clang::using_if_exists]] using std::sized_sentinel_for;
  [[clang::using_if_exists]] using std::sortable;
  [[clang::using_if_exists]] using std::weakly_incrementable;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::advance;
    [[clang::using_if_exists]] using std::ranges::distance;
    [[clang::using_if_exists]] using std::ranges::next;
    [[clang::using_if_exists]] using std::ranges::prev;
  }
  [[clang::using_if_exists]] using std::reverse_iterator;
  [[clang::using_if_exists]] using std::operator==;
  [[clang::using_if_exists]] using std::operator!=;
  [[clang::using_if_exists]] using std::operator<;
  [[clang::using_if_exists]] using std::operator>;
  [[clang::using_if_exists]] using std::operator<=;
  [[clang::using_if_exists]] using std::operator>=;
  [[clang::using_if_exists]] using std::operator<=>;
  [[clang::using_if_exists]] using std::operator-;
  [[clang::using_if_exists]] using std::operator+;
  [[clang::using_if_exists]] using std::back_insert_iterator;
  [[clang::using_if_exists]] using std::back_inserter;
  [[clang::using_if_exists]] using std::begin;
  [[clang::using_if_exists]] using std::cbegin;
  [[clang::using_if_exists]] using std::cend;
  [[clang::using_if_exists]] using std::common_iterator;
  [[clang::using_if_exists]] using std::counted_iterator;
  [[clang::using_if_exists]] using std::crbegin;
  [[clang::using_if_exists]] using std::crend;
  [[clang::using_if_exists]] using std::data;
  [[clang::using_if_exists]] using std::default_sentinel;
  [[clang::using_if_exists]] using std::default_sentinel_t;
  [[clang::using_if_exists]] using std::empty;
  [[clang::using_if_exists]] using std::end;
  [[clang::using_if_exists]] using std::front_insert_iterator;
  [[clang::using_if_exists]] using std::front_inserter;
  [[clang::using_if_exists]] using std::insert_iterator;
  [[clang::using_if_exists]] using std::inserter;
  [[clang::using_if_exists]] using std::istream_iterator;
  [[clang::using_if_exists]] using std::istreambuf_iterator;
  [[clang::using_if_exists]] using std::iterator;
  [[clang::using_if_exists]] using std::make_move_iterator;
  [[clang::using_if_exists]] using std::make_reverse_iterator;
  [[clang::using_if_exists]] using std::move_iterator;
  [[clang::using_if_exists]] using std::move_sentinel;
  [[clang::using_if_exists]] using std::ostream_iterator;
  [[clang::using_if_exists]] using std::ostreambuf_iterator;
  [[clang::using_if_exists]] using std::rbegin;
  [[clang::using_if_exists]] using std::rend;
  [[clang::using_if_exists]] using std::size;
  [[clang::using_if_exists]] using std::ssize;
  [[clang::using_if_exists]] using std::unreachable_sentinel;
  [[clang::using_if_exists]] using std::unreachable_sentinel_t;
#if __glibcxx_ranges_as_const // >= C++23
  [[clang::using_if_exists]] using std::iter_const_reference_t;
  [[clang::using_if_exists]] using std::basic_const_iterator;
  [[clang::using_if_exists]] using std::const_iterator;
  [[clang::using_if_exists]] using std::const_sentinel;
  [[clang::using_if_exists]] using std::make_const_iterator;
  [[clang::using_if_exists]] using std::make_const_sentinel;
#endif
#if __glibcxx_algorithm_default_value_type // >= C++26
  [[clang::using_if_exists]] using std::projected_value_t;
#endif
}

// <latch>
export namespace std
{
  [[clang::using_if_exists]] using std::latch;
}

// 17.3.3 <limits> [limits.syn]
export namespace std
{
  [[clang::using_if_exists]] using std::float_denorm_style; // deprecated in C++23
  [[clang::using_if_exists]] using std::float_round_style;
  [[clang::using_if_exists]] using std::numeric_limits;
}

// FIXME <linalg>

// <list>
export namespace std
{
  [[clang::using_if_exists]] using std::list;
  [[clang::using_if_exists]] using std::operator==;
  [[clang::using_if_exists]] using std::operator<=>;
  [[clang::using_if_exists]] using std::erase;
  [[clang::using_if_exists]] using std::erase_if;
  [[clang::using_if_exists]] using std::swap;
  namespace pmr
  {
    [[clang::using_if_exists]] using std::pmr::list;
  }
}

// <locale>
export namespace std
{
  [[clang::using_if_exists]] using std::codecvt;
  [[clang::using_if_exists]] using std::codecvt_base;
  [[clang::using_if_exists]] using std::codecvt_byname;
  [[clang::using_if_exists]] using std::collate;
  [[clang::using_if_exists]] using std::collate_byname;
  [[clang::using_if_exists]] using std::ctype;
  [[clang::using_if_exists]] using std::ctype_base;
  [[clang::using_if_exists]] using std::ctype_byname;
  [[clang::using_if_exists]] using std::has_facet;
  [[clang::using_if_exists]] using std::isalnum;
  [[clang::using_if_exists]] using std::isalpha;
  [[clang::using_if_exists]] using std::isblank;
  [[clang::using_if_exists]] using std::iscntrl;
  [[clang::using_if_exists]] using std::isdigit;
  [[clang::using_if_exists]] using std::isgraph;
  [[clang::using_if_exists]] using std::islower;
  [[clang::using_if_exists]] using std::isprint;
  [[clang::using_if_exists]] using std::ispunct;
  [[clang::using_if_exists]] using std::isspace;
  [[clang::using_if_exists]] using std::isupper;
  [[clang::using_if_exists]] using std::isxdigit;
  [[clang::using_if_exists]] using std::locale;
  [[clang::using_if_exists]] using std::messages;
  [[clang::using_if_exists]] using std::messages_base;
  [[clang::using_if_exists]] using std::messages_byname;
  [[clang::using_if_exists]] using std::money_base;
  [[clang::using_if_exists]] using std::money_get;
  [[clang::using_if_exists]] using std::money_put;
  [[clang::using_if_exists]] using std::moneypunct;
  [[clang::using_if_exists]] using std::moneypunct_byname;
  [[clang::using_if_exists]] using std::num_get;
  [[clang::using_if_exists]] using std::num_put;
  [[clang::using_if_exists]] using std::numpunct;
  [[clang::using_if_exists]] using std::numpunct_byname;
  [[clang::using_if_exists]] using std::time_base;
  [[clang::using_if_exists]] using std::time_get;
  [[clang::using_if_exists]] using std::time_get_byname;
  [[clang::using_if_exists]] using std::time_put;
  [[clang::using_if_exists]] using std::time_put_byname;
  [[clang::using_if_exists]] using std::tolower;
  [[clang::using_if_exists]] using std::toupper;
  [[clang::using_if_exists]] using std::use_facet;
  [[clang::using_if_exists]] using std::wbuffer_convert;
  [[clang::using_if_exists]] using std::wstring_convert;
}

// <map>
export namespace std
{
  [[clang::using_if_exists]] using std::map;
  [[clang::using_if_exists]] using std::operator==;
  [[clang::using_if_exists]] using std::operator<=>;
  [[clang::using_if_exists]] using std::erase_if;
  [[clang::using_if_exists]] using std::multimap;
  [[clang::using_if_exists]] using std::swap;
  namespace pmr
  {
    [[clang::using_if_exists]] using std::pmr::map;
    [[clang::using_if_exists]] using std::pmr::multimap;
  }
}

// <mdspan>
#if __glibcxx_mdspan
export namespace std
{
  [[clang::using_if_exists]] using std::extents;
  [[clang::using_if_exists]] using std::dextents;
#if __glibcxx_mdspan >= 202406L
  [[clang::using_if_exists]] using std::dims;
#endif
  [[clang::using_if_exists]] using std::layout_left;
  [[clang::using_if_exists]] using std::layout_right;
  [[clang::using_if_exists]] using std::layout_stride;
  [[clang::using_if_exists]] using std::default_accessor;
#if __glibcxx_aligned_accessor
  [[clang::using_if_exists]] using std::aligned_accessor;
#endif
  [[clang::using_if_exists]] using std::mdspan;
#if __glibcxx_padded_layouts
  [[clang::using_if_exists]] using std::layout_left_padded;
  [[clang::using_if_exists]] using std::layout_right_padded;
  [[clang::using_if_exists]] using std::strided_slice;
  [[clang::using_if_exists]] using std::full_extent_t;
  [[clang::using_if_exists]] using std::full_extent;
  [[clang::using_if_exists]] using std::submdspan_mapping_result;
#endif
  // FIXME submdspan_extents, mdsubspan
}
#endif

// 20.2 <memory>
export namespace std
{
  [[clang::using_if_exists]] using std::align;
  [[clang::using_if_exists]] using std::allocator;
  [[clang::using_if_exists]] using std::allocator_arg;
  [[clang::using_if_exists]] using std::allocator_arg_t;
  [[clang::using_if_exists]] using std::allocator_traits;
  [[clang::using_if_exists]] using std::assume_aligned;
#if __glibcxx_is_sufficiently_aligned
  [[clang::using_if_exists]] using std::is_sufficiently_aligned;
#endif  
  [[clang::using_if_exists]] using std::make_obj_using_allocator;
  [[clang::using_if_exists]] using std::pointer_traits;
  [[clang::using_if_exists]] using std::to_address;
  [[clang::using_if_exists]] using std::uninitialized_construct_using_allocator;
  [[clang::using_if_exists]] using std::uses_allocator;
  [[clang::using_if_exists]] using std::uses_allocator_construction_args;
  [[clang::using_if_exists]] using std::uses_allocator_v;
  [[clang::using_if_exists]] using std::operator==;
  [[clang::using_if_exists]] using std::addressof;
  [[clang::using_if_exists]] using std::uninitialized_default_construct;
  [[clang::using_if_exists]] using std::uninitialized_default_construct_n;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::uninitialized_default_construct;
    [[clang::using_if_exists]] using std::ranges::uninitialized_default_construct_n;
  }
  [[clang::using_if_exists]] using std::uninitialized_value_construct;
  [[clang::using_if_exists]] using std::uninitialized_value_construct_n;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::uninitialized_value_construct;
    [[clang::using_if_exists]] using std::ranges::uninitialized_value_construct_n;
  }
  [[clang::using_if_exists]] using std::uninitialized_copy;
  [[clang::using_if_exists]] using std::uninitialized_copy_n;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::uninitialized_copy;
    [[clang::using_if_exists]] using std::ranges::uninitialized_copy_n;
    [[clang::using_if_exists]] using std::ranges::uninitialized_copy_n_result;
    [[clang::using_if_exists]] using std::ranges::uninitialized_copy_result;
  }
  [[clang::using_if_exists]] using std::uninitialized_move;
  [[clang::using_if_exists]] using std::uninitialized_move_n;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::uninitialized_move;
    [[clang::using_if_exists]] using std::ranges::uninitialized_move_n;
    [[clang::using_if_exists]] using std::ranges::uninitialized_move_n_result;
    [[clang::using_if_exists]] using std::ranges::uninitialized_move_result;
  }
  [[clang::using_if_exists]] using std::uninitialized_fill;
  [[clang::using_if_exists]] using std::uninitialized_fill_n;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::uninitialized_fill;
    [[clang::using_if_exists]] using std::ranges::uninitialized_fill_n;
  }
  [[clang::using_if_exists]] using std::construct_at;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::construct_at;
  }
  [[clang::using_if_exists]] using std::destroy;
  [[clang::using_if_exists]] using std::destroy_at;
  [[clang::using_if_exists]] using std::destroy_n;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::destroy;
    [[clang::using_if_exists]] using std::ranges::destroy_at;
    [[clang::using_if_exists]] using std::ranges::destroy_n;
  }
  [[clang::using_if_exists]] using std::default_delete;
  [[clang::using_if_exists]] using std::make_unique;
  [[clang::using_if_exists]] using std::make_unique_for_overwrite;
  [[clang::using_if_exists]] using std::unique_ptr;
  [[clang::using_if_exists]] using std::operator<;
  [[clang::using_if_exists]] using std::operator>;
  [[clang::using_if_exists]] using std::operator<=;
  [[clang::using_if_exists]] using std::operator>=;
  [[clang::using_if_exists]] using std::operator<=>;
  [[clang::using_if_exists]] using std::operator<<;
  [[clang::using_if_exists]] using std::allocate_shared;
  [[clang::using_if_exists]] using std::allocate_shared_for_overwrite;
  [[clang::using_if_exists]] using std::bad_weak_ptr;
  [[clang::using_if_exists]] using std::const_pointer_cast;
  [[clang::using_if_exists]] using std::dynamic_pointer_cast;
  [[clang::using_if_exists]] using std::make_shared;
  [[clang::using_if_exists]] using std::make_shared_for_overwrite;
  [[clang::using_if_exists]] using std::reinterpret_pointer_cast;
  [[clang::using_if_exists]] using std::shared_ptr;
  [[clang::using_if_exists]] using std::static_pointer_cast;
  [[clang::using_if_exists]] using std::swap;
  [[clang::using_if_exists]] using std::get_deleter;
  [[clang::using_if_exists]] using std::atomic_compare_exchange_strong;
  [[clang::using_if_exists]] using std::atomic_compare_exchange_strong_explicit;
  [[clang::using_if_exists]] using std::atomic_compare_exchange_weak;
  [[clang::using_if_exists]] using std::atomic_compare_exchange_weak_explicit;
  [[clang::using_if_exists]] using std::atomic_exchange;
  [[clang::using_if_exists]] using std::atomic_exchange_explicit;
  [[clang::using_if_exists]] using std::atomic_is_lock_free;
  [[clang::using_if_exists]] using std::atomic_load;
  [[clang::using_if_exists]] using std::atomic_load_explicit;
  [[clang::using_if_exists]] using std::atomic_store;
  [[clang::using_if_exists]] using std::atomic_store_explicit;
  [[clang::using_if_exists]] using std::enable_shared_from_this;
  [[clang::using_if_exists]] using std::hash;
  [[clang::using_if_exists]] using std::owner_less;
  [[clang::using_if_exists]] using std::weak_ptr;
#if __cpp_lib_out_ptr
  [[clang::using_if_exists]] using std::out_ptr;
  [[clang::using_if_exists]] using std::inout_ptr;
  [[clang::using_if_exists]] using std::out_ptr_t;
  [[clang::using_if_exists]] using std::inout_ptr_t;
#endif
#if __cpp_lib_indirect
  [[clang::using_if_exists]] using std::indirect;
  namespace pmr { [[clang::using_if_exists]] using std::pmr::indirect; }
#endif
#if __cpp_lib_polymorphic
  [[clang::using_if_exists]] using std::polymorphic;
  namespace pmr { [[clang::using_if_exists]] using std::pmr::polymorphic; }
#endif
#if __cpp_lib_smart_ptr_owner_equality
  [[clang::using_if_exists]] using std::owner_equal;
  [[clang::using_if_exists]] using std::owner_hash;
#endif
#if __cpp_lib_start_lifetime_as
  [[clang::using_if_exists]] using std::start_lifetime_as;
  [[clang::using_if_exists]] using std::start_lifetime_as_array;
#endif
}

// 20.4 <memory_resource>
export namespace std::pmr
{
  [[clang::using_if_exists]] using std::pmr::memory_resource;
  [[clang::using_if_exists]] using std::pmr::operator==;
  [[clang::using_if_exists]] using std::pmr::get_default_resource;
  [[clang::using_if_exists]] using std::pmr::monotonic_buffer_resource;
  [[clang::using_if_exists]] using std::pmr::new_delete_resource;
  [[clang::using_if_exists]] using std::pmr::null_memory_resource;
  [[clang::using_if_exists]] using std::pmr::polymorphic_allocator;
  [[clang::using_if_exists]] using std::pmr::pool_options;
  [[clang::using_if_exists]] using std::pmr::set_default_resource;
  [[clang::using_if_exists]] using std::pmr::synchronized_pool_resource;
  [[clang::using_if_exists]] using std::pmr::unsynchronized_pool_resource;
}

// <mutex>
export namespace std
{
  [[clang::using_if_exists]] using std::adopt_lock;
  [[clang::using_if_exists]] using std::adopt_lock_t;
  [[clang::using_if_exists]] using std::call_once;
  [[clang::using_if_exists]] using std::defer_lock;
  [[clang::using_if_exists]] using std::defer_lock_t;
  [[clang::using_if_exists]] using std::lock;
  [[clang::using_if_exists]] using std::lock_guard;
  [[clang::using_if_exists]] using std::mutex;
  [[clang::using_if_exists]] using std::once_flag;
  [[clang::using_if_exists]] using std::recursive_mutex;
  [[clang::using_if_exists]] using std::recursive_timed_mutex;
  [[clang::using_if_exists]] using std::scoped_lock;
  [[clang::using_if_exists]] using std::swap;
  [[clang::using_if_exists]] using std::timed_mutex;
  [[clang::using_if_exists]] using std::try_lock;
  [[clang::using_if_exists]] using std::try_to_lock;
  [[clang::using_if_exists]] using std::try_to_lock_t;
  [[clang::using_if_exists]] using std::unique_lock;
}

// 17.6.2 <new> [new.syn]
export namespace std
{
  [[clang::using_if_exists]] using std::align_val_t;
  [[clang::using_if_exists]] using std::bad_alloc;
  [[clang::using_if_exists]] using std::bad_array_new_length;
  [[clang::using_if_exists]] using std::destroying_delete;
  [[clang::using_if_exists]] using std::destroying_delete_t;
  [[clang::using_if_exists]] using std::get_new_handler;
  [[clang::using_if_exists]] using std::hardware_destructive_interference_size;
  [[clang::using_if_exists]] using std::hardware_constructive_interference_size;
  [[clang::using_if_exists]] using std::launder;
  [[clang::using_if_exists]] using std::new_handler;
  [[clang::using_if_exists]] using std::nothrow;
  [[clang::using_if_exists]] using std::nothrow_t;
  [[clang::using_if_exists]] using std::set_new_handler;
}
export
{
  [[clang::using_if_exists]] using ::operator new;
  [[clang::using_if_exists]] using ::operator delete;
  [[clang::using_if_exists]] using ::operator new[];
  [[clang::using_if_exists]] using ::operator delete[];
}

// <numbers>
export namespace std::numbers
{
  [[clang::using_if_exists]] using std::numbers::e;
  [[clang::using_if_exists]] using std::numbers::e_v;
  [[clang::using_if_exists]] using std::numbers::egamma;
  [[clang::using_if_exists]] using std::numbers::egamma_v;
  [[clang::using_if_exists]] using std::numbers::inv_pi;
  [[clang::using_if_exists]] using std::numbers::inv_pi_v;
  [[clang::using_if_exists]] using std::numbers::inv_sqrt3;
  [[clang::using_if_exists]] using std::numbers::inv_sqrt3_v;
  [[clang::using_if_exists]] using std::numbers::inv_sqrtpi;
  [[clang::using_if_exists]] using std::numbers::inv_sqrtpi_v;
  [[clang::using_if_exists]] using std::numbers::ln10;
  [[clang::using_if_exists]] using std::numbers::ln10_v;
  [[clang::using_if_exists]] using std::numbers::ln2;
  [[clang::using_if_exists]] using std::numbers::ln2_v;
  [[clang::using_if_exists]] using std::numbers::log10e;
  [[clang::using_if_exists]] using std::numbers::log10e_v;
  [[clang::using_if_exists]] using std::numbers::log2e;
  [[clang::using_if_exists]] using std::numbers::log2e_v;
  [[clang::using_if_exists]] using std::numbers::phi;
  [[clang::using_if_exists]] using std::numbers::phi_v;
  [[clang::using_if_exists]] using std::numbers::pi;
  [[clang::using_if_exists]] using std::numbers::pi_v;
  [[clang::using_if_exists]] using std::numbers::sqrt2;
  [[clang::using_if_exists]] using std::numbers::sqrt2_v;
  [[clang::using_if_exists]] using std::numbers::sqrt3;
  [[clang::using_if_exists]] using std::numbers::sqrt3_v;
}

// <numeric>
export namespace std
{
  [[clang::using_if_exists]] using std::accumulate;
  [[clang::using_if_exists]] using std::adjacent_difference;
  [[clang::using_if_exists]] using std::exclusive_scan;
  [[clang::using_if_exists]] using std::inclusive_scan;
  [[clang::using_if_exists]] using std::inner_product;
  [[clang::using_if_exists]] using std::iota;
  [[clang::using_if_exists]] using std::partial_sum;
  [[clang::using_if_exists]] using std::reduce;
  [[clang::using_if_exists]] using std::transform_exclusive_scan;
  [[clang::using_if_exists]] using std::transform_inclusive_scan;
  [[clang::using_if_exists]] using std::transform_reduce;
  [[clang::using_if_exists]] using std::gcd;
  [[clang::using_if_exists]] using std::lcm;
  [[clang::using_if_exists]] using std::midpoint;
#if __cpp_lib_ranges_iota
  namespace ranges
  {
    [[clang::using_if_exists]] using ranges::iota;
    [[clang::using_if_exists]] using ranges::iota_result;
  }
#endif
#if __cpp_lib_saturation_arithmetic
  [[clang::using_if_exists]] using std::add_sat;
  [[clang::using_if_exists]] using std::sub_sat;
  [[clang::using_if_exists]] using std::mul_sat;
  [[clang::using_if_exists]] using std::div_sat;
  [[clang::using_if_exists]] using std::saturate_cast;
#endif
}

// <optional>
export namespace std
{
  [[clang::using_if_exists]] using std::bad_optional_access;
  [[clang::using_if_exists]] using std::nullopt;
  [[clang::using_if_exists]] using std::nullopt_t;
  [[clang::using_if_exists]] using std::optional;
  [[clang::using_if_exists]] using std::operator==;
  [[clang::using_if_exists]] using std::operator!=;
  [[clang::using_if_exists]] using std::operator<;
  [[clang::using_if_exists]] using std::operator>;
  [[clang::using_if_exists]] using std::operator<=;
  [[clang::using_if_exists]] using std::operator>=;
  [[clang::using_if_exists]] using std::operator<=>;
  [[clang::using_if_exists]] using std::hash;
  [[clang::using_if_exists]] using std::make_optional;
  [[clang::using_if_exists]] using std::swap;
}

// <ostream>
export namespace std
{
  [[clang::using_if_exists]] using std::basic_ostream;
  [[clang::using_if_exists]] using std::endl;
  [[clang::using_if_exists]] using std::ends;
  [[clang::using_if_exists]] using std::flush;
  [[clang::using_if_exists]] using std::ostream;
  [[clang::using_if_exists]] using std::wostream;
  [[clang::using_if_exists]] using std::operator<<;
#ifdef __cpp_lib_syncbuf
  [[clang::using_if_exists]] using std::emit_on_flush;
  [[clang::using_if_exists]] using std::noemit_on_flush;
  [[clang::using_if_exists]] using std::flush_emit;
#endif
}

// <print>
#if __cpp_lib_print
export namespace std
{
  [[clang::using_if_exists]] using std::print;
  [[clang::using_if_exists]] using std::println;
  [[clang::using_if_exists]] using std::vprint_unicode;
  [[clang::using_if_exists]] using std::vprint_unicode_buffered;
  [[clang::using_if_exists]] using std::vprint_nonunicode;
  [[clang::using_if_exists]] using std::vprint_nonunicode_buffered;
}
#endif

// <queue>
export namespace std
{
  [[clang::using_if_exists]] using std::queue;
  [[clang::using_if_exists]] using std::operator==;
  [[clang::using_if_exists]] using std::operator!=;
  [[clang::using_if_exists]] using std::operator<;
  [[clang::using_if_exists]] using std::operator>;
  [[clang::using_if_exists]] using std::operator<=;
  [[clang::using_if_exists]] using std::operator>=;
  [[clang::using_if_exists]] using std::operator<=>;
  [[clang::using_if_exists]] using std::priority_queue;
  [[clang::using_if_exists]] using std::swap;
  [[clang::using_if_exists]] using std::uses_allocator;
}

// <random>
export namespace std
{
  [[clang::using_if_exists]] using std::bernoulli_distribution;
  [[clang::using_if_exists]] using std::binomial_distribution;
  [[clang::using_if_exists]] using std::cauchy_distribution;
  [[clang::using_if_exists]] using std::chi_squared_distribution;
  [[clang::using_if_exists]] using std::default_random_engine;
  [[clang::using_if_exists]] using std::discard_block_engine;
  [[clang::using_if_exists]] using std::discrete_distribution;
  [[clang::using_if_exists]] using std::exponential_distribution;
  [[clang::using_if_exists]] using std::extreme_value_distribution;
  [[clang::using_if_exists]] using std::fisher_f_distribution;
  [[clang::using_if_exists]] using std::gamma_distribution;
  [[clang::using_if_exists]] using std::generate_canonical;
  [[clang::using_if_exists]] using std::geometric_distribution;
  [[clang::using_if_exists]] using std::independent_bits_engine;
  [[clang::using_if_exists]] using std::knuth_b;
  [[clang::using_if_exists]] using std::linear_congruential_engine;
  [[clang::using_if_exists]] using std::lognormal_distribution;
  [[clang::using_if_exists]] using std::mersenne_twister_engine;
  [[clang::using_if_exists]] using std::minstd_rand;
  [[clang::using_if_exists]] using std::minstd_rand0;
  [[clang::using_if_exists]] using std::mt19937;
  [[clang::using_if_exists]] using std::mt19937_64;
  [[clang::using_if_exists]] using std::negative_binomial_distribution;
  [[clang::using_if_exists]] using std::normal_distribution;
  [[clang::using_if_exists]] using std::piecewise_constant_distribution;
  [[clang::using_if_exists]] using std::piecewise_linear_distribution;
  [[clang::using_if_exists]] using std::poisson_distribution;
  [[clang::using_if_exists]] using std::random_device;
  [[clang::using_if_exists]] using std::ranlux24;
  [[clang::using_if_exists]] using std::ranlux24_base;
  [[clang::using_if_exists]] using std::ranlux48;
  [[clang::using_if_exists]] using std::ranlux48_base;
  [[clang::using_if_exists]] using std::seed_seq;
  [[clang::using_if_exists]] using std::shuffle_order_engine;
  [[clang::using_if_exists]] using std::student_t_distribution;
  [[clang::using_if_exists]] using std::subtract_with_carry_engine;
  [[clang::using_if_exists]] using std::uniform_int_distribution;
  [[clang::using_if_exists]] using std::uniform_random_bit_generator;
  [[clang::using_if_exists]] using std::uniform_real_distribution;
  [[clang::using_if_exists]] using std::weibull_distribution;
}

// <ranges>
export namespace std
{
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::begin;
    [[clang::using_if_exists]] using std::ranges::cbegin;
    [[clang::using_if_exists]] using std::ranges::cdata;
    [[clang::using_if_exists]] using std::ranges::cend;
    [[clang::using_if_exists]] using std::ranges::crbegin;
    [[clang::using_if_exists]] using std::ranges::crend;
    [[clang::using_if_exists]] using std::ranges::data;
    [[clang::using_if_exists]] using std::ranges::empty;
    [[clang::using_if_exists]] using std::ranges::end;
    [[clang::using_if_exists]] using std::ranges::rbegin;
    [[clang::using_if_exists]] using std::ranges::rend;
    [[clang::using_if_exists]] using std::ranges::size;
    [[clang::using_if_exists]] using std::ranges::ssize;
    [[clang::using_if_exists]] using std::ranges::bidirectional_range;
    [[clang::using_if_exists]] using std::ranges::borrowed_range;
    [[clang::using_if_exists]] using std::ranges::common_range;
    [[clang::using_if_exists]] using std::ranges::contiguous_range;
    [[clang::using_if_exists]] using std::ranges::disable_sized_range;
    [[clang::using_if_exists]] using std::ranges::enable_borrowed_range;
    [[clang::using_if_exists]] using std::ranges::enable_view;
    [[clang::using_if_exists]] using std::ranges::forward_range;
    [[clang::using_if_exists]] using std::ranges::get;
    [[clang::using_if_exists]] using std::ranges::input_range;
    [[clang::using_if_exists]] using std::ranges::iterator_t;
    [[clang::using_if_exists]] using std::ranges::output_range;
    [[clang::using_if_exists]] using std::ranges::random_access_range;
    [[clang::using_if_exists]] using std::ranges::range;
    [[clang::using_if_exists]] using std::ranges::range_common_reference_t;
    [[clang::using_if_exists]] using std::ranges::range_difference_t;
    [[clang::using_if_exists]] using std::ranges::range_reference_t;
    [[clang::using_if_exists]] using std::ranges::range_rvalue_reference_t;
    [[clang::using_if_exists]] using std::ranges::range_size_t;
    [[clang::using_if_exists]] using std::ranges::range_value_t;
    [[clang::using_if_exists]] using std::ranges::sentinel_t;
    [[clang::using_if_exists]] using std::ranges::sized_range;
    [[clang::using_if_exists]] using std::ranges::subrange;
    [[clang::using_if_exists]] using std::ranges::subrange_kind;
    [[clang::using_if_exists]] using std::ranges::view;
    [[clang::using_if_exists]] using std::ranges::view_base;
    [[clang::using_if_exists]] using std::ranges::view_interface;
    [[clang::using_if_exists]] using std::ranges::viewable_range;
  }
  [[clang::using_if_exists]] using std::ranges::get;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::borrowed_iterator_t;
    [[clang::using_if_exists]] using std::ranges::borrowed_subrange_t;
    [[clang::using_if_exists]] using std::ranges::dangling;
    [[clang::using_if_exists]] using std::ranges::empty_view;
    namespace views
    {
      [[clang::using_if_exists]] using std::ranges::views::empty;
    }
    [[clang::using_if_exists]] using std::ranges::single_view;
    namespace views
    {
      [[clang::using_if_exists]] using std::ranges::views::single;
    }
    [[clang::using_if_exists]] using std::ranges::iota_view;
    namespace views
    {
      [[clang::using_if_exists]] using std::ranges::views::iota;
    }
    [[clang::using_if_exists]] using std::ranges::basic_istream_view;
    [[clang::using_if_exists]] using std::ranges::istream_view;
    [[clang::using_if_exists]] using std::ranges::wistream_view;
    namespace views
    {
      [[clang::using_if_exists]] using std::ranges::views::istream;
    }
    namespace views
    {
      [[clang::using_if_exists]] using std::ranges::views::all;
      [[clang::using_if_exists]] using std::ranges::views::all_t;
    }
    [[clang::using_if_exists]] using std::ranges::filter_view;
    [[clang::using_if_exists]] using std::ranges::owning_view;
    [[clang::using_if_exists]] using std::ranges::ref_view;
    namespace views
    {
      [[clang::using_if_exists]] using std::ranges::views::filter;
    }
    [[clang::using_if_exists]] using std::ranges::transform_view;
    namespace views
    {
      [[clang::using_if_exists]] using std::ranges::views::transform;
    }
    [[clang::using_if_exists]] using std::ranges::take_view;
    namespace views
    {
      [[clang::using_if_exists]] using std::ranges::views::take;
    }
    [[clang::using_if_exists]] using std::ranges::take_while_view;
    namespace views
    {
      [[clang::using_if_exists]] using std::ranges::views::take_while;
    }
    [[clang::using_if_exists]] using std::ranges::drop_view;
    namespace views
    {
      [[clang::using_if_exists]] using std::ranges::views::drop;
    }
    [[clang::using_if_exists]] using std::ranges::drop_while_view;
    namespace views
    {
      [[clang::using_if_exists]] using std::ranges::views::drop_while;
    }
    [[clang::using_if_exists]] using std::ranges::join_view;
    namespace views
    {
      [[clang::using_if_exists]] using std::ranges::views::join;
    }
    [[clang::using_if_exists]] using std::ranges::lazy_split_view;
    [[clang::using_if_exists]] using std::ranges::split_view;
    namespace views
    {
      [[clang::using_if_exists]] using std::ranges::views::lazy_split;
      [[clang::using_if_exists]] using std::ranges::views::split;
    }
    namespace views
    {
      [[clang::using_if_exists]] using std::ranges::views::counted;
    }
    [[clang::using_if_exists]] using std::ranges::common_view;
    namespace views
    {
      [[clang::using_if_exists]] using std::ranges::views::common;
    }
    [[clang::using_if_exists]] using std::ranges::reverse_view;
    namespace views
    {
      [[clang::using_if_exists]] using std::ranges::views::reverse;
    }
    [[clang::using_if_exists]] using std::ranges::elements_view;
    [[clang::using_if_exists]] using std::ranges::keys_view;
    [[clang::using_if_exists]] using std::ranges::values_view;
    namespace views
    {
      [[clang::using_if_exists]] using std::ranges::views::elements;
      [[clang::using_if_exists]] using std::ranges::views::keys;
      [[clang::using_if_exists]] using std::ranges::views::values;
    }
#if __cpp_lib_ranges >= 202202L
    [[clang::using_if_exists]] using ranges::range_adaptor_closure;
#endif
  }
  namespace views = ranges::views;
  [[clang::using_if_exists]] using std::tuple_element;
  [[clang::using_if_exists]] using std::tuple_size;
  namespace ranges
  {
#if __glibcxx_ranges_as_const // >= C++23
    [[clang::using_if_exists]] using ranges::constant_range;
    [[clang::using_if_exists]] using ranges::const_iterator_t;
    [[clang::using_if_exists]] using ranges::const_sentinel_t;
    [[clang::using_if_exists]] using ranges::range_const_reference_t;
    [[clang::using_if_exists]] using ranges::as_const_view;
    namespace views { [[clang::using_if_exists]] using views::as_const; }
#endif
#ifdef __glibcxx_generator  // C++ >= 23 && __glibcxx_coroutine
    [[clang::using_if_exists]] using ranges::elements_of;
#endif
#ifdef __cpp_lib_ranges_as_rvalue // C++ >= 23
    [[clang::using_if_exists]] using ranges::as_rvalue_view;
    namespace views { [[clang::using_if_exists]] using views::as_rvalue; }
#endif
#ifdef __cpp_lib_ranges_chunk // C++ >= 23
    [[clang::using_if_exists]] using ranges::chunk_view;
    namespace views { [[clang::using_if_exists]] using views::chunk; }
#endif
#ifdef __cpp_lib_ranges_slide // C++ >= 23
    [[clang::using_if_exists]] using ranges::slide_view;
    namespace views { [[clang::using_if_exists]] using views::slide; }
#endif
#ifdef __cpp_lib_ranges_zip // C++ >= 23
    [[clang::using_if_exists]] using ranges::zip_view;
    [[clang::using_if_exists]] using ranges::zip_transform_view;
    [[clang::using_if_exists]] using ranges::adjacent_view;
    [[clang::using_if_exists]] using ranges::adjacent_transform_view;
    namespace views {
      [[clang::using_if_exists]] using views::zip;
      [[clang::using_if_exists]] using views::zip_transform;
      [[clang::using_if_exists]] using views::adjacent;
      [[clang::using_if_exists]] using views::adjacent_transform;
      [[clang::using_if_exists]] using views::pairwise;
      [[clang::using_if_exists]] using views::pairwise_transform;
    }
#endif
#ifdef __cpp_lib_ranges_chunk_by // C++ >= 23
    [[clang::using_if_exists]] using ranges::chunk_by_view;
    namespace views { [[clang::using_if_exists]] using views::chunk_by; }
#endif
#ifdef __cpp_lib_ranges_join_with // C++ >= 23
    [[clang::using_if_exists]] using ranges::join_with_view;
    namespace views { [[clang::using_if_exists]] using views::join_with; }
#endif
#ifdef __cpp_lib_ranges_repeat // C++ >= 23
    [[clang::using_if_exists]] using ranges::repeat_view;
    namespace views { [[clang::using_if_exists]] using views::repeat; }
#endif
#ifdef __cpp_lib_ranges_stride // C++ >= 23
    [[clang::using_if_exists]] using ranges::stride_view;
    namespace views { [[clang::using_if_exists]] using views::stride; }
#endif
#ifdef __cpp_lib_ranges_cartesian_product // C++ >= 23
    [[clang::using_if_exists]] using ranges::cartesian_product_view;
    namespace views { [[clang::using_if_exists]] using views::cartesian_product; }
#endif
#ifdef __cpp_lib_ranges_enumerate // C++ >= 23
    [[clang::using_if_exists]] using ranges::enumerate_view;
    namespace views { [[clang::using_if_exists]] using views::enumerate; }
#endif
#if __cpp_lib_ranges_concat // C++ >= C++26
    [[clang::using_if_exists]] using ranges::concat_view;
    namespace views { [[clang::using_if_exists]] using views::concat; }
#endif
#if __cpp_lib_ranges_cache_latest // C++ >= C++26
    [[clang::using_if_exists]] using ranges::cache_latest_view;
    namespace views { [[clang::using_if_exists]] using views::cache_latest; }
#endif
#if __glibcxx_ranges_to_input // C++ >= 26
    [[clang::using_if_exists]] using ranges::to_input_view;
    namespace views { [[clang::using_if_exists]] using views::to_input; }
#endif
  }
#if __glibcxx_ranges_to_container // C++ >= 23
  namespace ranges { [[clang::using_if_exists]] using ranges::to; }
  [[clang::using_if_exists]] using std::from_range_t;
  [[clang::using_if_exists]] using std::from_range;
#endif
}

// <ratio>
export namespace std
{
  [[clang::using_if_exists]] using std::atto;
  [[clang::using_if_exists]] using std::centi;
  [[clang::using_if_exists]] using std::deca;
  [[clang::using_if_exists]] using std::deci;
  [[clang::using_if_exists]] using std::exa;
  [[clang::using_if_exists]] using std::femto;
  [[clang::using_if_exists]] using std::giga;
  [[clang::using_if_exists]] using std::hecto;
  [[clang::using_if_exists]] using std::kilo;
  [[clang::using_if_exists]] using std::mega;
  [[clang::using_if_exists]] using std::micro;
  [[clang::using_if_exists]] using std::milli;
  [[clang::using_if_exists]] using std::nano;
  [[clang::using_if_exists]] using std::peta;
  [[clang::using_if_exists]] using std::pico;
  [[clang::using_if_exists]] using std::ratio;
  [[clang::using_if_exists]] using std::ratio_add;
  [[clang::using_if_exists]] using std::ratio_divide;
  [[clang::using_if_exists]] using std::ratio_equal;
  [[clang::using_if_exists]] using std::ratio_equal_v;
  [[clang::using_if_exists]] using std::ratio_greater;
  [[clang::using_if_exists]] using std::ratio_greater_equal;
  [[clang::using_if_exists]] using std::ratio_greater_equal_v;
  [[clang::using_if_exists]] using std::ratio_greater_v;
  [[clang::using_if_exists]] using std::ratio_less;
  [[clang::using_if_exists]] using std::ratio_less_equal;
  [[clang::using_if_exists]] using std::ratio_less_equal_v;
  [[clang::using_if_exists]] using std::ratio_less_v;
  [[clang::using_if_exists]] using std::ratio_multiply;
  [[clang::using_if_exists]] using std::ratio_not_equal;
  [[clang::using_if_exists]] using std::ratio_not_equal_v;
  [[clang::using_if_exists]] using std::ratio_subtract;
  [[clang::using_if_exists]] using std::tera;
}

// FIXME <rcu>

// <regex>
export namespace std
{
  namespace regex_constants
  {
    [[clang::using_if_exists]] using std::regex_constants::error_type;
    [[clang::using_if_exists]] using std::regex_constants::match_flag_type;
    [[clang::using_if_exists]] using std::regex_constants::syntax_option_type;
    [[clang::using_if_exists]] using std::regex_constants::operator&;
    [[clang::using_if_exists]] using std::regex_constants::operator&=;
    [[clang::using_if_exists]] using std::regex_constants::operator^;
    [[clang::using_if_exists]] using std::regex_constants::operator^=;
    [[clang::using_if_exists]] using std::regex_constants::operator|;
    [[clang::using_if_exists]] using std::regex_constants::operator|=;
    [[clang::using_if_exists]] using std::regex_constants::operator~;
    [[clang::using_if_exists]] using std::regex_constants::awk;
    [[clang::using_if_exists]] using std::regex_constants::basic;
    [[clang::using_if_exists]] using std::regex_constants::collate;
    [[clang::using_if_exists]] using std::regex_constants::ECMAScript;
    [[clang::using_if_exists]] using std::regex_constants::egrep;
    [[clang::using_if_exists]] using std::regex_constants::extended;
    [[clang::using_if_exists]] using std::regex_constants::grep;
    [[clang::using_if_exists]] using std::regex_constants::icase;
    [[clang::using_if_exists]] using std::regex_constants::multiline;
    [[clang::using_if_exists]] using std::regex_constants::nosubs;
    [[clang::using_if_exists]] using std::regex_constants::optimize;
    [[clang::using_if_exists]] using std::regex_constants::format_default;
    [[clang::using_if_exists]] using std::regex_constants::format_first_only;
    [[clang::using_if_exists]] using std::regex_constants::format_no_copy;
    [[clang::using_if_exists]] using std::regex_constants::format_sed;
    [[clang::using_if_exists]] using std::regex_constants::match_any;
    [[clang::using_if_exists]] using std::regex_constants::match_continuous;
    [[clang::using_if_exists]] using std::regex_constants::match_default;
    [[clang::using_if_exists]] using std::regex_constants::match_not_bol;
    [[clang::using_if_exists]] using std::regex_constants::match_not_bow;
    [[clang::using_if_exists]] using std::regex_constants::match_not_eol;
    [[clang::using_if_exists]] using std::regex_constants::match_not_eow;
    [[clang::using_if_exists]] using std::regex_constants::match_not_null;
    [[clang::using_if_exists]] using std::regex_constants::match_prev_avail;
    [[clang::using_if_exists]] using std::regex_constants::error_backref;
    [[clang::using_if_exists]] using std::regex_constants::error_badbrace;
    [[clang::using_if_exists]] using std::regex_constants::error_badrepeat;
    [[clang::using_if_exists]] using std::regex_constants::error_brace;
    [[clang::using_if_exists]] using std::regex_constants::error_brack;
    [[clang::using_if_exists]] using std::regex_constants::error_collate;
    [[clang::using_if_exists]] using std::regex_constants::error_complexity;
    [[clang::using_if_exists]] using std::regex_constants::error_ctype;
    [[clang::using_if_exists]] using std::regex_constants::error_escape;
    [[clang::using_if_exists]] using std::regex_constants::error_paren;
    [[clang::using_if_exists]] using std::regex_constants::error_range;
    [[clang::using_if_exists]] using std::regex_constants::error_space;
    [[clang::using_if_exists]] using std::regex_constants::error_stack;
  }
  [[clang::using_if_exists]] using std::basic_regex;
  [[clang::using_if_exists]] using std::csub_match;
  [[clang::using_if_exists]] using std::regex;
  [[clang::using_if_exists]] using std::regex_error;
  [[clang::using_if_exists]] using std::regex_traits;
  [[clang::using_if_exists]] using std::ssub_match;
  [[clang::using_if_exists]] using std::sub_match;
  [[clang::using_if_exists]] using std::swap;
  [[clang::using_if_exists]] using std::wcsub_match;
  [[clang::using_if_exists]] using std::wregex;
  [[clang::using_if_exists]] using std::wssub_match;
  [[clang::using_if_exists]] using std::operator==;
  [[clang::using_if_exists]] using std::operator<=>;
  [[clang::using_if_exists]] using std::operator<<;
  [[clang::using_if_exists]] using std::cmatch;
  [[clang::using_if_exists]] using std::cregex_iterator;
  [[clang::using_if_exists]] using std::cregex_token_iterator;
  [[clang::using_if_exists]] using std::match_results;
  [[clang::using_if_exists]] using std::regex_iterator;
  [[clang::using_if_exists]] using std::regex_match;
  [[clang::using_if_exists]] using std::regex_replace;
  [[clang::using_if_exists]] using std::regex_search;
  [[clang::using_if_exists]] using std::regex_token_iterator;
  [[clang::using_if_exists]] using std::smatch;
  [[clang::using_if_exists]] using std::sregex_iterator;
  [[clang::using_if_exists]] using std::sregex_token_iterator;
  [[clang::using_if_exists]] using std::wcmatch;
  [[clang::using_if_exists]] using std::wcregex_iterator;
  [[clang::using_if_exists]] using std::wcregex_token_iterator;
  [[clang::using_if_exists]] using std::wsmatch;
  [[clang::using_if_exists]] using std::wsregex_iterator;
  [[clang::using_if_exists]] using std::wsregex_token_iterator;
  namespace pmr
  {
#if _GLIBCXX_USE_CXX11_ABI
    [[clang::using_if_exists]] using std::pmr::cmatch;
    [[clang::using_if_exists]] using std::pmr::match_results;
    [[clang::using_if_exists]] using std::pmr::smatch;
    [[clang::using_if_exists]] using std::pmr::wcmatch;
    [[clang::using_if_exists]] using std::pmr::wsmatch;
#endif
  }
}

// 20.5 <scoped_allocator>
export namespace std
{
  [[clang::using_if_exists]] using std::scoped_allocator_adaptor;
  [[clang::using_if_exists]] using std::operator==;
}

// <semaphore>
export namespace std
{
  [[clang::using_if_exists]] using std::binary_semaphore;
  [[clang::using_if_exists]] using std::counting_semaphore;
}

// <set>
export namespace std
{
  [[clang::using_if_exists]] using std::set;
  [[clang::using_if_exists]] using std::operator==;
  [[clang::using_if_exists]] using std::operator<=>;
  [[clang::using_if_exists]] using std::erase_if;
  [[clang::using_if_exists]] using std::multiset;
  [[clang::using_if_exists]] using std::swap;
  namespace pmr
  {
    [[clang::using_if_exists]] using std::pmr::multiset;
    [[clang::using_if_exists]] using std::pmr::set;
  }
}

// <shared_mutex>
export namespace std
{
  [[clang::using_if_exists]] using std::shared_lock;
  [[clang::using_if_exists]] using std::shared_mutex;
  [[clang::using_if_exists]] using std::shared_timed_mutex;
  [[clang::using_if_exists]] using std::swap;
}

// 17.8.1 <source_location>
export namespace std
{
  [[clang::using_if_exists]] using std::source_location;
}

// <span>
export namespace std
{
  [[clang::using_if_exists]] using std::dynamic_extent;
  [[clang::using_if_exists]] using std::span;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::enable_borrowed_range;
    [[clang::using_if_exists]] using std::ranges::enable_view;
  }
  [[clang::using_if_exists]] using std::as_bytes;
  [[clang::using_if_exists]] using std::as_writable_bytes;
}

#if __cpp_lib_spanstream
// <spanstream>
export namespace std
{
  [[clang::using_if_exists]] using std::basic_spanbuf;
  [[clang::using_if_exists]] using std::spanbuf;
  [[clang::using_if_exists]] using std::wspanbuf;
  [[clang::using_if_exists]] using std::basic_ispanstream;
  [[clang::using_if_exists]] using std::ispanstream;
  [[clang::using_if_exists]] using std::wispanstream;
  [[clang::using_if_exists]] using std::basic_ospanstream;
  [[clang::using_if_exists]] using std::ospanstream;
  [[clang::using_if_exists]] using std::wospanstream;
  [[clang::using_if_exists]] using std::basic_spanstream;
  [[clang::using_if_exists]] using std::spanstream;
  [[clang::using_if_exists]] using std::wspanstream;
}
#endif

// <sstream>
export namespace std
{
  [[clang::using_if_exists]] using std::basic_istringstream;
  [[clang::using_if_exists]] using std::basic_ostringstream;
  [[clang::using_if_exists]] using std::basic_stringbuf;
  [[clang::using_if_exists]] using std::basic_stringstream;
  [[clang::using_if_exists]] using std::istringstream;
  [[clang::using_if_exists]] using std::ostringstream;
  [[clang::using_if_exists]] using std::stringbuf;
  [[clang::using_if_exists]] using std::stringstream;
  [[clang::using_if_exists]] using std::swap;
  [[clang::using_if_exists]] using std::wistringstream;
  [[clang::using_if_exists]] using std::wostringstream;
  [[clang::using_if_exists]] using std::wstringbuf;
  [[clang::using_if_exists]] using std::wstringstream;
}

// <stack>
export namespace std
{
  [[clang::using_if_exists]] using std::stack;
  [[clang::using_if_exists]] using std::operator==;
  [[clang::using_if_exists]] using std::operator!=;
  [[clang::using_if_exists]] using std::operator<;
  [[clang::using_if_exists]] using std::operator>;
  [[clang::using_if_exists]] using std::operator<=;
  [[clang::using_if_exists]] using std::operator>=;
  [[clang::using_if_exists]] using std::operator<=>;
  [[clang::using_if_exists]] using std::swap;
  [[clang::using_if_exists]] using std::uses_allocator;
}

// 19.6 <stacktrace>
#if __cpp_lib_stacktrace
export namespace std
{
  [[clang::using_if_exists]] using std::stacktrace_entry;
  [[clang::using_if_exists]] using std::basic_stacktrace;
  [[clang::using_if_exists]] using std::stacktrace;
  [[clang::using_if_exists]] using std::swap;
  [[clang::using_if_exists]] using std::to_string;
  [[clang::using_if_exists]] using std::operator<<;
  [[clang::using_if_exists]] using std::formatter;
  namespace pmr
  {
    [[clang::using_if_exists]] using std::pmr::stacktrace;
  }
  [[clang::using_if_exists]] using std::hash;
}
#endif

// 19.2 <stdexcept>
export namespace std
{
  [[clang::using_if_exists]] using std::domain_error;
  [[clang::using_if_exists]] using std::invalid_argument;
  [[clang::using_if_exists]] using std::length_error;
  [[clang::using_if_exists]] using std::logic_error;
  [[clang::using_if_exists]] using std::out_of_range;
  [[clang::using_if_exists]] using std::overflow_error;
  [[clang::using_if_exists]] using std::range_error;
  [[clang::using_if_exists]] using std::runtime_error;
  [[clang::using_if_exists]] using std::underflow_error;
}

// 17.4.2 <stdfloat>
export namespace std
{
#ifdef __STDCPP_FLOAT16_T__
  [[clang::using_if_exists]] using std::float16_t;
#endif
#ifdef __STDCPP_FLOAT32_T__
  [[clang::using_if_exists]] using std::float32_t;
#endif
#ifdef __STDCPP_FLOAT64_T__
  [[clang::using_if_exists]] using std::float64_t;
#endif
#ifdef __STDCPP_FLOAT128_T__
  [[clang::using_if_exists]] using std::float128_t;
#endif
#ifdef __STDCPP_BFLOAT16_T__
  [[clang::using_if_exists]] using std::bfloat16_t;
#endif
}

// <stop_token>
#if __cpp_lib_jthread
export namespace std
{
  [[clang::using_if_exists]] using std::stop_token;
  [[clang::using_if_exists]] using std::stop_source;
  [[clang::using_if_exists]] using std::nostopstate_t;
  [[clang::using_if_exists]] using std::nostopstate;
  [[clang::using_if_exists]] using std::stop_callback;
#if __cpp_lib_senders
  [[clang::using_if_exists]] using std::never_stop_token;
  [[clang::using_if_exists]] using std::inplace_stop_token;
  [[clang::using_if_exists]] using std::inplace_stop_source;
  [[clang::using_if_exists]] using std::inplace_stop_callback;
  [[clang::using_if_exists]] using std::stop_callback_for;
#endif
}
#endif

// <streambuf>
export namespace std
{
  [[clang::using_if_exists]] using std::basic_streambuf;
  [[clang::using_if_exists]] using std::streambuf;
  [[clang::using_if_exists]] using std::wstreambuf;
}

// <string>
export namespace std
{
  [[clang::using_if_exists]] using std::basic_string;
  [[clang::using_if_exists]] using std::char_traits;
  [[clang::using_if_exists]] using std::operator+;
  [[clang::using_if_exists]] using std::operator==;
  [[clang::using_if_exists]] using std::operator<=>;
  [[clang::using_if_exists]] using std::swap;
  [[clang::using_if_exists]] using std::operator>>;
  [[clang::using_if_exists]] using std::operator<<;
  [[clang::using_if_exists]] using std::erase;
  [[clang::using_if_exists]] using std::erase_if;
  [[clang::using_if_exists]] using std::getline;
  [[clang::using_if_exists]] using std::stod;
  [[clang::using_if_exists]] using std::stof;
  [[clang::using_if_exists]] using std::stoi;
  [[clang::using_if_exists]] using std::stol;
  [[clang::using_if_exists]] using std::stold;
  [[clang::using_if_exists]] using std::stoll;
  [[clang::using_if_exists]] using std::stoul;
  [[clang::using_if_exists]] using std::stoull;
  [[clang::using_if_exists]] using std::string;
  [[clang::using_if_exists]] using std::to_string;
  [[clang::using_if_exists]] using std::to_wstring;
  [[clang::using_if_exists]] using std::u16string;
  [[clang::using_if_exists]] using std::u32string;
  [[clang::using_if_exists]] using std::u8string;
  [[clang::using_if_exists]] using std::wstring;
  namespace pmr
  {
#if _GLIBCXX_USE_CXX11_ABI
    [[clang::using_if_exists]] using std::pmr::basic_string;
    [[clang::using_if_exists]] using std::pmr::string;
    [[clang::using_if_exists]] using std::pmr::u16string;
    [[clang::using_if_exists]] using std::pmr::u32string;
    [[clang::using_if_exists]] using std::pmr::u8string;
    [[clang::using_if_exists]] using std::pmr::wstring;
#endif
  }
  [[clang::using_if_exists]] using std::hash;
}
export namespace std::inline literals::inline string_literals
{
  [[clang::using_if_exists]] using std::operator""s;
}

// <string_view>
export namespace std
{
  [[clang::using_if_exists]] using std::basic_string_view;
  namespace ranges
  {
    [[clang::using_if_exists]] using std::ranges::enable_borrowed_range;
    [[clang::using_if_exists]] using std::ranges::enable_view;
  }
  [[clang::using_if_exists]] using std::operator==;
  [[clang::using_if_exists]] using std::operator<=>;
  [[clang::using_if_exists]] using std::operator<<;
  [[clang::using_if_exists]] using std::hash;
  [[clang::using_if_exists]] using std::string_view;
  [[clang::using_if_exists]] using std::u16string_view;
  [[clang::using_if_exists]] using std::u32string_view;
  [[clang::using_if_exists]] using std::u8string_view;
  [[clang::using_if_exists]] using std::wstring_view;
}
export namespace std::inline literals::inline string_view_literals
{
  [[clang::using_if_exists]] using string_view_literals::operator""sv;
}

export
{
  [[clang::using_if_exists]] using std::literals::string_view_literals::operator""sv;
}

// <strstream>: deprecated C++98, removed C++26
export namespace std
{
  [[clang::using_if_exists]] using std::istrstream;
  [[clang::using_if_exists]] using std::ostrstream;
  [[clang::using_if_exists]] using std::strstream;
  [[clang::using_if_exists]] using std::strstreambuf;
}

// <syncstream>
export namespace std
{
#ifdef __cpp_lib_syncbuf
  [[clang::using_if_exists]] using std::basic_syncbuf;
  [[clang::using_if_exists]] using std::swap;
  [[clang::using_if_exists]] using std::basic_osyncstream;
  [[clang::using_if_exists]] using std::osyncstream;
  [[clang::using_if_exists]] using std::syncbuf;
  [[clang::using_if_exists]] using std::wosyncstream;
  [[clang::using_if_exists]] using std::wsyncbuf;
#endif
}

// 19.5 <system_error>
export namespace std
{
  [[clang::using_if_exists]] using std::errc;
  [[clang::using_if_exists]] using std::error_category;
  [[clang::using_if_exists]] using std::error_code;
  [[clang::using_if_exists]] using std::error_condition;
  [[clang::using_if_exists]] using std::generic_category;
  [[clang::using_if_exists]] using std::is_error_code_enum;
  [[clang::using_if_exists]] using std::is_error_condition_enum;
  [[clang::using_if_exists]] using std::make_error_code;
  [[clang::using_if_exists]] using std::system_category;
  [[clang::using_if_exists]] using std::system_error;
  [[clang::using_if_exists]] using std::operator<<;
  [[clang::using_if_exists]] using std::make_error_condition;
  [[clang::using_if_exists]] using std::operator==;
  [[clang::using_if_exists]] using std::operator<=>;
  [[clang::using_if_exists]] using std::hash;
  [[clang::using_if_exists]] using std::is_error_code_enum_v;
  [[clang::using_if_exists]] using std::is_error_condition_enum_v;
}

// <text_encoding>
#if __cpp_lib_text_encoding
export namespace std
{
  [[clang::using_if_exists]] using std::text_encoding;
}
#endif

// <thread>
export namespace std
{
  [[clang::using_if_exists]] using std::swap;
  [[clang::using_if_exists]] using std::thread;
  [[clang::using_if_exists]] using std::jthread;
  namespace this_thread
  {
    [[clang::using_if_exists]] using std::this_thread::get_id;
    [[clang::using_if_exists]] using std::this_thread::sleep_for;
    [[clang::using_if_exists]] using std::this_thread::sleep_until;
    [[clang::using_if_exists]] using std::this_thread::yield;
  }
  [[clang::using_if_exists]] using std::operator==;
  [[clang::using_if_exists]] using std::operator<=>;
  [[clang::using_if_exists]] using std::operator<<;
  [[clang::using_if_exists]] using std::hash;
}

// <tuple>
export namespace std
{
  [[clang::using_if_exists]] using std::apply;
  [[clang::using_if_exists]] using std::forward_as_tuple;
  [[clang::using_if_exists]] using std::get;
  [[clang::using_if_exists]] using std::ignore;
  [[clang::using_if_exists]] using std::make_from_tuple;
  [[clang::using_if_exists]] using std::make_tuple;
  [[clang::using_if_exists]] using std::tie;
  [[clang::using_if_exists]] using std::tuple;
  [[clang::using_if_exists]] using std::tuple_cat;
  [[clang::using_if_exists]] using std::tuple_element;
  [[clang::using_if_exists]] using std::tuple_element_t;
  [[clang::using_if_exists]] using std::tuple_size;
  [[clang::using_if_exists]] using std::operator==;
  [[clang::using_if_exists]] using std::operator<=>;
  [[clang::using_if_exists]] using std::swap;
  [[clang::using_if_exists]] using std::tuple_size_v;
  [[clang::using_if_exists]] using std::uses_allocator;
}

// <type_traits>
export namespace std
{
  [[clang::using_if_exists]] using std::add_const;
  [[clang::using_if_exists]] using std::add_const_t;
  [[clang::using_if_exists]] using std::add_cv;
  [[clang::using_if_exists]] using std::add_cv_t;
  [[clang::using_if_exists]] using std::add_lvalue_reference;
  [[clang::using_if_exists]] using std::add_lvalue_reference_t;
  [[clang::using_if_exists]] using std::add_pointer;
  [[clang::using_if_exists]] using std::add_pointer_t;
  [[clang::using_if_exists]] using std::add_rvalue_reference;
  [[clang::using_if_exists]] using std::add_rvalue_reference_t;
  [[clang::using_if_exists]] using std::add_volatile;
  [[clang::using_if_exists]] using std::add_volatile_t;
  [[clang::using_if_exists]] using std::aligned_storage;
  [[clang::using_if_exists]] using std::aligned_storage_t;
  [[clang::using_if_exists]] using std::aligned_union;
  [[clang::using_if_exists]] using std::aligned_union_t;
  [[clang::using_if_exists]] using std::alignment_of;
  [[clang::using_if_exists]] using std::alignment_of_v;
  [[clang::using_if_exists]] using std::basic_common_reference;
  [[clang::using_if_exists]] using std::bool_constant;
  [[clang::using_if_exists]] using std::common_reference;
  [[clang::using_if_exists]] using std::common_reference_t;
  [[clang::using_if_exists]] using std::common_type;
  [[clang::using_if_exists]] using std::common_type_t;
  [[clang::using_if_exists]] using std::conditional;
  [[clang::using_if_exists]] using std::conditional_t;
  [[clang::using_if_exists]] using std::conjunction;
  [[clang::using_if_exists]] using std::conjunction_v;
#if __cpp_lib_constant_wrapper
  [[clang::using_if_exists]] using std::constant_wrapper;
  [[clang::using_if_exists]] using std::cw;
#endif
  [[clang::using_if_exists]] using std::decay;
  [[clang::using_if_exists]] using std::decay_t;
  [[clang::using_if_exists]] using std::disjunction;
  [[clang::using_if_exists]] using std::disjunction_v;
  [[clang::using_if_exists]] using std::enable_if;
  [[clang::using_if_exists]] using std::enable_if_t;
  [[clang::using_if_exists]] using std::extent;
  [[clang::using_if_exists]] using std::extent_v;
  [[clang::using_if_exists]] using std::false_type;
  [[clang::using_if_exists]] using std::has_unique_object_representations;
  [[clang::using_if_exists]] using std::has_unique_object_representations_v;
  [[clang::using_if_exists]] using std::has_virtual_destructor;
  [[clang::using_if_exists]] using std::has_virtual_destructor_v;
  [[clang::using_if_exists]] using std::integral_constant;
  [[clang::using_if_exists]] using std::invoke_result;
  [[clang::using_if_exists]] using std::invoke_result_t;
  [[clang::using_if_exists]] using std::is_abstract;
  [[clang::using_if_exists]] using std::is_abstract_v;
  [[clang::using_if_exists]] using std::is_aggregate;
  [[clang::using_if_exists]] using std::is_aggregate_v;
  [[clang::using_if_exists]] using std::is_arithmetic;
  [[clang::using_if_exists]] using std::is_arithmetic_v;
  [[clang::using_if_exists]] using std::is_array;
  [[clang::using_if_exists]] using std::is_array_v;
  [[clang::using_if_exists]] using std::is_assignable;
  [[clang::using_if_exists]] using std::is_assignable_v;
  [[clang::using_if_exists]] using std::is_base_of;
  [[clang::using_if_exists]] using std::is_base_of_v;
  [[clang::using_if_exists]] using std::is_bounded_array;
  [[clang::using_if_exists]] using std::is_bounded_array_v;
  [[clang::using_if_exists]] using std::is_class;
  [[clang::using_if_exists]] using std::is_class_v;
  [[clang::using_if_exists]] using std::is_compound;
  [[clang::using_if_exists]] using std::is_compound_v;
  [[clang::using_if_exists]] using std::is_const;
  [[clang::using_if_exists]] using std::is_const_v;
  [[clang::using_if_exists]] using std::is_constant_evaluated;
  [[clang::using_if_exists]] using std::is_constructible;
  [[clang::using_if_exists]] using std::is_constructible_v;
  [[clang::using_if_exists]] using std::is_convertible;
  [[clang::using_if_exists]] using std::is_convertible_v;
  [[clang::using_if_exists]] using std::is_copy_assignable;
  [[clang::using_if_exists]] using std::is_copy_assignable_v;
  [[clang::using_if_exists]] using std::is_copy_constructible;
  [[clang::using_if_exists]] using std::is_copy_constructible_v;
  [[clang::using_if_exists]] using std::is_default_constructible;
  [[clang::using_if_exists]] using std::is_default_constructible_v;
  [[clang::using_if_exists]] using std::is_destructible;
  [[clang::using_if_exists]] using std::is_destructible_v;
  [[clang::using_if_exists]] using std::is_empty;
  [[clang::using_if_exists]] using std::is_empty_v;
  [[clang::using_if_exists]] using std::is_enum;
  [[clang::using_if_exists]] using std::is_enum_v;
  [[clang::using_if_exists]] using std::is_final;
  [[clang::using_if_exists]] using std::is_final_v;
  [[clang::using_if_exists]] using std::is_floating_point;
  [[clang::using_if_exists]] using std::is_floating_point_v;
  [[clang::using_if_exists]] using std::is_function;
  [[clang::using_if_exists]] using std::is_function_v;
  [[clang::using_if_exists]] using std::is_fundamental;
  [[clang::using_if_exists]] using std::is_fundamental_v;
  [[clang::using_if_exists]] using std::is_integral;
  [[clang::using_if_exists]] using std::is_integral_v;
  [[clang::using_if_exists]] using std::is_invocable;
  [[clang::using_if_exists]] using std::is_invocable_r;
  [[clang::using_if_exists]] using std::is_invocable_r_v;
  [[clang::using_if_exists]] using std::is_invocable_v;
  [[clang::using_if_exists]] using std::is_lvalue_reference;
  [[clang::using_if_exists]] using std::is_lvalue_reference_v;
  [[clang::using_if_exists]] using std::is_member_function_pointer;
  [[clang::using_if_exists]] using std::is_member_function_pointer_v;
  [[clang::using_if_exists]] using std::is_member_object_pointer;
  [[clang::using_if_exists]] using std::is_member_object_pointer_v;
  [[clang::using_if_exists]] using std::is_member_pointer;
  [[clang::using_if_exists]] using std::is_member_pointer_v;
  [[clang::using_if_exists]] using std::is_move_assignable;
  [[clang::using_if_exists]] using std::is_move_assignable_v;
  [[clang::using_if_exists]] using std::is_move_constructible;
  [[clang::using_if_exists]] using std::is_move_constructible_v;
  [[clang::using_if_exists]] using std::is_nothrow_assignable;
  [[clang::using_if_exists]] using std::is_nothrow_assignable_v;
  [[clang::using_if_exists]] using std::is_nothrow_constructible;
  [[clang::using_if_exists]] using std::is_nothrow_constructible_v;
  [[clang::using_if_exists]] using std::is_nothrow_convertible;
  [[clang::using_if_exists]] using std::is_nothrow_convertible_v;
  [[clang::using_if_exists]] using std::is_nothrow_copy_assignable;
  [[clang::using_if_exists]] using std::is_nothrow_copy_assignable_v;
  [[clang::using_if_exists]] using std::is_nothrow_copy_constructible;
  [[clang::using_if_exists]] using std::is_nothrow_copy_constructible_v;
  [[clang::using_if_exists]] using std::is_nothrow_default_constructible;
  [[clang::using_if_exists]] using std::is_nothrow_default_constructible_v;
  [[clang::using_if_exists]] using std::is_nothrow_destructible;
  [[clang::using_if_exists]] using std::is_nothrow_destructible_v;
  [[clang::using_if_exists]] using std::is_nothrow_invocable;
  [[clang::using_if_exists]] using std::is_nothrow_invocable_r;
  [[clang::using_if_exists]] using std::is_nothrow_invocable_r_v;
  [[clang::using_if_exists]] using std::is_nothrow_invocable_v;
  [[clang::using_if_exists]] using std::is_nothrow_move_assignable;
  [[clang::using_if_exists]] using std::is_nothrow_move_assignable_v;
  [[clang::using_if_exists]] using std::is_nothrow_move_constructible;
  [[clang::using_if_exists]] using std::is_nothrow_move_constructible_v;
  [[clang::using_if_exists]] using std::is_nothrow_swappable;
  [[clang::using_if_exists]] using std::is_nothrow_swappable_v;
  [[clang::using_if_exists]] using std::is_nothrow_swappable_with;
  [[clang::using_if_exists]] using std::is_nothrow_swappable_with_v;
  [[clang::using_if_exists]] using std::is_null_pointer;
  [[clang::using_if_exists]] using std::is_null_pointer_v;
  [[clang::using_if_exists]] using std::is_object;
  [[clang::using_if_exists]] using std::is_object_v;
  [[clang::using_if_exists]] using std::is_pod;
  [[clang::using_if_exists]] using std::is_pod_v;
  [[clang::using_if_exists]] using std::is_pointer;
  [[clang::using_if_exists]] using std::is_pointer_v;
  [[clang::using_if_exists]] using std::is_polymorphic;
  [[clang::using_if_exists]] using std::is_polymorphic_v;
  [[clang::using_if_exists]] using std::is_reference;
  [[clang::using_if_exists]] using std::is_reference_v;
  [[clang::using_if_exists]] using std::is_rvalue_reference;
  [[clang::using_if_exists]] using std::is_rvalue_reference_v;
  [[clang::using_if_exists]] using std::is_same;
  [[clang::using_if_exists]] using std::is_same_v;
  [[clang::using_if_exists]] using std::is_scalar;
  [[clang::using_if_exists]] using std::is_scalar_v;
  [[clang::using_if_exists]] using std::is_signed;
  [[clang::using_if_exists]] using std::is_signed_v;
  [[clang::using_if_exists]] using std::is_standard_layout;
  [[clang::using_if_exists]] using std::is_standard_layout_v;
  [[clang::using_if_exists]] using std::is_swappable;
  [[clang::using_if_exists]] using std::is_swappable_v;
  [[clang::using_if_exists]] using std::is_swappable_with;
  [[clang::using_if_exists]] using std::is_swappable_with_v;
  [[clang::using_if_exists]] using std::is_trivial;
  [[clang::using_if_exists]] using std::is_trivial_v;
  [[clang::using_if_exists]] using std::is_trivially_assignable;
  [[clang::using_if_exists]] using std::is_trivially_assignable_v;
  [[clang::using_if_exists]] using std::is_trivially_constructible;
  [[clang::using_if_exists]] using std::is_trivially_constructible_v;
  [[clang::using_if_exists]] using std::is_trivially_copy_assignable;
  [[clang::using_if_exists]] using std::is_trivially_copy_assignable_v;
  [[clang::using_if_exists]] using std::is_trivially_copy_constructible;
  [[clang::using_if_exists]] using std::is_trivially_copy_constructible_v;
  [[clang::using_if_exists]] using std::is_trivially_copyable;
  [[clang::using_if_exists]] using std::is_trivially_copyable_v;
  [[clang::using_if_exists]] using std::is_trivially_default_constructible;
  [[clang::using_if_exists]] using std::is_trivially_default_constructible_v;
  [[clang::using_if_exists]] using std::is_trivially_destructible;
  [[clang::using_if_exists]] using std::is_trivially_destructible_v;
  [[clang::using_if_exists]] using std::is_trivially_move_assignable;
  [[clang::using_if_exists]] using std::is_trivially_move_assignable_v;
  [[clang::using_if_exists]] using std::is_trivially_move_constructible;
  [[clang::using_if_exists]] using std::is_trivially_move_constructible_v;
  [[clang::using_if_exists]] using std::is_unbounded_array;
  [[clang::using_if_exists]] using std::is_unbounded_array_v;
  [[clang::using_if_exists]] using std::is_union;
  [[clang::using_if_exists]] using std::is_union_v;
  [[clang::using_if_exists]] using std::is_unsigned;
  [[clang::using_if_exists]] using std::is_unsigned_v;
#if __cpp_lib_is_virtual_base_of
  [[clang::using_if_exists]] using std::is_virtual_base_of;
  [[clang::using_if_exists]] using std::is_virtual_base_of_v;
#endif
  [[clang::using_if_exists]] using std::is_void;
  [[clang::using_if_exists]] using std::is_void_v;
  [[clang::using_if_exists]] using std::is_volatile;
  [[clang::using_if_exists]] using std::is_volatile_v;
  [[clang::using_if_exists]] using std::make_signed;
  [[clang::using_if_exists]] using std::make_signed_t;
  [[clang::using_if_exists]] using std::make_unsigned;
  [[clang::using_if_exists]] using std::make_unsigned_t;
  [[clang::using_if_exists]] using std::negation;
  [[clang::using_if_exists]] using std::negation_v;
  [[clang::using_if_exists]] using std::rank;
  [[clang::using_if_exists]] using std::rank_v;
  [[clang::using_if_exists]] using std::remove_all_extents;
  [[clang::using_if_exists]] using std::remove_all_extents_t;
  [[clang::using_if_exists]] using std::remove_const;
  [[clang::using_if_exists]] using std::remove_const_t;
  [[clang::using_if_exists]] using std::remove_cv;
  [[clang::using_if_exists]] using std::remove_cv_t;
  [[clang::using_if_exists]] using std::remove_cvref;
  [[clang::using_if_exists]] using std::remove_cvref_t;
  [[clang::using_if_exists]] using std::remove_extent;
  [[clang::using_if_exists]] using std::remove_extent_t;
  [[clang::using_if_exists]] using std::remove_pointer;
  [[clang::using_if_exists]] using std::remove_pointer_t;
  [[clang::using_if_exists]] using std::remove_reference;
  [[clang::using_if_exists]] using std::remove_reference_t;
  [[clang::using_if_exists]] using std::remove_volatile;
  [[clang::using_if_exists]] using std::remove_volatile_t;
  [[clang::using_if_exists]] using std::true_type;
  [[clang::using_if_exists]] using std::type_identity;
  [[clang::using_if_exists]] using std::type_identity_t;
  [[clang::using_if_exists]] using std::underlying_type;
  [[clang::using_if_exists]] using std::underlying_type_t;
  [[clang::using_if_exists]] using std::unwrap_ref_decay;
  [[clang::using_if_exists]] using std::unwrap_ref_decay_t;
  [[clang::using_if_exists]] using std::unwrap_reference;
  [[clang::using_if_exists]] using std::unwrap_reference_t;
  [[clang::using_if_exists]] using std::void_t;
#if __cpp_lib_reference_from_temporary
  [[clang::using_if_exists]] using std::reference_converts_from_temporary;
  [[clang::using_if_exists]] using std::reference_converts_from_temporary_v;
  [[clang::using_if_exists]] using std::reference_constructs_from_temporary;
  [[clang::using_if_exists]] using std::reference_constructs_from_temporary_v;
#endif
#if __cpp_lib_is_layout_compatible
  [[clang::using_if_exists]] using std::is_corresponding_member;
  [[clang::using_if_exists]] using std::is_layout_compatible;
  [[clang::using_if_exists]] using std::is_layout_compatible_v;
#endif
#if __cpp_lib_is_pointer_interconvertible
  [[clang::using_if_exists]] using std::is_pointer_interconvertible_base_of;
  [[clang::using_if_exists]] using std::is_pointer_interconvertible_base_of_v;
  [[clang::using_if_exists]] using std::is_pointer_interconvertible_with_class;
#endif
#if __cpp_lib_is_scoped_enum
  [[clang::using_if_exists]] using std::is_scoped_enum;
  [[clang::using_if_exists]] using std::is_scoped_enum_v;
#endif
#if __cpp_lib_is_implicit_lifetime
  [[clang::using_if_exists]] using std::is_implicit_lifetime;
  [[clang::using_if_exists]] using std::is_implicit_lifetime_v;
#endif
}

// <typeindex>
export namespace std
{
  [[clang::using_if_exists]] using std::hash;
  [[clang::using_if_exists]] using std::type_index;
}

// 17.7.2 <typeinfo> [typeinfo.syn]
export namespace std
{
  [[clang::using_if_exists]] using std::bad_cast;
  [[clang::using_if_exists]] using std::bad_typeid;
  [[clang::using_if_exists]] using std::type_info;
}

// <unordered_map>
export namespace std
{
  [[clang::using_if_exists]] using std::unordered_map;
  [[clang::using_if_exists]] using std::unordered_multimap;
  [[clang::using_if_exists]] using std::operator==;
  [[clang::using_if_exists]] using std::erase_if;
  [[clang::using_if_exists]] using std::swap;
  namespace pmr
  {
    [[clang::using_if_exists]] using std::pmr::unordered_map;
    [[clang::using_if_exists]] using std::pmr::unordered_multimap;
  }
}

// <unordered_set>
export namespace std
{
  [[clang::using_if_exists]] using std::unordered_multiset;
  [[clang::using_if_exists]] using std::unordered_set;
  [[clang::using_if_exists]] using std::operator==;
  [[clang::using_if_exists]] using std::erase_if;
  [[clang::using_if_exists]] using std::swap;
  namespace pmr
  {
    [[clang::using_if_exists]] using std::pmr::unordered_multiset;
    [[clang::using_if_exists]] using std::pmr::unordered_set;
  }
}

// <utility>
export namespace std
{
  [[clang::using_if_exists]] using std::as_const;
  [[clang::using_if_exists]] using std::cmp_equal;
  [[clang::using_if_exists]] using std::cmp_greater;
  [[clang::using_if_exists]] using std::cmp_greater_equal;
  [[clang::using_if_exists]] using std::cmp_less;
  [[clang::using_if_exists]] using std::cmp_less_equal;
  [[clang::using_if_exists]] using std::cmp_not_equal;
  [[clang::using_if_exists]] using std::declval;
  [[clang::using_if_exists]] using std::exchange;
  [[clang::using_if_exists]] using std::forward;
#if __cpp_lib_forward_like
  [[clang::using_if_exists]] using std::forward_like;
#endif
  [[clang::using_if_exists]] using std::in_range;
  [[clang::using_if_exists]] using std::index_sequence;
  [[clang::using_if_exists]] using std::index_sequence_for;
  [[clang::using_if_exists]] using std::integer_sequence;
  [[clang::using_if_exists]] using std::make_index_sequence;
  [[clang::using_if_exists]] using std::make_integer_sequence;
  [[clang::using_if_exists]] using std::move;
  [[clang::using_if_exists]] using std::move_if_noexcept;
#if __cpp_lib_function_ref
  [[clang::using_if_exists]] using std::nontype_t;
  [[clang::using_if_exists]] using std::nontype;
#endif
  [[clang::using_if_exists]] using std::pair;
  [[clang::using_if_exists]] using std::swap;
  [[clang::using_if_exists]] using std::operator==;
  [[clang::using_if_exists]] using std::operator<=>;
  [[clang::using_if_exists]] using std::get;
  [[clang::using_if_exists]] using std::in_place;
  [[clang::using_if_exists]] using std::in_place_index;
  [[clang::using_if_exists]] using std::in_place_index_t;
  [[clang::using_if_exists]] using std::in_place_t;
  [[clang::using_if_exists]] using std::in_place_type;
  [[clang::using_if_exists]] using std::in_place_type_t;
  [[clang::using_if_exists]] using std::make_pair;
  [[clang::using_if_exists]] using std::piecewise_construct;
  [[clang::using_if_exists]] using std::piecewise_construct_t;
#if __cpp_lib_to_underlying
  [[clang::using_if_exists]] using std::to_underlying;
#endif
  [[clang::using_if_exists]] using std::tuple_element;
  [[clang::using_if_exists]] using std::tuple_size;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
  namespace rel_ops
  {
    [[clang::using_if_exists]] using std::rel_ops::operator!=;
    [[clang::using_if_exists]] using std::rel_ops::operator>;
    [[clang::using_if_exists]] using std::rel_ops::operator<=;
    [[clang::using_if_exists]] using std::rel_ops::operator>=;
  }
#pragma GCC diagnostic pop
#if __cpp_lib_unreachable
  [[clang::using_if_exists]] using std::unreachable;
#endif
#if __cpp_lib_observable_checkpoint
  [[clang::using_if_exists]] using std::observable_checkpoint;
#endif
}

// <valarray>
export namespace std
{
  [[clang::using_if_exists]] using std::gslice;
  [[clang::using_if_exists]] using std::gslice_array;
  [[clang::using_if_exists]] using std::indirect_array;
  [[clang::using_if_exists]] using std::mask_array;
  [[clang::using_if_exists]] using std::slice;
  [[clang::using_if_exists]] using std::slice_array;
  [[clang::using_if_exists]] using std::swap;
  [[clang::using_if_exists]] using std::valarray;
  // [[clang::using_if_exists]] using std::operator*;
  // [[clang::using_if_exists]] using std::operator/;
  // [[clang::using_if_exists]] using std::operator%;
  [[clang::using_if_exists]] using std::operator+;
  [[clang::using_if_exists]] using std::operator-;
  [[clang::using_if_exists]] using std::operator^;
  [[clang::using_if_exists]] using std::operator&;
  [[clang::using_if_exists]] using std::operator|;
  [[clang::using_if_exists]] using std::operator<<;
  [[clang::using_if_exists]] using std::operator>>;
  // [[clang::using_if_exists]] using std::operator&&;
  // [[clang::using_if_exists]] using std::operator||;
  [[clang::using_if_exists]] using std::operator==;
  [[clang::using_if_exists]] using std::operator!=;
  [[clang::using_if_exists]] using std::operator<;
  [[clang::using_if_exists]] using std::operator>;
  [[clang::using_if_exists]] using std::operator<=;
  [[clang::using_if_exists]] using std::operator>=;
  [[clang::using_if_exists]] using std::abs;
  [[clang::using_if_exists]] using std::acos;
  [[clang::using_if_exists]] using std::asin;
  [[clang::using_if_exists]] using std::atan;
  [[clang::using_if_exists]] using std::atan2;
  [[clang::using_if_exists]] using std::begin;
  [[clang::using_if_exists]] using std::cos;
  [[clang::using_if_exists]] using std::cosh;
  [[clang::using_if_exists]] using std::end;
  [[clang::using_if_exists]] using std::exp;
  [[clang::using_if_exists]] using std::log;
  [[clang::using_if_exists]] using std::log10;
  [[clang::using_if_exists]] using std::pow;
  [[clang::using_if_exists]] using std::sin;
  [[clang::using_if_exists]] using std::sinh;
  [[clang::using_if_exists]] using std::sqrt;
  [[clang::using_if_exists]] using std::tan;
  [[clang::using_if_exists]] using std::tanh;
}

// <variant>
export namespace std
{
  [[clang::using_if_exists]] using std::get;
  [[clang::using_if_exists]] using std::get_if;
  [[clang::using_if_exists]] using std::holds_alternative;
  [[clang::using_if_exists]] using std::variant;
  [[clang::using_if_exists]] using std::variant_alternative;
  [[clang::using_if_exists]] using std::variant_alternative_t;
  [[clang::using_if_exists]] using std::variant_npos;
  [[clang::using_if_exists]] using std::variant_size;
  [[clang::using_if_exists]] using std::variant_size_v;
  [[clang::using_if_exists]] using std::operator==;
  [[clang::using_if_exists]] using std::operator!=;
  [[clang::using_if_exists]] using std::operator<;
  [[clang::using_if_exists]] using std::operator>;
  [[clang::using_if_exists]] using std::operator<=;
  [[clang::using_if_exists]] using std::operator>=;
  [[clang::using_if_exists]] using std::operator<=>;
  [[clang::using_if_exists]] using std::bad_variant_access;
  [[clang::using_if_exists]] using std::hash;
  [[clang::using_if_exists]] using std::monostate;
  [[clang::using_if_exists]] using std::swap;
  [[clang::using_if_exists]] using std::visit;
}

// <vector>
export namespace std
{
  [[clang::using_if_exists]] using std::vector;
  [[clang::using_if_exists]] using std::operator==;
  [[clang::using_if_exists]] using std::operator<=>;
  [[clang::using_if_exists]] using std::erase;
  [[clang::using_if_exists]] using std::erase_if;
  [[clang::using_if_exists]] using std::swap;
  namespace pmr
  {
    [[clang::using_if_exists]] using std::pmr::vector;
  }
  [[clang::using_if_exists]] using std::hash;
}
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
  [[clang::using_if_exists]] using std::ssize_t;
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
  [[clang::using_if_exists]] using std::strnlen;
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
