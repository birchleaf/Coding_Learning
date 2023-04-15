#include <iostream>
using namespace std;

bool isprime(int n)
{

    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i <= n / i; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    // for (int i = 2; i < n + 1; i++)
    //{

    // if (isprime(i))
    //{

    cout << isprime(n) << endl;
    cout << "姓名：陈厚源" << endl
         << "202212732";
    system("pause");

    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, k, a = 1;
//     ;
//     cin >> n >> k;
//     for (int i = 2; i < n + 1; i++)
//     {
//         for (int j = 2; j < i; j++)
//         {
//             if (i % j == 0) // not susu
//             {
//                 a = 0;

//                 break;
//             }
//         }

//         if (a != 0)
//         {

//             cout << i << "+" << endl;
//         }
//         a = 1;
//     }

//     system("pause");
//     return 0;
// }
