

#include <iostream>
#include <iomanip>
using namespace std;   standard

class Student
{
   public:
    int StuID;                // 学号、姓名和3门课的成绩
    string name;
    int a;
    int b;
    int c;
    double A=Avarage(a,b,c);
    int d=sum( a,b,c);
    double Avarage(int a,int b,int c)
    {
        A=(a+b+c)/3.0;
        return A;

    }
    int sum(int a,int b,int c)
    {
        d=a+b+c;
        return d;
    }
};
int main()
{
   int N;
    cin>> N;
    double a;
    double b;
    double c;
   double *Avegra=new double[N];
   int *Sum=new int[N];
    Student* X=new Student [N];
    for(int i=0;i<N;i++)
    {
        cin>>X[i].StuID;
        cin>>X[i].name;
        cin>>X[i].a;
        cin>>X[i].b;
        cin>>X[i].c;
        a=X[i].a;
        b=X[i].b;
        c=X[i].c;
         X[i].Avarage(a,b,c);
         X[i].sum(a,b,c);
        Avegra[i]=X[i].Avarage(a,b,c);
        Sum[i]=X[i].sum(a,b,c);
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N-i-1;j++)
        {
            if(X[i].A>X[i+1].A)
            {
                Student temp;
                temp=X[i];
                X[i]=X[i+1];
                X[i+1]=temp;
            }
        }
    }

if(X[N-1].A==X[N-2].A)
{
     cout<<X[N-2].StuID<<" ";
    cout<<X[N-2].name<<" ";
     cout<<X[N-2].d<<" ";
     cout<<setiosflags(ios::fixed)<<setprecision(2)<<X[N-2].A<<" "<<endl;
    cout<<X[N-1].StuID<<" ";
    cout<<X[N-1].name<<" ";
     cout<<X[N-1].d<<" ";
     cout<<setiosflags(ios::fixed)<<setprecision(2)<<X[N-1].A<<" ";
    
}
else
{
    cout<<X[N-1].StuID<<" ";
    cout<<X[N-1].name<<" ";
     cout<<X[N-1].d<<" ";
     cout<<setiosflags(ios::fixed)<<setprecision(2)<<X[N-1].A<<" ";
    //cout<<
}
    cout<<"陈厚源"<<endl;
    cout<<"202212732";
    return 0;
}
