//
// Created by user on 3/15/2023.
//

#ifndef ITERABLE_OSTREAM_H
#define ITERABLE_OSTREAM_H

#include <concepts>
#include "concepts/streamable.h"

namespace any::ios
{
    template<std::ranges::range T>
    requires any::is_streamable_v<std::ranges::range_value_t<T>>
    std::ostream& operator<<(std::ostream& os, const T& iterable)
    {
        for (auto&& e: iterable)
        {
            os << e << ' ';
        }
        return os;
    }
}

#endif //ITERABLE_OSTREAM_H
