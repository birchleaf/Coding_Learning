#include <iostream>
using namespace std;
int main()
{
    int fun(int x);
    int n, a;
    cin >> n;
    a = fun(n);
    cout << a << endl;
    cout<<"姓名：陈厚源"<<endl<<"202212732";
    system("pause");
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
