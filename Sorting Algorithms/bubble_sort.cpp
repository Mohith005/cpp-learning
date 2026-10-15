#include <iostream>
#include <print>

int main()
{
    int numbers[5]{5, 2, 8, 1, 4};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - 1 - i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
        std::print("{} ", numbers[i]);

    std::println();

    return 0;
}
