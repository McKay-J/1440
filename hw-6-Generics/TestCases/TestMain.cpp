//
// Created by McKay Jensen on 4/5/2017.
//

#include <iostream>
#include <string>
#include "../Dictionary.h"

int main()
{

    int intKeys[5] = {0, 1, 2, 3, 4};
    int intValues[5] = {0, 1, 2, 3, 4};

    std::string strKeys[5] = {"one", "two", "three", "four", "five"};
    std::string strValues[5] = {"six", "seven", "eight", "nine", "ten"};

    Dictionary<std::string, int> testDictionary;
    Dictionary<int, std::string> testDictionary2(2);

    std::cout << "======= TESTING FOLDER =======" << std::endl;

    std::cout << "TEST GETCOUNT:: Expectation: 0" << std::endl;
    std::cout << "RESULT: "<< testDictionary.getCount() << std::endl;
    std::cout << std::endl;

    for(unsigned int i = 0; i < 5; i++)
    {
        testDictionary.add(strKeys[i], intValues[i]);
        testDictionary2.add(intKeys[i], strValues[i]);
    }


    std::cout << "TEST ADD & GET BY KEY// PART 1:: Expectation: one 0" << std::endl;
    std::cout << "RESULT: "<< testDictionary.getByKey("one")->getKey() << " " << testDictionary.getByKey("one")->getValue() << std::endl;
    std::cout << std::endl;

    std::cout << "TEST ADD & GET BY KEY// PART 2:: Expectation: 4 ten" << std::endl;
    std::cout << "RESULT: " << testDictionary2.getByKey(4)->getKey() << " " <<testDictionary2.getByKey(4)->getValue() << std::endl;
    std::cout << std::endl;

    std::cout << "TEST ADD & GET BY KEY// PART 3:: Expectation: Error, invaild key" << std::endl;
    std::cout << "RESULT: ";
    try{
        std::cout << testDictionary.getByKey("eighteen") << std::endl;
    }
    catch(Exception e)
    {
        std::cout << "Error, invalid key" << std::endl;
    }

    std::cout << "TEST GET BY INDEX// PART 1:: Expectation: one 0" << std::endl;
    std::cout << "RESULT: "<< testDictionary.getByIndex(0)->getKey() << " " << testDictionary.getByIndex(0)->getValue() << std::endl;
    std::cout << std::endl;

    std::cout << "TEST GET BY INDEX// PART 2:: Expectation: 4 ten" << std::endl;
    std::cout << "RESULT: "<< testDictionary2.getByIndex(4)->getKey() << " " << testDictionary2.getByIndex(4)->getValue() << std::endl;
    std::cout << std::endl;

    std::cout << "TEST GET BY INDEX// PART 3:: Expectation: Error, index out of bounds" << std::endl;
    std::cout << "RESULT: ";
    try{
        std::cout << testDictionary2.getByIndex(7) << std::endl;
    }
    catch(Exception e)
    {
        std::cout << "Error, index out of bounds" << std::endl;
    }

    testDictionary.removeByKey("three");
    std::cout << "TEST REMOVE BY KEY:: Expectation: four 3" << std::endl;
    std::cout << "RESULT: " << testDictionary.getByIndex(2)->getKey() << " " << testDictionary.getByIndex(2)->getValue() << std::endl;
    std::cout << std::endl;

    testDictionary.removeByIndex(2);
    std::cout << "TEST REMOVE BY KEY:: Expectation: five 4" << std::endl;
    std::cout << "RESULT: " << testDictionary.getByIndex(2)->getKey() << " " << testDictionary.getByIndex(2)->getValue() << std::endl;
    std::cout << std::endl;

    Dictionary<int, std::string> testDict3(testDictionary2);
    std::cout << "TEST COPY CONSTRUCTOR:: Expectation: 5" << std::endl;
    std::cout << "RESULT: " << testDict3.getCount() << std::endl;
    std::cout << std::endl;

    std::cout << "======= END OF TESTING  =======" << std::endl;

    return 0;
}