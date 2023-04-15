#include <iostream>
using namespace std;

int main()
{
    int n, k, a = 1, count = 0, sum = 0, l = 0;
    int arr[10];
    static int m = 0;
    cin >> n >> k;
    for (int i = n; i > 2; i--)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0) // not susu
            {
                a = 0;

                break;
            }
        }

        if (a != 0)
        {
            count++;
            arr[l] = i;
            l++;
        }

        a = 1;
    }
    count = count <= k ? count : k;
    for (int i = 0; i < count + 1; i++)
    {
        cout << arr[i];
        sum += arr[i];
        if (m < count - 1)
        {

            cout << "+";
            m++;
        }
    }
    // if (count < k + 1)
    // {

    //  cout << i;
    //  sum += i;

    cout << "=" << sum << endl;
    system("pause");
    return 0;
}