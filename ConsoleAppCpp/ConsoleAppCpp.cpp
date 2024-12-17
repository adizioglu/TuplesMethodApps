// ConsoleAppCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <tuple>
#include "Methods.h"

int main()
{
   
    std::tuple<std::string, std::string> fullName = ConsoleAppCs::Methods::GetFullName();
    auto [firstName, lastName;] = fullName;

    std::cout << "First Name: " << firstName << " Last Name: " << lastName << std::endl;

    return 0;
}
