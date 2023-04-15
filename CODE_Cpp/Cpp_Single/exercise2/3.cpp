#include <iostream> 
using namespace std;

int a[99999999]; 
int n ;
int b ;
 
int main()
{
	int n;
	
	cin>>n;
	
	for(int i =1;i<=n;++i)
	{
		cin>>a[i];
	}
    int b = 0;
    for(int i =1;i<=n;++i)
    {
        for(int j =i;j<=n;++j)
        {
        	
            int sum = 0;
  
            for(int k=i;k<=j;++k)
            {
                sum+=a[k];
            }
    
            b = max(b,sum);
        }

    }

    cout<<b<<endl;
    cout << "姓名：陈厚源" << endl
         << "202212732";
    return 0;
   
}