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
	printf("\n������� ����� �������(mAh/�):");
	scanf("\n%d", &mAh);
	cin.ignore(32767, '\n');
	printf("������� �������� �������:");
	getline(cin, name);
	this->mAh = mAh;
	this->name = name;


}
void Notebook::PrintNotebook(int mAh, string name)
{

	printf("\n����� �������:                  %d", mAh);
	cout << "\n��������:                       " << name;
	
	
}

void Notebook::correctNotebook(int mAh, string name)
{
	int n;

	printf("1.��������\n2.����� �������");
	printf("\n�������� ����,������� ������ �������������:");
	do {
		scanf("%d", &n);
	} while (n != 1 && n != 2);
     system("cls");
	switch (n)
	{
	case 1:
	{
		cin.ignore(32767, '\n');
		printf("������� �������� �������:");
		getline(cin, name);
		this->name = name; break;
	}
	case 2:
		printf("\n������� ����� �������(mAh/�):");
		scanf("\n%d", &mAh);
		this->mAh = mAh;
		break;
	



	}
}






