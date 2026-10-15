#include <print>

int main()
{
    int num[5]{5, 2, 8, 1, 4};

    for (int i = 1; i < 5; i++)
    {
        int key = num[i];
        int j = i - 1;

        while (j >= 0 && num[j] > key)
        {
            num[j + 1] = num[j];
            j--;
        }
        num[j + 1] = key;
    }

    for (int i = 0; i < 5; i++)
        std::print("{} ", num[i]);
    std::println();

    return 0;
}
