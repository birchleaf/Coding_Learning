#include <iostream>
using namespace std;

int main()
{
    int loop(int x);
    int a, b;
    cin >> a >> b;
    for (int i = a; i < b + 1; i++)
    {

        if (loop(i) == 1)
        {
            if (i % 2 == 0)
            {
                cout << i << endl;
            }
        }
    }

    cout << "姓名：陈厚源" << endl
         << "202212732";
    system("pause");
    return 0;
}

int loop(int x)
{
    if (x < 0 || (x % 10 == 0 && x != 0))
        return 0;
    int c = x;
    int d = 0; 
    while (x != 0)
    {
        d = d * 10 + (x % 10);
        x /= 10;
    }
    return d == c ? 1 : 0;
}
