#include<stdio.h>
#include<stdlib.h>
int main()
{
    char w;
    scanf("%c",&w);
    if(isalpha(w))
{
    if(w=='a'||w=='A'||w=='e'||w=='E'||w=='i'||w=='I'||w=='o'||w=='O'||w=='u'||w=='U')
    {
        printf("Vowel");
    }
    else
    {
        printf("consonant");
    }
}
    else
    {
        printf("invalid");
    }
    return 0;
}


