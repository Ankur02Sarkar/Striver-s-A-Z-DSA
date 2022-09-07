#include <iostream>
using namespace std;
int main()
{
    int row = 5, i, j, k;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row - i; j++)
        {
            cout << " ";
        }
        for (k = 0; k < 2 * i + 1; k++)
        {
            cout << char(k + 65);
        }
        cout << "\n";
    }
    return 0;
}