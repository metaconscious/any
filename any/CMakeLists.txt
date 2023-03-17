include_directories(include)

set(PUBLIC_SRC
        include/any/numeric.h
        include/any/concepts.h
        include/any/ostream.h
        include/any/ranges.h
        include/any/algorithm.h
        include/any/iterator.h)

add_library(any INTERFACE ${PUBLIC_SRC})
target_include_directories(any INTERFACE include)
target_include_directories(any INTERFACE include_private)
