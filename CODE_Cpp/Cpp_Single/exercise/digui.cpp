#include <iostream>
using namespace std;

int akmmann(int x, int y)
{
    if (x == 0)
    {
        return y + 1;
    }
    else if (x > 0 && y == 0)
    {
        return akmmann(x - 1, 1);
    }
    else
    {
      
        return akmmann(x - 1, akmmann(x,y-1));
    }
}

int main()

{

    int m, n;
    cin >> m >> n;
    cout << akmmann(m, n) << endl;
    system("pause");
    return 0;
}
