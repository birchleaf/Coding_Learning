//#include <iostream>
#include <stdio.h>
#include <string>
#define FILE1 "filecopy.in.txt"
#define FILE2 "filecopy.out.txt"


using namespace std;
int main()
{
    FILE *f1,*f2;
    char buf[256];
   
   if((f1=fopen(FILE1,"r"))==NULL)
   {
        return -1;
   }
   if((f2=fopen(FILE1,"w"))==NULL)
   {
    return -1;
   }
   
   
   
    while(fgets (buf,256,f1))
    {
        fputs (buf,f2); 
    }
    fclose(f1);
    fclose(f2);
    return 0;
} 
