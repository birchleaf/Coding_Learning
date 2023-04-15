#include <iostream>
using namespace std;

int isprime(int i)
{

    if (i < 2)
    {
        return 1;
    }
    for (int j = 2; j <= i / 2; j++)
    {
        if (i % j == 0)
            return 0;
    }
    return 1;
}
int main()
{

    for (int i = 2; i < 101; i++)
    {
        if(isprime(i))  
        {
            cout << i << " ";
        }
    }
    cout << "姓名：陈厚源" << endl
         << "202212732";

    return 0;
}