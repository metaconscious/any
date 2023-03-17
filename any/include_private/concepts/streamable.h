//
// Created by user on 3/15/2023.
//

#ifndef CONCEPTS_STREAMABLE_H
#define CONCEPTS_STREAMABLE_H

#include <ostream>

namespace any
{
    template<typename T>
    concept streamable =
    requires(std::ostream& os, T value) {
        { os << value } -> std::convertible_to<std::ostream&>;
    };

    template<streamable T>
    struct is_streamable: std::true_type {};

    template<typename T>
    inline constexpr bool is_streamable_v = is_streamable<T>::value;
}

#endif //CONCEPTS_STREAMABLE_H
