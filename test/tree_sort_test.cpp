#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark_all.hpp>

#include "tree_sort.h"

using namespace std;

TEST_CASE("In order sort")
{
    vector<int> v {1, 2, 3, 4, 5};
    treeSort(v);
    REQUIRE(v == vector<int> {1, 2, 3, 4, 5});
}

TEST_CASE("Reverse order sort")
{
    vector<int> v {5, 4, 3, 2, 1};
    treeSort(v);
    REQUIRE(v == vector<int> {1, 2, 3, 4, 5});
}

TEST_CASE("Empty sort")
{
    vector<int> v {};
    treeSort(v);
    REQUIRE(v == vector<int> {});
}
