#include <iostream>
using namespace std;
int main()
{
    int k;
    char sex[7];
    float a1, a2;
    int a3, a4, a5;
    int sum;
    cin>>k;
    while (k--)
    {
        sum = 0;
        cin>>k;
        cin >> a1 >> a2 >> a3 >> a4 >> a5;
        if (a1 < 4.0 || a1 > 10.0)
            sum++;
        if (a2 < 3.5 || a2 > 5.5)
            sum++;
        if (sex[0] == 'f')
        {
            if (a3 < 110 || a3 > 150)
                sum++;
            if (a4 < 36 || a4 > 40)
                sum++;
        }
        else
         {
             if(a3<120 || a3>160) sum++;
             if(a4<42 || a4>48) sum++;
        }
         if(a5<100 || a5>300) sum++;
         if(sum==0) cout<<"normal"<<endl;
         else cout<<sum<<endl;
     }
     return 0;
 }

 