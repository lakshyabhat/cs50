#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    for(char c='A';c<='Z';c++)
    {
        printf("%c is %i\n",c,(int)c);
    }
}