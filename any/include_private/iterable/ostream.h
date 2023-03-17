//
// Created by user on 3/15/2023.
//

#ifndef ITERABLE_OSTREAM_H
#define ITERABLE_OSTREAM_H

#include "concepts/streamable.h"
#include "ranges/iterable.h"
#include <ostream>

namespace any::ios
{
    template<any::ranges::iterable T>
    requires any::is_streamable_v<any::ranges::range_value_t<T>>
    std::ostream& operator<<(std::ostream& os, const T& iterable)
    {
        for (auto iter{ iterable.begin() }; iter != iterable.end(); ++iter)
        {
            os << *iter << ' ';
        }
        return os;
    }
}

#endif //ITERABLE_OSTREAM_H
