#include <string.h>
#include <stdio.h>

char testString[] =  "Hello World!8)                                                                                         ";

void TrimRight(char *s)
{
    int arraylength = strlen(s);
    while (arraylength > 0 && s[arraylength - 1] == ' ')
    {
        s[arraylength - 1] = '\0';
        arraylength--;
    }
}

int main()
{
    printf("Before trimming: '%s'\n", testString);
    TrimRight(testString);
    printf("After trimming: '%s'\n", testString);
    return 0;
}
