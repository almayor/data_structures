# data_structures

## Overview

* [Code documentation](https://almayor.github.io/data_structures/)
* This is a library of assorted polymorphic data structures and their associated algorithms, implemented in C.
* Each data structure can work with an extensible range of data types. Such polymorphism is achieved with the use of void pointers at the expense of limited loss of type safety.
* Each data structure is initialized with an immutable `t_type` structure, containing pointers to functions required to work with a datatype (e.g. copy, delete, compare, hash etc).
* The data structures implemented so far
	* dynamic array
	* doubly-linked list
	* minimum priority queue
	* maximum priority queue
	* queue
	* stack
	* hashmap
	* hashset
	* binary search tree
	* red-black tree
	* union-find
* The project (with the exception of tests) is consistent with the [Norme](docs/norme.en.pdf), the code standard accepted at *School 42*. In particular, this means that
	* no comments inline or inside functions
	* `for` loops and `switch` statements are forbidden
	* each function must be maximum 25 lines

## Usage and testing

* First, compile the library by running `make`, and include `data_structures.h` in your projects.
* You can run unit tests with `make test`

## Acknowledgements

This code is inspired by the examples presented in [both](https://www.coursera.org/learn/algorithms-part1) [parts](https://www.coursera.org/learn/algorithms-part2) of an online course on Algorithms by Robert Sedgewick and Kevin Wayne. I am very grateful to them for creating such a wonderful resource and making it freely available to all.