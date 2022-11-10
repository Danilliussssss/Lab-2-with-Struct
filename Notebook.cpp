#include "NoteBook.h"
#pragma warning(disable : 4996)
void Notebook::InitializtNull(string name)
{

	name = "";
	mAh = 0;
	this->name = name;
	
}
void Notebook::SwipeNotebook(int mAh, string name) {
	this->mAh = mAh;
	this->name = name;


}
void Notebook::EnterNotebook(int mAh, string name)
{
	printf("\nВведите объём батареи(mAh/ч):");
	scanf("\n%d", &mAh);
	cin.ignore(32767, '\n');
	printf("Введите название гаджета:");
	getline(cin, name);
	this->mAh = mAh;
	this->name = name;


}
void Notebook::PrintNotebook(int mAh, string name)
{

	printf("\nОбъём батареи:                  %d", mAh);
	cout << "\nНазвание:                       " << name;
	
	
}

void Notebook::correctNotebook(int mAh, string name)
{
	int n;

	printf("1.Название\n2.Объём батареи");
	printf("\nВыберите поле,которое хотите редактировать:");
	do {
		scanf("%d", &n);
	} while (n != 1 && n != 2);
     system("cls");
	switch (n)
	{
	case 1:
	{
		cin.ignore(32767, '\n');
		printf("Введите название гаджета:");
		getline(cin, name);
		this->name = name; break;
	}
	case 2:
		printf("\nВведите объём батареи(mAh/ч):");
		scanf("\n%d", &mAh);
		this->mAh = mAh;
		break;
	



	}
}






