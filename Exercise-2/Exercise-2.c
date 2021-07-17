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



// 866823058479948
// 823058479948
// 82-30-58-47-99-48

// // 866 82-30-58-43-15-19
// // 866823058431519
// //    823058431519
// // 0123456789
// // 82 30 58 43 15 19
// // 0123456789
// // 82-30-58-43-15-19
// // 字符串测试3
// void main(void)
// {
// 	unsigned char  IMEI_length = 0;					// 暂时保存IMEI长度
// 	unsigned char  MAC__length = 0;					// 暂时保存MAC地址长度
// 	int ret = 0;
// 	char buf[100] = "823058431519";
// 	printf("%x\r\n",buf[18]);
// 	// memcpy(buf+3, buf+2, 11);
// 	// buf[2] = '-';
// 	// memcpy(buf+6, buf+5, 9);
// 	// buf[5] = '-';
// 	// memcpy(buf+9, buf+8, 7);
// 	// buf[8] = '-';
// 	// memcpy(buf+12, buf+11, 5);
// 	// buf[11] = '-';
// 	// memcpy(buf+15, buf+14, 3);
// 	// buf[14] = '-';
// 	IMEI_length = (strlen(buf)-1)/2;
// 	MAC__length = strlen(buf);
// 	for (size_t i = 0; i < IMEI_length; i++)
// 	{
// 		MAC__length -= 2;
// 		memcpy(buf+3+3*i, buf+2+3*i, MAC__length);
// 		buf[2+3*i] = '-';
// 	}
// 	printf("%s, %d(17 is normal)\r\n", buf, strlen(buf));
// 	printf("%x, %x\r\n", buf[18], buf[19]);
// 	for (size_t i = 0; i < 100; i++)
// 	{
// 		printf("%c", buf[i]);
// 	}
// 	printf("\r\n");
// 	printf("%s", buf);
// }



// /***********************************************************************
//  * function   : IMEI_to_bluetooth_MAC
//  * input var  : *inpbuf           -- Read in data first address
//  * outputvar  : *outbuf           -- Read out data first address
//  * return	  : Read out data length. 0xFF-Error.
//  * description: IMEI to bluetooth MAC
//  * Tips       : 只适用于12个字节的ASCII码数字
// ************************************************************************/
// unsigned char IMEI_to_bluetooth_MAC_nor(unsigned char *inpbuf, unsigned char *outbuf)
// {
// 	unsigned char  ret = 0;
// 	unsigned char  IMEI_length = 0;					// 暂时保存IMEI长度
// 	unsigned char  MAC__length = 0;					// 暂时保存MAC地址长度
// 	if ( strlen(inpbuf) != 12 )
// 	{
// 		hn_tcp_exam_log("Error: IMEI length=[%d].", strlen(inpbuf));
// 		return 0xFF;
// 	}
// 	memset(outbuf, 0, 17);
// 	strcpy(outbuf, inpbuf);
// 	hn_tcp_exam_log("Array to be converted=[%s].", outbuf);
// 	IMEI_length = (strlen(outbuf)-1)/2;
// 	MAC__length = strlen(outbuf);
// 	for (size_t i = 0; i < IMEI_length; i++)
// 	{
// 		MAC__length -= 2;
// 		memcpy(outbuf+3+3*i, outbuf+2+3*i, MAC__length);
// 		outbuf[2+3*i] = '-';
// 	}
// 	// hn_tcp_exam_log("IMEI+3=[%s].", sevinfo->IMEI+3);
// 	hn_tcp_exam_log("Conversion complete array=[%s].", outbuf);
// 	if ( strlen(outbuf) == 17 )
// 	{
// 		return 17;
// 	}
// 	else
// 	{
// 		hn_tcp_exam_log("Error: strlen=[%d].", strlen(outbuf));
// 		return 0xFF;
// 	}
// }
// unsigned char IMEI_to_bluetooth_MAC_buf(unsigned char *inpbuf, unsigned char *outbuf)
// {
// 	unsigned char  ret = 0;
// 	unsigned char  IMEI_length = 0;					// 暂时保存IMEI长度
// 	unsigned char  MAC__length = 0;					// 暂时保存MAC地址长度
// 	unsigned char  buffer_1[20] = {0};
// 	unsigned char  buffer_2[20] = {0};
// 	if ( strlen(inpbuf) != 12 )
// 	{
// 		hn_tcp_exam_log("Error: IMEI length=[%d].", strlen(inpbuf));
// 		return 0xFF;
// 	}
// 	strcpy(buffer_1, inpbuf);
// 	hn_tcp_exam_log("Array to be converted=[%s].", buffer_1);
// 	IMEI_length = strlen(buffer_1)/2;
// 	MAC__length = strlen(buffer_1);
// 	hn_tcp_exam_log("%d", IMEI_length);
// 	for (size_t i = 0; i < IMEI_length; i++)
// 	{
// 		memcpy(buffer_2+3*i, buffer_1+2*i, 2);
// 		buffer_2[2+3*i] = '-';
// 	}
// 	// hn_tcp_exam_log("buffer_2=[%s].", buffer_2);
// 	memset(outbuf, 0, 17);
// 	memcpy(outbuf,buffer_2,17);
// 	hn_tcp_exam_log("Conversion complete array=[%s].", outbuf);
// 	if ( strlen(outbuf) == 17 )
// 	{
// 		return 17;
// 	}
// 	else
// 	{
// 		hn_tcp_exam_log("Error: strlen=[%d].", strlen(outbuf));
// 		return 0xFF;
// 	}
// }
// /***********************************************************************
//  * function   : OBU_MAC_to_str
//  * input var  : *inpbuf           -- Read in data first address
//  * outputvar  : *outbuf           -- Read out data first address
//  * return	  : Read out data length. 0xFF-Error.
//  * description: IMEI to bluetooth MAC
//  * Tips       : 只适用于将获取的BCD码的OBU MAC转换为对应的ASCII码字符串
//  *              例如：{0x01, 0x7B, 0xFF, 0xCC}; ---> "01-7B-FF-CC"
// ************************************************************************/
// unsigned char OBU_MAC_to_str(unsigned char *inpbuf, unsigned char *outbuf)
// {
// 	unsigned char  inplen = strlen(inpbuf);
// 	unsigned char  outlen = 0;
// 	unsigned char  inpbuffer[16];
// 	unsigned char  outbuffer[16];
// 	unsigned int  cer_buf = 0;
// 	memset(inpbuffer, 0, sizeof(inpbuffer));
// 	memset(outbuffer, 0, sizeof(outbuffer));
// 	memcpy(inpbuffer, inpbuf, inplen);
// 	hn_tcp_exam_log("inplen=[%d]", inplen);
// 	for (size_t i = 0; i < inplen; i++)
// 	{
// 		printf("%02X ", inpbuffer[i]);
// 	}
// 	printf("\r\n");
// 	for (size_t i = 0; i < inplen; i++)
// 	{
// 		cer_buf = inpbuffer[i];
// 		sprintf(outbuffer+(3*i), "%X", (unsigned char)(cer_buf>>4));
// 		sprintf(outbuffer+(3*i+1), "%X", (unsigned char)(cer_buf&0x0F));
// 		outbuffer[3*i+2] = '-';
// 	}
// 	outbuffer[3*inplen-1] = 0;
// 	// hn_tcp_exam_log("OBU MAC: [%s]", outbuffer);
// 	memcpy(outbuf, outbuffer, sizeof(outbuffer));
// 	hn_tcp_exam_log("OBU MAC: [%s]", outbuf);
// 	return strlen(outbuffer);
// }

// void main(void)
// {
// 	unsigned char  IMEI[16] = "866823058479948";
// 	unsigned char  OBU_buf[100] = {0x01, 0x7B, 0xFF, 0xCC};
// 	unsigned char  testbuf[20] = {0};
// 	// IMEI_to_bluetooth_MAC_buf(IMEI+3, testbuf);
// 	OBU_MAC_to_str(OBU_buf, OBU_buf);
// }

// typedef struct
// {
// 	unsigned char IMEI[15];
// 	unsigned char IMEI_LEN;
// }HN_MAPService_Info_t;
// void z_printf_struct_2(HN_MAPService_Info_t *val_2)
// {
// 	printf("3 - [%s]\r\n", val_2->IMEI);
// }
// void z_printf_struct_1(HN_MAPService_Info_t *val_1)
// {
// 	printf("2 - [%s]\r\n", val_1->IMEI);
// 	z_printf_struct_2(val_1);
// }
// // 地址传值
// void main(void)
// {
// 	HN_MAPService_Info_t hn_test_data;
// 	sprintf(hn_test_data.IMEI, "%s", "1234567890");
// 	printf("1 - [%s]\r\n", hn_test_data.IMEI);
// 	z_printf_struct_1(&hn_test_data);
// }



// 
// void main(void)
// {
// 	float Voltage = 2.73456;
// 	printf("%.2f\r\n", Voltage);
// }




#define setbit(var,bitt)            (var|=(0x01<<(bitt)))       // 第bitt位置1
#define clrbit(var,bitt)            (var&=~(0x01<<(bitt)))      // 第bitt位置0

#define the_bit_is_1(var,bitt)      ((var&(0x01<<(bitt)))>>(bitt))        // 这位是否为1
#define the_bit_is_0(var,bitt)      !(var&(0x01<<(bitt)))       // 这位是否为0
// define test
void main(void)
{
	unsigned char test_1 = 0;
	setbit(test_1,1);
	printf("test_1=%d\r\n", test_1);
	printf("the_bit_is_1(test_1,1)=%d  (1)\r\n", the_bit_is_1(test_1,1));
	printf("the_bit_is_0(test_1,1)=%d  (0)\r\n", the_bit_is_0(test_1,1));
	printf("the_bit_is_1(test_1,2)=%d  (0)\r\n", the_bit_is_1(test_1,2));
	printf("the_bit_is_0(test_1,2)=%d  (1)\r\n", the_bit_is_0(test_1,2));
}










// 多文件编译
// gcc Exercise-1.c Exercise-1.1.c -o Exercise-1.exe
// 单文件编译
// gcc -g Exercise-2.c -o Exercise-2.exe