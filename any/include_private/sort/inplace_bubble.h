//
// Created by user on 3/15/2023.
//

#ifndef SORT_INPLACE_BUBBLE_H
#define SORT_INPLACE_BUBBLE_H

#include <concepts>
#include <iterator>
#include <utility>

namespace any
{
    template<std::bidirectional_iterator Iter>
    requires std::swappable<std::iter_value_t<Iter>>
        and std::totally_ordered<std::iter_value_t<Iter>>
    void inplace_bubble(Iter begin, Iter end)
    {
        for (auto i{ end }; i != begin; --i)
        {
            for (auto j{ begin }; (j + 1) != i; ++j)
            {
                if (std::cmp_greater(*j, *(j + 1)))
                {
                    std::iter_swap(j, j + 1);
                }
            }
        }
    }
}

#endif //SORT_INPLACE_BUBBLE_H
