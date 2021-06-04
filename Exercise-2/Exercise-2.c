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



// // 输出测试1
// void printf_test1(unsigned char *MessageID)
// {
//     printf("2.1 0x%02X 0x%02X.\r\n", *MessageID, *(MessageID+1));

//     printf("2.2 MessageID = 0x%04X.\r\n", *MessageID<<8|*(MessageID+1));

//     printf("2.N MessageID = 0x%04X.\r\n", ((*MessageID)<<8)|(*(MessageID+1)));

//     printf("\r\n");

// }
// void printf_test2(unsigned short *MessageID)
// {
//     printf("3.1 0x%02X 0x%02X.\r\n", *MessageID, *(MessageID+1));
//     printf("3.2 0x%04X.\r\n", *MessageID);

//     // printf("3.3 MessageID = 0x%04X.\r\n", *MessageID<<8|*(MessageID+1));

//     // printf("3.N MessageID = 0x%04X.\r\n", ((*MessageID)<<8)|(*(MessageID+1)));
    
//     printf("\r\n");
// }
// int main(void)
// {
//     unsigned char  buf1[2] = {0x12, 0x34};
//     unsigned short buf2[1] = {0x5678};
//     printf("\r\n");
//     printf("1.1 buf1[0] = 0x%02X buf1[1] = 0x%02X.\r\n", buf1[0], buf1[1]);
//     // printf("1.2 0x%04X.\r\n", buf2[0]);
//     printf("\r\n");
//     // printf_test1(buf1);
//     // printf_test1((unsigned char*)buf2);
//     printf_test2((unsigned short*)buf1);
//     printf_test2(buf2);
// }


// 十进制转字符串测试
/*-------------------------------------[0001]------------------------------
 * function : decimal to string.
 * input var: nBits             need to change
 * outputvar: *outbuf           changed
 *            outbuflen         changed length
 * return	: 0 - Unsuccessful implementation
 * display	: This function is used to that decimal to string.
-------------------------------------------------------------------------*/
// unsigned char Decimal2STR(unsigned short nBits, unsigned char *outbuf)
// {
// 	unsigned char buf[8] = {0};
// 	unsigned short len = 0;
// 	if ( nBits < 10 )
// 	{
// 		outbuf[0] = nBits + 48;
// 		len = 2;
// 	}
// 	else if (( nBits > 10 ) && ( nBits < 100 ))
// 	{
// 		outbuf[0] = nBits%10 + 48;
// 		outbuf[1] = nBits/10 + 48;
// 		len = 3;
// 	}
// 	else if (( nBits > 100 ) && ( nBits < 1000 ))
// 	{
// 		outbuf[0] = (nBits%100)%10 + 48;
// 		outbuf[1] = (nBits%100)/10 + 48;
// 		outbuf[2] = nBits/100 + 48;
// 		len = 4;
// 	}
// 	else if (( nBits > 1000 ) && ( nBits < 10000 ))
// 	{
// 		outbuf[0] = ((nBits%1000)%100)%10 + 48;
// 		outbuf[1] = ((nBits%1000)%100)/10 + 48;
// 		outbuf[2] = (nBits%1000)/100 + 48;
// 		outbuf[3] = nBits/1000 + 48;
// 		len = 5;
// 	}
// 	else if (( nBits > 10000 ) && ( nBits < 100000 ))
// 	{
// 		outbuf[0] = (((nBits%10000)%1000)%100)%10 + 48;
// 		outbuf[1] = (((nBits%10000)%1000)%100)/10 + 48;
// 		outbuf[2] = ((nBits%10000)%1000)/100 + 48;
// 		outbuf[3] = (nBits%10000)/1000 + 48;
// 		outbuf[4] = nBits/10000 + 48;
// 		len = 6;
// 	}
// 	else
// 	{
// 		printf("Error.");
// 		len = 0xFFFF;
// 	}

// 	if(len != 0)
// 	{
// 		outbuf[len-1] = '\0';
// 	}

// 	return len;
// }

// void main()
// {
//     unsigned short prot[5] = {1, 22, 333, 4444, 55555};
//     char str[20] = {0};
//     unsigned char ret = 0;

// 	unsigned short prot = 11010;

// 	ret = Decimal2STR(prot[i], str);
// 	printf("port = %X, str = %s, len = %d.\r\n", prot[i], str, ret);

//     for (size_t i = 0; i < 5; i++)
//     {
//         ret = Decimal2STR(prot[i], str);
//         printf("port = %X, str = %s, len = %d.\r\n", prot[i], str, ret);
//     }
// }



// // 字符串测试2
// void main()
// {
// 	char tips[] = "IP is";
// 	char ip[] = "192.168.0.1";
// 	char str[100] = {0};
// 	int port = 8033;

// 	sprintf(str, "IP is %s:%d.", ip, port);
// 	printf("\r\n");
// 	printf("%s", str);
// 	printf("\r\n");
// }


// // 866 82-30-58-43-15-19
// // 866823058431519
// // 823058431519
// // 0123456789
// // 82 30 58 43 15 19
// // 0123456789
// // 82-30-58-43-15-19
// // 字符串测试3
// void main(void)
// {
// 	int ret = 0;
// 	int a;
// 	char testdatabuf[100] = "823058431519";
	
// 	printf("%x\r\n",testdatabuf[18]);

// 	// memcpy(testdatabuf+3, testdatabuf+2, 11);
// 	// testdatabuf[2] = '-';
// 	// memcpy(testdatabuf+6, testdatabuf+5, 9);
// 	// testdatabuf[5] = '-';
// 	// memcpy(testdatabuf+9, testdatabuf+8, 7);
// 	// testdatabuf[8] = '-';
// 	// memcpy(testdatabuf+12, testdatabuf+11, 5);
// 	// testdatabuf[11] = '-';
// 	// memcpy(testdatabuf+15, testdatabuf+14, 3);
// 	// testdatabuf[14] = '-';

// 	a = (strlen(testdatabuf)-1)/2;
// 	ret = strlen(testdatabuf);
// 	for (size_t i = 0; i < a; i++)
// 	{
// 		ret -= 2;
// 		memcpy(testdatabuf+3+3*i, testdatabuf+2+3*i, ret);
// 		testdatabuf[2+3*i] = '-';
// 	}

// 	printf("%s, %d\r\n",testdatabuf, strlen(testdatabuf));
// 	printf("%x\r\n",testdatabuf[18]);
// 	printf("%x\r\n",testdatabuf[19]);
// 	for (size_t i = 0; i < 100; i++)
// 	{
// 		printf("%c", testdatabuf[i]);
// 	}
// }

typedef struct
{
	unsigned char IMEI[15];
	unsigned char IMEI_LEN;
}HN_MAPService_Info_t;

void z_printf_struct_2(HN_MAPService_Info_t *val_2)
{
	printf("3 - [%s]\r\n", val_2->IMEI);
}
void z_printf_struct_1(HN_MAPService_Info_t *val_1)
{
	printf("2 - [%s]\r\n", val_1->IMEI);
	z_printf_struct_2(val_1);
}
// 地址传值
void main(void)
{
	HN_MAPService_Info_t hn_test_data;
	sprintf(hn_test_data.IMEI, "%s", "1234567890");
	printf("1 - [%s]\r\n", hn_test_data.IMEI);
	z_printf_struct_1(&hn_test_data);
}





// 多文件编译
// gcc Exercise-1.c Exercise-1.1.c -o Exercise-1.exe
// 单文件编译
// gcc -g Exercise-2.c -o Exercise-2.exe