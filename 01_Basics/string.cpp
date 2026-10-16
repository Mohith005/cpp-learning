#include <iostream>
#include <print>
#include <string>

int main()
{
    std::print("Wie leuter ihr Name? ");
    std::string name{};
    std::cin >> name;
    std::println("Halle, {}!", name);
    return 0;
}
