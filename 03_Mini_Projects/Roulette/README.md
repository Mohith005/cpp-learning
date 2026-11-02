# Roulette

A C++ console Roulette exercise with German prompts. This project practises functions, shared declarations, random numbers, input validation, and building multiple source files with CMake.

## Playing

Start with a balance of 10,000. Choose `y` to play or `n` to leave, then select a mode:

| Mode | Choice | Net gain on a win |
| --- | --- | --- |
| `f` | Color: `r` for red or `s` for black | 1 times the wager |
| `s` | Column: 1, 2, or 3 | 2 times the wager |
| `z` | Single number: 0 through 36 | 35 times the wager |

A loss subtracts the wager. Wagers must be between 1 and the current balance. After each round, choose whether to continue; play ends when the balance reaches zero or you leave.

The current exercise uses a simplified color rule: even numbers from 2 to 36 are red, and odd numbers from 1 to 35 are black. Zero loses color and column bets, but can win a single-number bet. Columns contain 1/4/7/..., 2/5/8/..., and 3/6/9/..., respectively.

## Build and run

Requirements: CMake 3.10 or newer and a compiler and standard library supporting C++23 `<print>`, `std::print`, and `std::println`. The project was built successfully in WSL Ubuntu with GCC 15.2 and CMake 4.2.3.

From the repository root:

```sh
cmake -S 03_Mini_Projects/Roulette -B 03_Mini_Projects/Roulette/build
cmake --build 03_Mini_Projects/Roulette/build
```

In WSL/Linux:

```sh
./03_Mini_Projects/Roulette/build/roulette2
```

In Windows PowerShell with a single-configuration generator, such as Ninja or MinGW Makefiles:

```powershell
.\03_Mini_Projects\Roulette\build\roulette2.exe
```

With a multi-configuration generator, such as Visual Studio:

```powershell
cmake --build 03_Mini_Projects/Roulette/build --config Release
.\03_Mini_Projects\Roulette\build\Release\roulette2.exe
```

## Source files

- `roulette.cpp`: program entry point, starting balance, and repeat/exit prompts.
- `spiel.cpp`: mode selection and wager validation.
- `functions.cpp`: color, column, and single-number bets and payouts.
- `random.cpp`: random number generation from 0 through 36.
- `shared.h`: shared function declarations and the balance declaration.
- `CMakeLists.txt`: builds the four `.cpp` files into `roulette2`.

## Current limitations

- Failed input reads are not handled: letters in numeric fields or end-of-input can cause endless prompting.
- The balance uses `int` without overflow checks, so sufficiently large winnings can overflow.
- The program reports the result and balance but does not display the drawn number.

These are areas for future improvement in this learning exercise.
