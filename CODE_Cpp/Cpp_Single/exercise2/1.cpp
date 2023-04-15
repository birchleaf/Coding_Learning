#include <iostream>
using namespace std;
int main()
{
    int m, n;
    int arr[10][10];
    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << n << " " << m << endl;
    for (int i = 0; i < n ; i++)
    {
        for (int j = m-1; j >=0 ; j--)
        {
            cout << arr[j][i]<<" ";
        }
        cout << endl;
    }
    cout << "姓名：陈厚源" << endl
         << "202212732";
    return 0;
}