//
// Created by user on 3/17/2023.
//

#ifndef ITERATOR_H
#define ITERATOR_H

#include <concepts>

namespace any
{
    template<typename T>
    concept iterator =
    requires(T iter) {
        { *iter } -> std::same_as<typename T::value_type>;
        { ++iter } -> std::same_as<T>;
        std::equality_comparable<T>;
    };

    template<typename T>
    using iter_value_t = typename std::remove_cvref_t<T>::value_type;
}

#endif //ITERATOR_H
