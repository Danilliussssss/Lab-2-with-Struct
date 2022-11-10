#include "VideoAdapter.h"
#pragma warning(disable : 4996)
void VideoAdapter::InitVideo(int TF, string name)
{

	this->name = name;
	this->TF = TF;
}

void VideoAdapter::EnterVideo(int TF, string name)
{
	printf("\nВведите объём батареи(mAh/ч):");
	scanf("\n%d", &TF);
	cin.ignore(32767, '\n');
	printf("Введите название гаджета:");
	getline(cin, name);
	this->TF = TF;
	this->name = name;


}
void VideoAdapter::PrintVideo(int mAh, string name)
{
	cout << "\nНазвание:                       " << name;
	printf("\nКол-во TF:                      %d", mAh);
	


}

void VideoAdapter::correctVideo(int TF, string name)
{	int n;

	printf("1.Видеокарта\n2.Частота видеочипа");
	printf("\nВыберите поле,которое хотите редактировать:");
	do{
		scanf("%d", &n);
	} while (n != 1 || n != 2);
	 system("cls");
	switch (n)
	{
	case 1:
	{
		printf("Введите название видеокарты:");
		cin.ignore(32767, '\n');
		getline(cin, name);
		this->name = name; break;
	}
	case 2:
		printf("\nВведите объём батареи(mAh/ч):");
		scanf("\n%d", &TF);
		this->TF = TF;
		break;
	}
	
}
