#include <stdio.h>
void inv(int *x, int n);
int main()
{
    void inv(int *x, int n);
    int i, a[10] = {3, 7, 9, 11, 0, 6, 7, 5, 4, 2};
    printf("The original array:\n");
    for (i = 0; i < 10; i++)
        printf("%3d", a[i]);
    printf("\n");
    inv(a, 10);
    printf("The array has been inverted:\n");
    for (i = 0; i < 10; i++)
        printf("%3d", a[i]);
    printf("\n");
    return 0;
}

void inv(int *x, int n)
{
    for(int i=0;i<n/2;i++)
    {
        int temp=x[n-1-i];
        x[n-1-i]=x[i];
        x[i]=temp;
    }

}
