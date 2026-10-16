# C++ Learning

My C++ learning journey, with small programs and exercises covering language fundamentals and sorting algorithms. I use this repository to practise concepts, experiment with code, and track my progress.

## Topics covered

- Console input and output with `std::cin` and `std::cout`
- Variables, objects, assignment, and initialization
- Uninitialized variables and why they should be avoided
- Basic use of strings, vectors, loops, and arrays
- Bubble sort, insertion sort, and selection sort
- Formatted output with `std::print` and `std::println`

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
└── README.md
```

Each `.cpp` file is a standalone program with its own `main()` function. Compile and run one file at a time.

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

## Learning notes

These are practice programs that I will expand as I learn. `uninitialised.cpp` intentionally demonstrates reading an uninitialized variable, which has undefined behavior; its output is not reliable.

Compiled programs and local VS Code settings are excluded through `.gitignore`.
