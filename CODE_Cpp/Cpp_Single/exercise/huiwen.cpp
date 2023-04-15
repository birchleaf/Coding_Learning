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

    system("pause");
    return 0;
}

int loop(int x)
{
    if (x < 0 || (x % 10 == 0 && x != 0))
        return 0;
    int c = x;
    int d = 0; //反转之后的结果，反转之后可能结果大于4个字节，即用long long存储
    while (x != 0)
    {
        d = d * 10 + (x % 10);
        x /= 10;
    }
    return d == c ? 1 : 0;
}










for(x==1;x<10000;x+1)
{
    y==0;
    y+1;

}
