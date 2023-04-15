#include <stdio.h>

void menu(void)
{
    printf("1-play 0-exit");
}
void test(void)
{
    do
    {
        int input = -1;
        menu();
        scanf("%d", input);
        switch(input)
        {
            case 1:
            break;
            case 0:
            return;
        }
    }   
    while(0);
}


int main(void)
{
    test();
    return 0;
}