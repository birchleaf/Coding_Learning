#include <iostream>
using namespace std;
int main()
{
    int fun(int x);
    int n, a;
    cin >> n;
    a = fun(n);
    cout << a << endl;
  
    return 0;
}
int fun(int x)
{
    if(x==0)
    {
        return 1;
    }
    if(x==1)
    {
        return 1;
    }
    return fun(x - 1) + fun(x - 2);
}