#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int sum(long a, long b, long c);
    int max(long a, long b, long c);
    int min(long a, long b, long c);
    double x, y, z, s, m, d;
    double ave;
    cin >> x >> y >> z;
    s = sum(x, y, z);
    m = max(x, y, z);
    d = min(x, y, z);

    ave = (x + y + z) / 3;
    cout << s << endl
         << m << endl
         << d << endl
         << setiosflags(ios::fixed) << setprecision(2) 
         << ave << endl;

    return 0;
    
}
int sum(long a, long b, long c)
{

    a += b + c;
    return (a);
}
int max(long a, long b, long c)
{
    a = a > b ? (a > c ? a : c) : (b > c ? b : c);
    return (a);
}
int min(long a, long b, long c)
{
    a = a > b ? (b > c ? c : b) : (a > c ? c : a);
    return (a);
}
