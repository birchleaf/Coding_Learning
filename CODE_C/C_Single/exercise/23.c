include <iostream>
using namespace std;
int main()
{
    double x,g;
    cin>>x;
    if(x<0)
    {
        g=3*x-2;
    }
    else if(x>=1)
    {
        g=2*x+10;
    }
    else
    {
        g=x+6;
    }
    cout<<"g="<<setiosflags(ios::fixed)<<setprecion(2)<<g<<endl;
    return 0;
}