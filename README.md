# Lab 32: Tree Sort

The Standard Template Library (STL) provides a container class called [map](https://en.cppreference.com/w/cpp/container/map). It associates a set of unique keys with a set of values.

Assuming that `std::map` is implemented as a red-black tree, design and implement a function `treeSort` that sorts a vector of elements. It must use the public `std::map` interface only and must run in `O(n log n)` time.

Note that `map` stores key-value pairs and `vector` stores elements of a single type, so you will have to waste some space or throw away data in order to convert one type to the other.

Be sure the provided unit tests pass, and be prepared to explain why your function runs in `O(n log n)` time.
