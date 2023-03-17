//
// Created by user on 3/17/2023.
//

#ifndef ITERABLE_H
#define ITERABLE_H

#include "iterator/iterator.h"
#include <concepts>

namespace any::ranges
{
    template<typename T>
    concept iterable =
    requires(T range) {
        std::same_as<typename T::value_type, any::iter_value_t<typename T::iterator>>;
        any::iterator<typename T::iterator>;
        { range.begin() } -> std::same_as<typename T::iterator>;
        { range.end() } -> std::same_as<typename T::iterator>;
    };

    template<typename T>
    using range_value_t = typename T::value_type;

    template<typename T>
    using iterator_t = any::iter_value_t<typename T::iterator>;
}

#endif //ITERABLE_H
