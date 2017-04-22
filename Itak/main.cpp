#include <iostream>
#include <map>
#include <unordered_map>

int main() {
    std::map<std::string, std::map<int, int>> example;
    std::map<int, int> test;

    test.insert({0,0});
    example.insert({"124.12", test});

    for(std::pair<std::string, std::map<int, int>> e : example)
    {
        for(std::pair<int, int> f : test)
        std::cout << e.first << "::" << f.first << " " << f.second << std::endl;
    }


    return 0;
}

