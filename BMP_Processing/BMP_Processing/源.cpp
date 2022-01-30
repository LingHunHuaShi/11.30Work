#include<iostream>
#include<Windows.h>
#include<malloc.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;
//*********************
int r[10000][10000];
int g[10000][10000];
int b[10000][10000];
void Process(char* buf, DWORD& w, DWORD& h)
{
	char* p;
	p = buf;
	//int r, g, b;
	for (int j = 0; j < h; j++)
	{
		for (int i = 0; i < w; i++)
		{
			*p = 0.5 * (*p + 20); p++;
			b[i][j] = *p;
			*p = *p + 20; p++;
			g[i][j] = *p;
			*p = *p + 20; p++;
			r[i][j] = *p;
		}
	}
}
//*********************
void WriteImage(char* Name, char* buf, DWORD& w, DWORD& h, BITMAPFILEHEADER& bf, BITMAPINFOHEADER& bi)
{
	int r, g, b, pix;
	HWND wnd;                                 //���ھ��
	HDC dc;
	char* p;
	FILE* fpw;
	wnd = GetForegroundWindow();               //��ȡ���ھ��
	dc = GetDC(wnd);                           //��ȡ��ͼ�豸
	int x = 40;
	int y = 40;
	p = buf;
	for (int j = 0; j < h; j++)
	{
		for (int i = 0; i < w; i++)
		{
			b = *p++; g = *p++; r = *p++;
			pix = RGB(r, g, b);
			SetPixel(dc, x + i, y + h - j, pix);
		}
	}
	fpw = fopen(Name, "wb");
	fwrite(&bf, sizeof(BITMAPFILEHEADER), 1, fpw);  //д���ļ�ͷ
	fwrite(&bi, sizeof(BITMAPINFOHEADER), 1, fpw);  //д���ļ�ͷ��Ϣ
	p = buf;
	for (int j = 0; j < h; j++)
	{
		for (int i = 0; i < w * 3; i++)
		{
			fwrite(p++, 1, 1, fpw);
		}
	}
	fclose(fpw);
}
void main()
{

	char fileName[20] = "1.bmp"; //�����ͼ������
	char OutName[20] = "1_new.bmp";
	char* buf = nullptr;
	FILE* fp;                                 //�����ļ�ָ��
	DWORD w, h;                                //�����ȡͼ��ĳ��Ϳ�
	DWORD bitCorlorUsed;                      //����
	DWORD bitSize;                            //����ͼ��Ĵ�С
	BITMAPFILEHEADER bf;
	BITMAPINFOHEADER bi;
	if ((fp = fopen(fileName, "rb")) == NULL)
	{
		cout << "�ļ�δ�ҵ���";
		exit(0);
	}
	fread(&bf, sizeof(BITMAPFILEHEADER), 1, fp);//��ȡBMP�ļ�ͷ�ļ�
	fread(&bi, sizeof(BITMAPINFOHEADER), 1, fp);//��ȡBMP�ļ�ͷ�ļ���Ϣ
	w = bi.biWidth;                            //��ȡͼ��Ŀ�
	h = bi.biHeight;                           //��ȡͼ��ĸ�
	bitSize = bi.biSizeImage;                  //��ȡͼ���size
	buf = (char*)malloc(w * h * 3);                //���仺������С
	fseek(fp, long(sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER)), 0);//��λ��������ʼλ��
	fread(buf, 1, w * h * 3, fp); //��ʼ��ȡ����
	fclose(fp);
	//************************
	Process(buf, w, h);
	//************************
	WriteImage(OutName, buf, w, h, bf, bi);

	for (int i = 0; i < w; ++i)
	{
		for (int j = 0; j < w; ++j)
		{
			cout << r[i][j] << " ";
		}
		cout << endl;
	}
}