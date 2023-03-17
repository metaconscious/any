//
// Created by user on 3/15/2023.
//

#ifndef SORT_RANGES_INPLACE_BUBBLE_H
#define SORT_RANGES_INPLACE_BUBBLE_H

#include "inplace_bubble.h"
#include <concepts>
#include <iterator>
#include <ranges>

namespace any::ranges
{
    template<std::ranges::range T>
    requires std::swappable<std::ranges::range_value_t<T>>
        and std::totally_ordered<std::ranges::range_value_t<T>>
    void inplace_bubble(T& iterable)
    {
        any::inplace_bubble<std::ranges::iterator_t<T>>(std::begin(iterable), std::end(iterable));
    }
}

#endif //SORT_RANGES_INPLACE_BUBBLE_H
