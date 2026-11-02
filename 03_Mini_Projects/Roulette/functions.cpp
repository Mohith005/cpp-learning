#include <iostream>
#include <print>
#include "shared.h"

void rot_schwarz(int random_num, int bet)
{
    char x{};
    bool loop{true};
    bool gewonnen{false};

    std::print("Rot oder Schwarz (r/s): ");
    std::cin >> x;

    while (loop)
    {
        switch (x)
        {
            case 'r':
            case 'R':
                for (int i = 2; i <= 36; i += 2)
                {
                    if (i == random_num)
                    {
                        gewonnen = true;
                        break;
                    }
                }
                loop = false;
                break;

            case 's':
            case 'S':
                for (int i = 1; i <= 36; i += 2)
                {
                    if (i == random_num)
                    {
                        gewonnen = true;
                        break;
                    }
                }
                loop = false;
                break;

            default:
            {
                std::println("Keine gueltige Eingabe. Bitte r/s eingeben:");
                std::cin >> x;
                continue;
            }
        }
    }

    if (gewonnen)
    {
        std::println("GEWONNEN!");
        balance += bet;
    }
    else
    {
        std::println("VERLOREN");
        balance -= bet;
    }
}


void spalte(int random_num, int bet)
{
    int s{};
    bool loop{true};
    bool gewonnen{false};

    std::print("Welche Spalte wahlen Sie: (1/2/3): ");
    std::cin >> s;

    while (loop)
    {
        switch (s)
        {
            case 1 :
                for (int i = 1; i <= 36; i += 3)
                {
                    if (i == random_num)
                    {
                        gewonnen = true;
                        break;
                    }
                }
                loop = false;
                break;

            case 2:
                for (int i = 2; i <= 36; i += 3)
                {
                    if (i == random_num)
                    {
                        gewonnen = true;
                        break;
                    }
                }
                loop = false;
                break;

            case 3 :
                for (int i = 3; i <= 36; i += 3)
                {
                    if (i == random_num)
                    {
                        gewonnen = true;
                        break;
                    }
                }
                loop = false;
                break;

            default:
            {
                std::println("Keine gueltige Eingabe. Bitte 1/2/3 eingeben:");
                std::cin >> s;
                continue;
            }
        }
    }

    if (gewonnen)
    {
        std::println("GEWONNEN!");
        balance += bet * 2;
    }
    else
    {
        std::println("VERLOREN");
        balance -= bet;
    }
}


void zahl(int random_num, int bet)
{
    int num{};
    std::print("Die Zahl, auf die sie wettet: ");
    std::cin >> num;

    while (!((num >= 0) && (num <= 36)))
    {
        std::print("Bitte eine Zahl zwischen 0 und 36 eingeben: ");
        std::cin >> num;
    }

    if (num == random_num)
    {
        std::println("GEWONNEN!");
        balance += bet*35;
    }

    else
    {
        std::println("VERLOREN");
        balance -= bet;
    }
}
