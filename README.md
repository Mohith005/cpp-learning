# C++ Learning

My C++ learning journey, with small programs and exercises covering language fundamentals, sorting algorithms, and mini projects. I use this repository to practise concepts, experiment with code, and track my progress.

## Topics covered

- Console input and output with `std::cin` and `std::cout`
- Variables, objects, assignment, and initialization
- Uninitialized variables and why they should be avoided
- Basic use of strings, vectors, loops, and arrays
- Bubble sort, insertion sort, and selection sort
- Formatted output with `std::print` and `std::println`
- Functions and declarations shared across multiple source files
- Random numbers, game logic, and building projects with CMake

## Repository structure

```text
cpp-learning/
├── 01_Basics/
│   ├── first_program.cpp
│   ├── input.cpp
│   ├── output.cpp
│   ├── uninitialised.cpp
│   └── var_obj.cpp
├── 02_Sorting_Algorithms/
│   ├── bubble_sort.cpp
│   ├── insertion_sort.cpp
│   └── selection_sort.cpp
├── 03_Mini_Projects/
│   └── Roulette/
│       ├── CMakeLists.txt
│       ├── functions.cpp
│       ├── random.cpp
│       ├── roulette.cpp
│       ├── shared.h
│       ├── spiel.cpp
│       └── README.md
└── README.md
```

The examples in `01_Basics` and `02_Sorting_Algorithms` are standalone programs with their own `main()` functions. Compile and run one file at a time. Roulette combines several source files into one executable using CMake.

## Build and run

My local setup uses Windows, Visual Studio Code, and GCC (`g++`) from MSYS2 UCRT64.

From the repository root, with `g++` available in your terminal:

```powershell
g++ -std=c++23 -Wall -Wextra -g 01_Basics/input.cpp -o input.exe
.\input.exe
```

To run a sorting example:

```powershell
g++ -std=c++23 -Wall -Wextra -g 02_Sorting_Algorithms/bubble_sort.cpp -o bubble_sort.exe
.\bubble_sort.exe
```

The sorting examples use `<print>` and require a compiler and standard library that support C++23 `std::print` and `std::println`.

### Roulette

[Roulette](03_Mini_Projects/Roulette/README.md) is a console game with German prompts, a starting balance of 10,000, and bets on a color, column, or individual number.

Build from the repository root with CMake and a compiler and standard library supporting C++23 `<print>`:

```sh
cmake -S 03_Mini_Projects/Roulette -B 03_Mini_Projects/Roulette/build
cmake --build 03_Mini_Projects/Roulette/build
```

Run in WSL/Linux:

```sh
./03_Mini_Projects/Roulette/build/roulette2
```

See the project README for Windows commands, game rules, and current limitations.

## Learning notes

These are practice programs that I will expand as I learn. `uninitialised.cpp` intentionally demonstrates reading an uninitialized variable, which has undefined behavior; its output is not reliable.

Compiled programs and local VS Code settings are excluded through `.gitignore`.
