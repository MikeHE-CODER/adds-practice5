#include <iostream>
#include <vector>
#include <sstream>
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main()
{
    std::string line;
    std::getline(std::cin, line);
    std::stringstream ss(line);
    std::vector<int> list;
    int num;
    while (ss >> num)
    {
        list.push_back(num);
    }
    QuickSort sorter;
    list = sorter.sort(list);
    RecursiveBinarySearch searcher;
    bool found = searcher.search(list, 1);
    if (found)
    {
        std::cout << "true";
    }
    else
    {
        std::cout << "false";
    }
    for (int n : list)
    {
        std::cout << " " << n;
    }
    std::cout << std::endl;
}
