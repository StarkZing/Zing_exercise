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
//     test_printf("Hello world.", sizeof("Hello world."));
// }



// int main(void)
// {
//     unsigned char i=0;
//     printf("%X,%X,%X,%X,", i, i-1, i+65535, i+65536);
// }



// 输出测试1
void printf_test1(unsigned char *MessageID)
{
    printf("2.1 0x%02X 0x%02X.\r\n", *MessageID, *(MessageID+1));

    printf("2.2 MessageID = 0x%04X.\r\n", *MessageID<<8|*(MessageID+1));

    printf("2.N MessageID = 0x%04X.\r\n", ((*MessageID)<<8)|(*(MessageID+1)));

    printf("\r\n");

}
void printf_test2(unsigned short *MessageID)
{
    printf("3.1 0x%02X 0x%02X.\r\n", *MessageID, *(MessageID+1));
    printf("3.2 0x%04X.\r\n", *MessageID);

    // printf("3.3 MessageID = 0x%04X.\r\n", *MessageID<<8|*(MessageID+1));

    // printf("3.N MessageID = 0x%04X.\r\n", ((*MessageID)<<8)|(*(MessageID+1)));
    
    printf("\r\n");
}
int main(void)
{
    unsigned char  buf1[2] = {0x12, 0x34};
    unsigned short buf2[1] = {0x5678};
    printf("\r\n");
    printf("1.1 buf1[0] = 0x%02X buf1[1] = 0x%02X.\r\n", buf1[0], buf1[1]);
    // printf("1.2 0x%04X.\r\n", buf2[0]);
    printf("\r\n");
    // printf_test1(buf1);
    // printf_test1((unsigned char*)buf2);
    printf_test2((unsigned short*)buf1);
    printf_test2(buf2);
}





















// 多文件编译
// gcc Exercise-1.c Exercise-1.1.c -o Exercise-1.exe
// 单文件编译
// gcc -g Exercise-2.c -o Exercise-2.exe