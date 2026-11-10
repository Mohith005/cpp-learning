#include <iostream>
#include <string>
#include <print>

void caeser(std::string x, int m)
{
    int n{};
    for (int i = 0; i < x.size(); i++)
    {
        m %= 26;
        n = int(x.at(i)) + m;

        if (n > 122)
            n = 97 + ((n - 97) % 26);

        else if (n < 97)
            n = 122 - ((122 - n) % 26);

        x.at(i) = char(n);
    }
    std::println("\nDas verschlüsselte Wort lautet: {}", x);
}

int main()
{
    std::string s{};
    int m{};

    std::print("Geben Sie eine Zeichenkette ein, die verschlüsselt werden soll: ");
    std::cin >> s;
    std::print("Geben Sie ein Schlüssel ein: ");
    std::cin >> m;
    caeser(s, m);
}
