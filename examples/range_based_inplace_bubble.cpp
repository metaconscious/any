#include <algorithm>
#include <iostream>
#include <random>
#include <vector>
#include "any/numeric.h"
#include "any/ostream.h"
#include "any/ranges.h"

int main()
{
    constexpr std::size_t length{ 10 };
    std::vector<int> v(length);
    constexpr int start_from{ 0 };
    any::ranges::iota(v, start_from);

    std::random_device r;
    std::seed_seq seeds{ r(), r(), r(), r(), r(), r() };
    std::mt19937 mersenneTwister{ seeds };

    std::ranges::shuffle(v, mersenneTwister);

    using namespace any::ios;
    std::cout << v << '\n';
    any::ranges::inplace_bubble(v);
    std::cout << v << '\n';

    return 0;
}
