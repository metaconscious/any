//
// Created by user on 3/15/2023.
//

#ifndef NUMERIC_RANGES_IOTA_H
#define NUMERIC_RANGES_IOTA_H

#include <concepts>
#include <numeric>
#include <ranges>

namespace any::ranges
{
    template<std::ranges::range T>
    requires std::incrementable<std::ranges::range_value_t<T>>
    void iota(T& iterable, std::ranges::range_value_t<T> value)
    {
        std::iota(std::begin(iterable), std::end(iterable), value);
    }
}

#endif //NUMERIC_RANGES_IOTA_H
