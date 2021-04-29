//将文件中的id全部保存
unsigned char Parabufdatadeal2(unsigned char *inbuf,unsigned short datalen,TerminalConfig_t *Terminal)
{
	unsigned short Paralen = 0;		//当前数据长度
	unsigned int Paraid = 0;		//当前数据ID
	unsigned char number = 0;		//项数



	for (unsigned short i = 0; i < datalen; i++)		
	{
		Paraid = inbuf[i] << 24 | inbuf[1 + i] << 16 | inbuf[2 + i] << 8  | inbuf[3 + i];		
		Paralen = inbuf[4 + i] << 8 | inbuf[5 + i];
		printf("[%s-%d] paraid = %x\r\n", __FUNCTION__, __LINE__,Paraid);
		printf("[%s-%d] Paralen = %d\r\n", __FUNCTION__, __LINE__,Paralen);
		number++;
		
		if(Paraid == 0x00000001)
		{
			printf("Paraid == 0x00000001\r\n");
			Terminal->id_0001 = inbuf[i + 6] << 24 | inbuf[7 + i] << 16 | inbuf[8 + i] << 8  | inbuf[9 + i];
			i += 9;		//4+2+4
			printf("Terminal->id_0001 = %d\r\n",Terminal->id_0001);
		}
		else if (Paraid == 0x00000002)
		{
			Terminal->id_0002 = inbuf[i + 6] << 24 | inbuf[7 + i] << 16 | inbuf[8 + i] << 8  | inbuf[9 + i];
			i += 9;
			printf("Terminal->id_0002 = %d\r\n",Terminal->id_0002);
		}
		else if (Paraid == 0x00000003)
		{
			Terminal->id_0003 = inbuf[i + 6] << 24 | inbuf[7 + i] << 16 | inbuf[8 + i] << 8  | inbuf[9 + i];
			i += 9;
			printf("Terminal->id_0003 = %d\r\n",Terminal->id_0003);
		}
		else if (Paraid == 0x00000010)
		{
			memcpy(Terminal->id_0010,&inbuf[i+6],Paralen);
			i += 4+2;
			i+=(Paralen -1);
		}
		else if(Paraid == 0x00000011)
		{
			memcpy(Terminal->id_0011,&inbuf[i+6],Paralen);
			i += 4+2;
			i+=(Paralen -1);
		}
		else if(Paraid == 0x00000012)
		{
			memcpy(Terminal->id_0012,&inbuf[i+6],Paralen);
			i += 4+2;
			i+=(Paralen -1);
		}
		else if(Paraid == 0x00000014)
		{
			memcpy(Terminal->id_0014,&inbuf[i+6],Paralen);
			i += 4+2;
			i+=(Paralen -1);
		}
		else if(Paraid == 0x00000015)
		{
			memcpy(Terminal->id_0015,&inbuf[i+6],Paralen);
			i += 4+2;
			i+=(Paralen -1);
		}
		else if(Paraid == 0x00000016)
		{
			memcpy(Terminal->id_0016,&inbuf[i+6],Paralen);
			i += 4+2;
			i+=(Paralen -1);
		}
		else if(Paraid == 0x00000017)
		{
			memcpy(Terminal->id_0017,&inbuf[i+6],Paralen);
			i += 4+2;
			i+=(Paralen -1);
		}
		else if (Paraid == 0x00000020)
		{
			Terminal->id_0020 = inbuf[i + 6] << 24 | inbuf[7 + i] << 16 | inbuf[8 + i] << 8  | inbuf[9 + i];
			i += 9;
			//i += Paralen;
			
		}
		else if (Paraid == 0x00000021)
		{
			Terminal->id_0021 = inbuf[i + 6] << 24 | inbuf[7 + i] << 16 | inbuf[8 + i] << 8  | inbuf[9 + i];
			i += 9;
			//i += Paralen;
		}
		else if(Paraid == 0x00000023)
		{
			memcpy(Terminal->id_0023,&inbuf[i+6],Paralen);
			i += 4+2;
			i+=(Paralen -1);
		}
		else if(Paraid == 0x00000024)
		{
			memcpy(Terminal->id_0024,&inbuf[i+6],Paralen);
			i += 4+2;
			i+=(Paralen -1);
		}
		else if(Paraid == 0x00000025)
		{
			memcpy(Terminal->id_0025,&inbuf[i+6],Paralen);
			i += 4+2;
			i+=(Paralen -1);
		}
		else if(Paraid == 0x00000027)
		{
			Terminal->id_0027 = inbuf[i + 6] << 24 | inbuf[7 + i] << 16 | inbuf[8 + i] << 8  | inbuf[9 + i];
			i += 9;
		}
		else if (Paraid == 0x00000028)
		{
			Terminal->id_0028 = inbuf[i + 6] << 24 | inbuf[7 + i] << 16 | inbuf[8 + i] << 8  | inbuf[9 + i];
			i += 9;
			//i += Paralen;
			
		}
		else if (Paraid == 0x00000029)
		{
			Terminal->id_0029 = inbuf[i + 6] << 24 | inbuf[7 + i] << 16 | inbuf[8 + i] << 8  | inbuf[9 + i];
			i += 9;
			//i += Paralen;
		}
		else if (Paraid == 0x0000002c)
		{
			Terminal->id_002c = inbuf[i + 6] << 24 | inbuf[7 + i] << 16 | inbuf[8 + i] << 8  | inbuf[9 + i];
			i += 9;
			//i += Paralen;
		}
		else if (Paraid == 0x00000031)
		{
			Terminal->id_0031 = inbuf[7 + i] << 8  | inbuf[6 + i];
			i += 7;
			//i += Paralen;
		}
		else if (Paraid == 0x00000032)
		{
			Terminal->id_0032[0] = inbuf[i + 6];
			Terminal->id_0032[1] = inbuf[7 + i]; 
			Terminal->id_0032[2] = inbuf[i + 8];
			Terminal->id_0032[3] = inbuf[i + 9]; 
			i += 9;
			//i += Paralen;
		}
		else if (Paraid == 0x00000080)
		{
			Terminal->id_0080 = inbuf[i + 6] << 24 | inbuf[7 + i] << 16 | inbuf[8 + i] << 8  | inbuf[9 + i];
			i += 9;
			//i += Paralen;
		}
		else if (Paraid == 0x00000081)
		{
			Terminal->id_0081 = inbuf[7 + i] << 8  | inbuf[6 + i];
			i += 7;
			//i += Paralen;
		}
		else if (Paraid == 0x00000082)
		{
			Terminal->id_0082 = inbuf[7 + i] << 8  | inbuf[6 + i];
			i += 7;
			//i += Paralen;
		}
		else if(Paraid == 0x00000083)
		{
			memcpy(Terminal->id_0083,&inbuf[i+6],Paralen);
			i += 4+2;
			i+=(Paralen -1);
		}
		else if(Paraid == 0x00000084)
		{
			Terminal->id_0084 =  inbuf[6 + i];
			i += 4+2;

		}
		else if(Paraid == 0x00000090)
		{
			Terminal->id_0090 =  inbuf[6 + i];
			i += 6;
		}
		else if(Paraid == 0x00000091)
		{
			Terminal->id_0091 =  inbuf[6 + i];
			i += 4+2;
		}
		else if(Paraid == 0x00000092)
		{
			Terminal->id_0092 =  inbuf[6 + i];
			i += 4+2;

		}
		else if (Paraid == 0x00000093)
		{
			Terminal->id_0093 = inbuf[i + 6] << 24 | inbuf[7 + i] << 16 | inbuf[8 + i] << 8  | inbuf[9 + i];
			i += 9;
			//i += Paralen;
		}
		else if(Paraid == 0x00000094)
		{
			Terminal->id_0094 =  inbuf[6 + i];	
			i += 4+2;
		}
		else if (Paraid == 0x00000095)
		{
			Terminal->id_0095 = inbuf[i + 6] << 24 | inbuf[7 + i] << 16 | inbuf[8 + i] << 8  | inbuf[9 + i];
			i += 9;
			//i += Paralen;
		}
		else if (Paraid == 0x0000f000)
		{
			Terminal->id_F000 = inbuf[i + 6] << 24 | inbuf[7 + i] << 16 | inbuf[8 + i] << 8  | inbuf[9 + i];
			i += 9;
			//i += Paralen;
		}
		else if(Paraid == 0x0000f002)
		{
			Terminal->id_F002 =  inbuf[6 + i];	
			i += 4+2;
		}
		else if (Paraid == 0x0000f003)
		{
			Terminal->id_F003 = inbuf[i + 6] << 24 | inbuf[7 + i] << 16 | inbuf[8 + i] << 8  | inbuf[9 + i];
			i += 9;
			//i += Paralen;
		}
		else if (Paraid == 0x0000f004)
		{
			Terminal->id_F004 = inbuf[7 + i] << 8  | inbuf[6 + i];
			i += 7;
			//i += Paralen;
		}
		else if (Paraid == 0x0000f005)
		{
			Terminal->id_F003 = inbuf[i + 6] << 24 | inbuf[7 + i] << 16 | inbuf[8 + i] << 8  | inbuf[9 + i];
			i += 9;
			//i += Paralen;
		}
		else if (Paraid == 0x0000f006)
		{
			Terminal->id_F006 = inbuf[7 + i] << 8  | inbuf[6 + i];
			i += 7;
			//i += Paralen;
		}
		else if (Paraid == 0x0000f007)
		{
			Terminal->id_F007 = inbuf[7 + i] << 8  | inbuf[6 + i];
			i += 7;
			//i += Paralen;
		}
		else if (Paraid == 0x0000f009)
		{
			Terminal->id_F009 = inbuf[7 + i] << 8  | inbuf[6 + i];
			i += 7;
			//i += Paralen;
		}
		else if (Paraid == 0x0000f00A)
		{
			Terminal->id_F00A = inbuf[7 + i] << 8  | inbuf[6 + i];
			i += 7;
			//i += Paralen;
		}
		else if (Paraid == 0x0000f00B)
		{
			Terminal->id_F00B = inbuf[7 + i] << 8  | inbuf[6 + i];
			i += 7;
			//i += Paralen;
		}
		else if (Paraid == 0x0000f00C)
		{
			Terminal->id_F00C = inbuf[7 + i] << 8  | inbuf[6 + i];
			i += 7;
			//i += Paralen;
		}
		else if (Paraid == 0x0000f00D)
		{
			Terminal->id_F00D = inbuf[i + 6] << 24 | inbuf[7 + i] << 16 | inbuf[8 + i] << 8  | inbuf[9 + i];
			i += 9;
			//i += Paralen;
		}
		else if (Paraid == 0x0000f00D)
		{
			Terminal->id_F00D = inbuf[i + 6] << 24 | inbuf[7 + i] << 16 | inbuf[8 + i] << 8  | inbuf[9 + i];
			i += 9;
			//i += Paralen;
		}
		else if (Paraid == 0x0000f00E)
		{
			Terminal->id_F00E = inbuf[i + 6] << 24 | inbuf[7 + i] << 16 | inbuf[8 + i] << 8  | inbuf[9 + i];
			i += 9;
			//i += Paralen;
		}
		else if (Paraid == 0x0000f00f)
		{
			Terminal->id_F00F[0] = inbuf[i + 6];
			Terminal->id_F00F[1] = inbuf[7 + i]; 
			Terminal->id_F00F[2] = inbuf[i + 8];
			Terminal->id_F00F[3] = inbuf[i + 9]; 
			Terminal->id_F00F[0] = inbuf[i + 10];
			Terminal->id_F00F[1] = inbuf[7 + 11]; 
			Terminal->id_F00F[2] = inbuf[i + 12];
			Terminal->id_F00F[3] = inbuf[i + 13]; 
			i += 13;
		}
		else if (Paraid == 0x0000f01f)
		{
			memcpy(&Terminal->id_F01F[0],inbuf[i+6],Paralen);
			i += 6;
			i += (Paralen -1);
		}
		else			
		{
			i+=6;				
			i+=(Paralen-1);		
		}
	}
	printf("number = %d\r\n",number);
	Terminal->num = number;
	return number;
}

//--------------------------------------------------
//open device file parameter config and change using file number and file create time
//----------------------
//60byte---1 name file
//1 byte numbers of file 
//1 byte now using number
//6 byte save time
//2 byte len
//len bytes name data
//----------------------
//--------------------------------------------------
unsigned char SocketIPFile_Config(char *filepath,char *filename, char *namefilepath, unsigned char *BCDTime)
{
	QFILE *fp = NULL;
	QFILE *fpfile = NULL;
	unsigned char ret = 0;
	unsigned short datalen = 0;
	unsigned short VersionLen = 0;
	char NewFilepath[100] = { 0 };
	char filenum = 0;
	//read parameter data file time to know using which file
	char UsingFileName[182] = { 0 };
	unsigned char UsingFileNum = 0;

	unsigned char Timebuf[18];
	
	fp = ql_fopen(namefilepath, "r+");
	if (fp < 0)
	{
		printf("[%s-%d] NameFile open fail", __FUNCTION__, __LINE__);
		return 0xFF;
	}
	//get number of file now
	ql_fseek(fp, 0, SEEK_SET);		//�����ƶ����ļ���
	ql_fread(&filenum, 1, 1, fp);
	printf("--------------------------filenum =%d\n", filenum);
	if (!filenum)
		return 0xFF;
	//read using file num.
	ql_fread(&UsingFileNum, 1, 1, fp);

	//get all filename infomation
	ql_fseek(fp, 0, SEEK_SET);
	ql_fread(UsingFileName, (filenum * 60 + 2), 1, fp);
	for (unsigned char i = 0; i < 3; i++)
	{
		VersionLen = UsingFileName[i*60+8]<<8| UsingFileName[i * 60 + 9];
		ret = FileNameCompare(&UsingFileName[i * 60 + 10], filename,VersionLen);
		if (ret)
		{
			//change using file number and create file time
			UsingFileNum = i + 1;
			ql_fseek(fp, 1, SEEK_SET);
			ql_fwrite(&UsingFileNum, 1, 1, fp);
			ql_fseek(fp,(UsingFileNum*60+2), SEEK_SET);
			ql_fwrite(BCDTime, 6, 1, fp);
			break;
		}
	}

	if (!ret)
	{
		ql_fclose(fp);
		return 0xFF;
	}

	ql_fclose(fp);
	return 0;
}