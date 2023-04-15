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
    int n, sum, k, count, j;
    sum = 0;
    count = 0;
    j = 0;
    cin >> n >> k;
    for (int i = n; i > 1; i--)
    {

        if (isprime(i))
        {
            count++;
        }
    }
    j = count < k ? count : k;
    count = 0;
    for (int i = n; i > 1; i--)
    {

        if (isprime(i))
        {
            count++;
            if (count < j + 1)
            {
                sum += i;
                cout << i;
            }
            if (count < j)
            {
                cout << "+";
            }
        }
    }
    cout << "=" << sum << endl;

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