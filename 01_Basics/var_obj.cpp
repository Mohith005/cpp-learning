#include <iostream> // for std::cout

int main()
{
    // OBJECTS
    std::cout << 5;       // print the literal number `5`
    std::cout << -6.7;    // print the literal number `-6.7`
    std::cout << 'H';     // print the literal character `H`
    std::cout << "Hello"; // print the literal text `Hello`

    // VARIABLES
    double width;       // definition of variable width, of type double
    width = 5;          // assignment of value 5 into variable width
    std::cout << width; // print the value of variable width
    width = 7;          // change value stored in variable width to 7
    std::cout << width; // prints 7

    int x{10};      // definevariable x and initialise with value 10
    std::cout << x; // print the value of variable x

    [[maybe_unused]] int y; // Don't complain if variable y is unused

    // TYPES OF INITIALISATION
    [[maybe_unused]] int a;       // default-initialization
    [[maybe_unused]] int b = 5;   // copy-initialization
    [[maybe_unused]] int e = {6}; // copy-list-initialization
    [[maybe_unused]] int c(7);    // direct-initialization
    [[maybe_unused]] int d{8};    // direct-list-initialization
    [[maybe_unused]] int f{};     // value-initialization

    return 0;
}
