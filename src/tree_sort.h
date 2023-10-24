#pragma once

#include <map>
#include <vector>

template <typename E>
void treeSort(std::vector<E>& v)
{
    std::map<E, E> map;

    for (const auto& e : v) {
        map[e] = e;
    }

    v.clear();

    for (const auto& pair : map) {
        v.push_back(pair.first);
    }
}
