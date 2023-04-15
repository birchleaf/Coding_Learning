#include <stdio.h>
#include <iostream>
void TimeOutput(int hour, int minute, double second);

int main()
{
    int h, m;
    double s;
    scanf("%d%d%lg", &h, &m, &s);
    TimeOutput(h, m, s);
    putchar('\n');
    getchar();
    return 0;
}
void TimeOutput(int hour, int minute, double second)
{
    int x, y;
    x = int(second * 10) / 10;
    y=int(second * 10) / x*10;
    if(hour<10)
    {
        printf("0");
        printf("%d", &hour);
        printf(":");
    }
    else
    {
        printf("%d",&hour);
        printf(":");
    }
    if(minute<10)
     {
        printf("0");
        printf("%d", &minute);
        printf(":");
    }
    else
    {
        printf("%d",&minute);
        printf(":");
    }
    if(x<10)
    {
        printf("0");
        printf("%d", &x);
        
    }
    else
    {
        printf("%d",&x);
       
    }
    if(hour<10)
    {
        
        printf("%d", &y);
        
    }
    else
    {
        printf("%d",&y);
       
    }
    






}