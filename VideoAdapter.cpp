#include "VideoAdapter.h"
#pragma warning(disable : 4996)
void VideoAdapter::InitVideo(int TF, string name)
{

	this->name = name;
	this->TF = TF;
}

void VideoAdapter::EnterVideo(int TF, string name)
{
	printf("\n������� ����� �������(mAh/�):");
	scanf("\n%d", &TF);
	cin.ignore(32767, '\n');
	printf("������� �������� �������:");
	getline(cin, name);
	this->TF = TF;
	this->name = name;


}
void VideoAdapter::PrintVideo(int mAh, string name)
{
	cout << "\n��������:                       " << name;
	printf("\n���-�� TF:                      %d", mAh);
	


}

void VideoAdapter::correctVideo(int TF, string name)
{	int n;

	printf("1.����������\n2.������� ���������");
	printf("\n�������� ����,������� ������ �������������:");
	do{
		scanf("%d", &n);
	} while (n != 1 || n != 2);
	 system("cls");
	switch (n)
	{
	case 1:
	{
		printf("������� �������� ����������:");
		cin.ignore(32767, '\n');
		getline(cin, name);
		this->name = name; break;
	}
	case 2:
		printf("\n������� ����� �������(mAh/�):");
		scanf("\n%d", &TF);
		this->TF = TF;
		break;
	}
	
}
