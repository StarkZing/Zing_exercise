/*
 * @Author: HarryZing 
 * @Date: 2021-03-14 15:06:47 
 * @Last Modified by: HarryZing
 * @Last Modified time: 2021-03-14 15:23:08
 */
#include "Exercise-1.h"

// int main()       // 输入输出测试
// {
//     int n;
//     printf("This is a test file!\r\nInput a number: ");
//     scanf("%d",&n);
//     printf("The number is %d",n);
//     return 0;
// }

// int main()       // 文件写入测试
// {
//    FILE *fp = NULL;
//    fp = fopen("D:/Private/573558067@qq.com/test1.txt", "w+");
//    fprintf(fp, "This is testing for fprintf...\n");
//    fputs("This is testing for fputs...\n", fp);
//    fclose(fp);
// }

// int main()       // 文件读测试
// {
//     FILE *fp = NULL;
//     char buff[255];
//     fp = fopen("D:/Private/573558067@qq.com/test1.txt", "r");
//     fscanf(fp, "%s", buff);         // 遇到空格停止读
//     printf("1: %s\n", buff );
//     fseek(fp, 0, SEEK_SET);         // 重置到文件头
//     fgets(buff, 255, (FILE*)fp);    // 继续上一次读，直到行尾
//     printf("2: %s\n", buff );       
//     fgets(buff, 255, (FILE*)fp);    // 继续上一次读，直到行尾
//     printf("3: %s\n", buff );
//     fclose(fp);
//     return 0;
// }

// int main()       // 文件读测试
// {
//     FILE *stream;
//     FILE *fp = NULL;
//     char buff[255];
//     fp = fopen("D:/Private/573558067@qq.com/test1.txt", "r");
//     char msg[] = "this is a test";
//     char buf[20];
//     if((stream = fopen("DUMMY.FIL","w+"))==NULL)
//     {
//         fprintf(stderr,"Can not open output file.\n");
//         return 0;
//     }
//     /*write some data to the file*/
//     fwrite(msg,1,strlen(msg)+1,stream);
//     /*sizeof（char）=1 seek to the beginning of the file*/
//     fseek(stream,0,SEEK_SET);
//     /*read the data and display it*/
//     fread(buf,1,strlen(msg)+1,stream);
//     printf("%s\n",buf);
//     fclose(stream);
//     return 0;
// }

// int main()     // 动态内存分配地址测试
// {
//    char name[50];
//    char *description;
//    strcpy(name, "Zara Ali");
//    printf("*name address = 0x%p.\n", name);
//    printf("Description address = 0x%p.\n", description);
//    /* 动态分配内存 */
//    description = (char *)malloc( 50 * sizeof(char) );
//    if( description == NULL )     // 若指针为空，报错（此时已指向一个未被分配空间？）
//       fprintf(stderr, "Error - unable to allocate required memory\n");
//    else     // 若指针不为空，复制字符串到指针头中
//       strcpy( description, "Zara ali a DPS student in class 10th");
//    printf("Name = %s.\n", name );
//    printf("Description: %s.\n", description );
//    printf("*name address = 0x%p.\n", name);
//    printf("Description address = 0x%p.\n", description);
// }

// int main()     // 动态内存分配内容测试
// {
//    char name[50];
//    char *description;
//    strcpy(name, "Zara Ali");
//    /* 动态分配内存 */
//    description = (char *)malloc( 30 * sizeof(char) );
//    printf("Description address = 0x%p.\n", description);
//    if( description == NULL )
//    {
//       fprintf(stderr, "Error - unable to allocate required memory\n");
//    }
//    else
//    {
//       strcpy( description, "Zara ali a DPS student.");
//    }
//    /* 假设您想要存储更大的描述信息 */
//    description = (char *) realloc( description, 100 * sizeof(char) );
//    printf("Description address = 0x%p.\n", description);
//    if( description == NULL )
//    {
//       fprintf(stderr, "Error - unable to allocate required memory\n");
//    }
//    else
//    {
//       strcat( description, "She is in class 10th");
//    }
//    printf("Name = %s\n", name );
//    printf("Description: %s\n", description );
//    printf("Description address = 0x%p.\n", description);
//    /* 使用 free() 函数释放内存 */
//    free(description);
//    printf("Description: %s\n", description );
//    printf("Description address = 0x%p.\n", description);
// }

// int main()     // 动态内存分配内容测试
// {
//     typedef struct 
//     {
//         char abc;
//     }QL_HTTP_CLIENT_T;
//     QL_HTTP_CLIENT_T asd;
// }

// void testFunc(void){     // 宏定义输出测试
//     printf("File = %s\nLine = %d\nFunc=%s\nDate=%s\nTime=%s\n", 
//         __FILE__, __LINE__, __FUNCTION__, __DATE__, __TIME__);
// }
// int main(int argc, char* argv[])
// {
//     testFunc();
//     getchar();
// }

// int main()       // 移位测试1
// {
//     unsigned char message[10] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x00};
//     unsigned short messageid = 0;
//     messageid = message[0]<<8|message[1];
//     printf("0x%04X", messageid);
// }

// int main()       // 移位测试2
// {
//     FILE *fp = NULL;
//     unsigned short messageid = 0xFF;
//     unsigned short buf_byte[2] = { 0 };				// 获取2个unShort数据
//     printf("sizeof(buf_byte[0]) = %d.\r\n",sizeof(buf_byte[0]));
//     fp = fopen("D:/Private/573558067@qq.com/test2.bin", "rb");
//     fread(buf_byte, sizeof(buf_byte[0]), sizeof(buf_byte), fp);//将4位数据取出
//     printf("0x%x  ", buf_byte[0]);
//     buf_byte[0] = (buf_byte[0] << 8) | (buf_byte[0] >> 8);
//     printf("0x%x.\r\n", buf_byte[0]);
//     fclose(fp);
// }

// int main()       // 移位测试3
// {
//     FILE *fp = NULL;
//     unsigned short messageid = 0xFF;
//     unsigned short tst_byte[3] = { 0x31, 0x32, 0x33 };      // 待写入的数据
//     unsigned short buf_byte[3] = { 0 };				        // 获取2个unShort数据
//     printf("sizeof(tst_byte[0]) = %d.\r\n",sizeof(tst_byte[0]));
//     printf("sizeof(tst_byte) = %d.\r\n",sizeof(tst_byte));
//     fp = fopen("D:/Private/573558067@qq.com/test3.bin", "wb");
//     fwrite(tst_byte, 2, 2, fp); // 2byte * 2个字符
//     fclose(fp);
// }

Yi YiInfo;
Yi *YiInfo_pr = &YiInfo;
// int main()      // 多文件结构体测试
// {
//     YiInfo.Age = 24;
//     YiInfo.Num = 1;
//     YiInfo.Yi_info_pro.f_age = 50;
//     printf("YiInfo.Yi_info_pro.f_age = %d. \r\n", YiInfo.Yi_info_pro.f_age);
//     printf("YiInfo.Yi_info_pro.f_age = %d. \r\n", YiInfo_pr->Yi_info_pro);
//     printf("YiInfo.Age = %d, YiInfo.Num = %d. \r\n", YiInfo.Age, YiInfo.Num);
//     printf("111111111111111111111. \r\n");
//     Printf_info();
// }

// int main()       // 移位测试
// {
//     u8  translatebuf[4] = {0x00, 0x00, 0x00, 0x64};
//     u32 u32_buf[4];
//     u32_buf[0] = translatebuf[0] << 24 | translatebuf[1] << 16;
//     u32_buf[0] = translatebuf[2] << 8  | translatebuf[3]  | u32_buf[0];
//     printf("u32_buf[0] = %d. \r\n", u32_buf[0]);
// }

// int main()         // memcpy测试
// {
//     u8 t1[6] = {0x01, 0x02, 0x03, 0x04, 0x05, 06};
//     for(int i = 0; i<6; i++)
//         printf("0x%02x ", t1[i]);
//     printf("\r\n");
//     memcpy(t1, t1+3, 2);
//     for(int i = 0; i<6; i++)
//         printf("0x%02x ", t1[i]);
    
//     // printf("0x%02x 0x%02x 0x%02x 0x%02x 0x%02x", t1[0], t1[1], t1[2], t1[3], t1[4]);
// }

// int main()         // 转义测试
// {
//     typedef struct ql_buff_var						
//     {
//         unsigned char service_comm_info[2048];		// 消息缓存
//         unsigned char info_len;						// 消息长
//     }ql_buff_var_info;

//     ql_buff_var_info hn_service_infomation;			// 消息信息
//     ql_buff_var_info *hn_message_info = &hn_service_infomation;

//     hn_message_info->info_len = 5;
//     hn_service_infomation.service_comm_info[0] = 0x7e;
//     hn_service_infomation.service_comm_info[1] = 0x7d;
//     hn_service_infomation.service_comm_info[2] = 0x01;
//     hn_service_infomation.service_comm_info[3] = 0x7d;
//     hn_service_infomation.service_comm_info[4] = 0x02;


// 	for (unsigned short i = 1, j=1; i < (hn_message_info->info_len - 1); i++,j++)		// 转义全转回
// 	{
// 		if (hn_message_info->service_comm_info[i] == 0x7d)								// 是否被转义
// 		{
// 			if (hn_message_info->service_comm_info[i + 1] == 0x01)
// 			{
// 				hn_message_info->service_comm_info[j] = 0x7d;
// 				i++;
// 			}
// 			else if (hn_message_info->service_comm_info[i + 1] == 0x02)
// 			{
// 				hn_message_info->service_comm_info[j] = 0x7e;
// 				i++;
// 			}
// 		}
// 		else
// 		{
// 			hn_message_info->service_comm_info[j] = hn_message_info->service_comm_info[i];
// 		}
//         printf("%d-0x%02x ", j, hn_message_info->service_comm_info[j]);
// 	}
//     printf("\r\n");
//     printf("0x%02x 0x%02x 0x%02x 0x%02x 0x%02x",    hn_service_infomation.service_comm_info[0],
//                                                     hn_service_infomation.service_comm_info[1],
//                                                     hn_service_infomation.service_comm_info[2],
//                                                     hn_service_infomation.service_comm_info[3],
//                                                     hn_service_infomation.service_comm_info[4],
//                                                     hn_message_info->service_comm_info[0]);
// }

int main()
{
    unsigned char test1[20] = { 0x38, 0x39};
    unsigned char test2[20] = {0};
    test2[0] = (test1[0]<<4) | (test1[1]&0x0F);
    printf("test2[0] = 0x%X", test2[0]);
}

// 多文件编译
// gcc Exercise-1.c Exercise-1.1.c -o Exercise-1.exe
// 单文件编译
// gcc -g Exercise-1.c -o Exercise-1.exe