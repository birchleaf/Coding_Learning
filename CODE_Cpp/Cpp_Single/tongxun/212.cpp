#include <iostream>  
using namespace std;
int main()
{
    int N;
    cin>>N;
    int Count=2;
    for(int j=N;j>0;j--)
    {
        
        for(int i=0;i<Count;i++)
        {
            cout<<" ";
        }
        Count+=3;
        
        
        for(int i=0;i<j;i++)
            {
             cout<<i+1;
             if(i==j-1)
             {
               break;
             } 
             cout<<"  ";
            }
        
        
        
        if(j!=1)
        {
            cout<<endl;
        }
        
    
    
    }
    
    
    
    return 0;
}