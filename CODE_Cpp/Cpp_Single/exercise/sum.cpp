#include <iostream>
using namespace std;
int main()
{
    int a, b=1,c, count = 0, sum = 0;
    cin >> a;
    c = a;
    while (c / 10 != 0)
    {
        c /= 10;
        count++;
    }
    count++;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - 1-i; j++)
        {
           
            b *= 10;
        }
        
        sum += a / b;
        a = (a - a / b * b);
        b = 1;
        
    }
    cout << sum << endl;
  
}