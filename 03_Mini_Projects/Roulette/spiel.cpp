#include <iostream>
#include <print>
#include "shared.h"

int einsatz()
{
    int bet{};

    std::print("\nIhren Einsatz: ");
    std::cin >> bet;

    while (bet <= 0 || bet > balance)
    {
        std::println("\nDer Einsatz muss zwischen 1 und {} liegen.", balance);
        std::print("Ihren Einsatz: ");
        std::cin >> bet;
    }

    return bet;
}

void spiel()
{
    char modi{};
    bool loop{true};

    while (loop)
    {
        std::println("\nWaehlen Sie einen Spielmodi:\n’f’ für eine Farbe (Rot oder Schwarz) \n’s’ für eine Spalte (1, 2, oder 3) \n’z’ für eine einzelne Zahl (0-36)");
        std::cin >> modi;

        switch (modi)
        {
        case 'f':
        case 'F':
        {
            int bet{einsatz()};
            const int random_num{getRandom(0, 36)};
            rot_schwarz(random_num, bet);
            loop = false;
            break;
        }

        case 's':
        case 'S':
        {
            int bet{einsatz()};
            const int random_num{getRandom(0, 36)};
            spalte(random_num, bet);
            loop = false;
            break;
        }

        case 'z':
        case 'Z':
        {
            int bet{einsatz()};
            const int random_num{getRandom(0, 36)};
            zahl(random_num, bet);
            loop = false;
            break;
        }

        default:
        {
            std::println("Keine gueltige Eingabe. Bitte f/s/z eingeben:\n");
            break;
        }
        }
    }

    std::println("Uebriges Vermoegen: {}", balance);
}
