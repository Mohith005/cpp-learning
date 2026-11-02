#include <iostream>
#include <print>
#include "shared.h"

int balance{10000};

int main()
{
    std::println("=========================================================");
    std::println("Herzlich Willkommen zum Roulette!");
    std::println("Ihr Startvermoegen: {} Euro", balance);
    std::println("=========================================================");

    char yes_no{};
    bool loop{true};

    std::println("\nMochten sie das Spiel beginen? (y/n): ");
    std::cin >> yes_no;

    while (loop)
    {
        switch (yes_no)
        {
            case 'y':
            case 'Y':
                spiel();
                loop = false;
                break;

            case 'n':
            case 'N':
                std::println("\nVielen Dank fuer Ihren Besuch!");
                std::println("Ihr Endvermoegen: {} Euro", balance);
                return 0;

            default:
            {
                std::println("Keine gueltige Eingabe. Bitte y/n eingeben:");
                std::cin >> yes_no;
                continue;
            }
        }
    }

    while (balance > 0)
    {
        std::println("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        std::print("Mochten Sie weiter spielen? (y/n):");
        std::cin >> yes_no;

        switch (yes_no)
        {
            case 'y':
            case 'Y':
                std::println("\nViel Glueck fuer die naechste Runde!");
                spiel();
                break;

            case 'n':
            case 'N':
                std::println("\n=========================================================");
                std::println("Ihr Endvermoegen: {} Euro", balance);
                std::println("Vielen Dank fuers Spielen. Auf Wiedersehen!");
                std::println("=========================================================");
                return 0;

            default:
            {
                std::println("Keine gueltige Eingabe. Bitte y/n eingeben:");
                break;
            }
        }
    }

    std::println("\n=========================================================");
    std::println("Ihr Guthaben ist aufgebraucht.");
    std::println("Ihr Endvermoegen: {} Euro", balance);
    std::println("Vielen Dank fuers Spielen. Auf Wiedersehen!");
    std::println("===========================================================");

    return 0;
}
