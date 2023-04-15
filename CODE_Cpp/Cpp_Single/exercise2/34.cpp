#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cin >> n;
    const int N = n;
    int arr[N];
    int compar[N - 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i] > 0)
        {
            sum += arr[i];
        }
        else
        {
            sum = 0;
            continue;
        }
    }
    cout << sum;

    return 0;
}
// {

//     //int *arr = new int[N];
//    // int *compar = new int[N - 1];

//     // cout << arr[4];
//     for (int j = 0; j < (N - 1); j++)
//     {
//         compar[j] = arr[j] + arr[j + 1];
//     }
// // for (int i = 0; i < N - 1; i++)
// 1 2
// //         {
// //             cout << compar[i];
// //         }
//     for (int i = 0; i < sizeof(compar) / sizeof(compar[0]) - 1; i++)
//     {
//         for (int j = 0; j < sizeof(compar) / sizeof(compar[0]) - 1 - i; j++)
//         {
//             if (compar[j] > compar[j + 1])
//             {
//                 int temp = compar[j];
//                 compar[j] = compar[j + 1];
//                 compar[j + 1] = temp;
//             }
//         }
//     }
//     cout << compar[N - 2];
//     //  for (int i = 0; i < N - 1; i++)

//     //     {
//     //         cout << compar[i];
//     //     }
//        // cout << sizeof(compar) / sizeof(compar[0]) - 1;
//         // if(compar[N-3]>compar[0])
//         //     compar[N - 3] = compar[0];
//         // cout << compar[6];
//         // for (int i = 0; i < N - 1;i++)
//         //     {
//         //         max = compar[i] > compar[i + 1] ? compar[i] : compar[i + 1];
//         //     }
//         //     cout << max;
//         // delete[] compar;

//         // cout << compar[N-2];
//         // delete[] arr;
//         // arr = NULL;
//         // delete[] compar;
//         // compar = NULL;
//         return 0;
// }