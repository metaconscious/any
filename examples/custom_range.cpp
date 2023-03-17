//
// Created by user on 3/17/2023.
//


#include "any/ranges.h"
#include "any/iterator.h"
#include "any/ostream.h"
#include <vector>
#include <iostream>


int main()
{
    std::vector v{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    using namespace any::ios;
    std::cout << v << '\n';
}
