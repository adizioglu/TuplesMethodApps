#include <iostream>
#include <string>
#include <tuple>

namespace ConsoleAppCs
{
    class Methods
    {
    public:
        static std::tuple<std::string, std::string> GetFullName()
        {
            std::string firstName;
            std::string lastName;

            std::cout << "What is your first name: ";
            std::getline(std::cin, firstName);

            std::cout << "What is your last name: ";
            std::getline(std::cin, lastName);

            return std::make_tuple(firstName, lastName);
        }
    };
}
