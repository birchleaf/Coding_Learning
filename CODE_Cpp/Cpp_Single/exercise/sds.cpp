#include <iostream>
using namespace std;
int main()
{
    int a, b, count = 0, temp;
    int c = 1, d;
    int sum = 0;
    int *p = new int[5];

    cin >> a >> b;
    for (int i = a; i < b + 1; i++)
    {
        while (a != 0)
        {

            a /= 10;
            count++;
        }
        for (int j = 2; j <= count; j++)
        {
            c *= 10;
        }
        for (int k = count; k > -1; k--)
        {
            temp = i / c;
            i = i - temp * c;
            c = c / 10;
            p[k] = temp;
        }
        for (int y = count; y > -1; y--)
        {
            for (int l = count; l > 0; l--)
            {
                d = p[y] * 10;
            }
            sum += d;
        }
        delete[] p;
        i++;
        if (sum % 2 == 0)
        {
            cout << sum << endl;
        }
        else
        {
            i++;
        }
    }
}