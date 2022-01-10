#include <stdio.h>

typedef void (*pFun)(void);

void testPrint(void)
{
    printf("I'm Ammar\n");
}

void func(pFun pToFunc, char *a, char *b, char *c)
{
    pToFunc();
    printf("%c %c %c\n", *a, *b, *c);
}

int main(void)
{
    char x = 'a';
    char *ptr = &x;
    func(testPrint, ptr, ptr, ptr);

    /* Simpler way */
    pFun ptestPrint = testPrint;
    ptestPrint();
    return 0;
}
