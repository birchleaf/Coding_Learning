#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    double ave, max, min, temp = 0;
    ave = max = min = temp;
    int n;
    cin >> n;
    const int a = n;
    double arr[a];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++)
    {

        temp += arr[j];
    }
    ave = temp / n;
    for (int k = 0; k < n - 1; k++)
    {
        for (int m = 0; m < n - 1 - k; m++)
        {
            if (arr[m] > arr[m + 1])
            {

                int temp = arr[m];
                arr[m] = arr[m + 1];
                arr[m + 1] = temp;
            }
        }
    }
    max = arr[n - 1];
    min = arr[0];
    cout << "average = " << setiosflags(ios::fixed) << setprecision(2) << ave << endl;
    cout << "max = " << setiosflags(ios::fixed) << setprecision(2)  << max << endl;
    cout << "min = " << setiosflags(ios::fixed) << setprecision(2) << min << endl;
    system("pause");
    return 0;
}