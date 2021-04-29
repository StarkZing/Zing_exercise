#include "Exercise-2.h"

// int main(void)
// {
//     printf("11111");
// }


// #define TEST_BUFF "Hello world."

// void test_printf(char *buf, unsigned int buflen)
// {
//     printf("(%s)--->Length=%d(have a '\\0')", buf, buflen);
// }

// int main(void)
// {
//     test_printf(TEST_BUFF, sizeof(TEST_BUFF));
// }


int main(void)
{
    unsigned char i=0;
    printf("%X,%X,%X,%X,", i, i-1, i+65535, i+65536);
}








// 多文件编译
// gcc Exercise-1.c Exercise-1.1.c -o Exercise-1.exe
// 单文件编译
// gcc -g Exercise-2.c -o Exercise-2.exe