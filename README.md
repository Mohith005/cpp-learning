# C++ Learning

I'm learning C++ one small program at a time. I started with exercises like reading a number from the terminal. Then I built a roulette game that needed several source files and a build of its own. I keep the early exercises here because I still go back to them when I need a quick reminder of how something works.

## What's in the repo

| Folder | What I'm practicing |
| --- | --- |
| [01_Basics](01_Basics/) | Console input and output, variables, initialization, and strings. |
| [02_Sorting_Algorithms](02_Sorting_Algorithms/) | Bubble sort, insertion sort, and selection sort. I can step through each one and see when it compares or moves an element. |
| [03_Mini_Projects](03_Mini_Projects/) | A terminal roulette game and a Caesar cipher exercise. |

## Mini projects

### Roulette

[Roulette](03_Mini_Projects/Roulette/) is a terminal game with German prompts. You start with a balance of 10,000 and can bet on a color, a column, or a single number.

This was a chance to practice splitting a program into files. I put the game loop, wager handling, payouts, and random draw in separate files, then used CMake to build them together. The input handling still has rough edges. A letter where the game expects a number can leave it stuck asking for input.

### Caesar cipher

In [the Caesar cipher exercise](03_Mini_Projects/CaeserChiffre/typecasting.cpp), I take a word and a shift from the terminal, then move each letter by that amount. The part I wanted to practice was converting between characters and integers. Try `xyz` with a shift of `3` and you'll see it wrap back to `abc`.

## Build and run

I use VS Code on Windows with GCC (`g++`) from MSYS2 UCRT64. For the sorting exercises and mini projects, you'll need a compiler and standard library with support for C++23 `<print>`. You'll also need CMake for Roulette.

### Run a standalone exercise

Open a terminal in the repository root. The basics and sorting exercises each have their own `main()`, so compile them one at a time. In PowerShell, try the input example first.

```powershell
g++ -std=c++23 -Wall -Wextra -g 01_Basics/input.cpp -o input.exe
.\input.exe
```

If you'd rather start with sorting, bubble sort prints `1 2 4 5 8` for the array in the example.

```powershell
g++ -std=c++23 -Wall -Wextra -g 02_Sorting_Algorithms/bubble_sort.cpp -o bubble_sort.exe
.\bubble_sort.exe
```

I included `uninitialised.cpp` to show what happens when you read an uninitialized variable. That's undefined behavior in C++, so the output is unpredictable.

### Build Roulette with CMake

Run these from the repository root.

```sh
cmake -S 03_Mini_Projects/Roulette -B 03_Mini_Projects/Roulette/build
cmake --build 03_Mini_Projects/Roulette/build --config Release
```

On Linux or WSL, run `./03_Mini_Projects/Roulette/build/roulette`. In PowerShell, run `.\03_Mini_Projects\Roulette\build\roulette.exe` if you built with Ninja or MinGW Makefiles. If you used the Visual Studio generator, run `.\03_Mini_Projects\Roulette\build\Release\roulette.exe`.

### Run the Caesar cipher

The cipher exercise is a single file. You can compile and run it directly in PowerShell.

```powershell
g++ -std=c++23 -Wall -Wextra -g 03_Mini_Projects/CaeserChiffre/typecasting.cpp -o caesar.exe
.\caesar.exe
```
