#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s;
    scanf("%c",&s);
    if(isalpha(s))
    {
        printf("Alphabet");
    }
    else
    {
        printf("No");
    }
    return 0;
}
