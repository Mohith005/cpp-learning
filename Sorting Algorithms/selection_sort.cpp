#include <iostream>
#include <print>

int main()
{
    int num[5]{5, 2, 8, 1, 4};

    for (int i = 0; i < 5; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (num[minIndex] > num[j])
            {
                minIndex = j;
            }
        }

        if (minIndex != i)
        {
            int temp = num[i];
            num[i] = num[minIndex];
            num[minIndex] = temp;
        }
    }

    for (int i = 0; i < 5; i++)
        std::print("{} ", num[i]);
    std::println();

    return 0;
}
