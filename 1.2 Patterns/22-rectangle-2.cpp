#include <iostream>
using namespace std;
int main()
{
    int count = 4;
    for (int i = 1; i <= count; i++)
    {
        for (int j = count; j > count - i; j--)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= 2 * (count - i) - 1; j++)
        {
            cout << count - i + 1 << " ";
        }
        for (int j = count - i + 1; j <= count; j++)
        {
            if (j == 1)
                continue;
            cout << j << " ";
        }
        cout << "\n";
    }
    for (int i = count - 1; i > 0; i--)
    {
        for (int j = count; j > count - i; j--)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= 2 * (count - i) - 1; j++)
        {
            cout << count - i + 1 << " ";
        }
        for (int j = count - i + 1; j <= count; j++)
        {
            if (j == 1)
                continue;
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}