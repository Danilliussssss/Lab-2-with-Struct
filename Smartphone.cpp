#include "Smartphone.h"
#pragma warning(disable : 4996)
void Smartphone::InitSmartphoneNull()
{
	mAh = 0;
	name = "";

}
void Smartphone::InitSmartphone(int mAh, string name) {
	this->mAh = mAh;
	this->name = name;	
	counter++;
}
void Smartphone::EnterSmartphone(int mAh, string name)
{
	printf("\n������� ����� �������(mAh/�):");
	scanf("\n%d", &mAh);
	cin.ignore(32767, '\n');
	printf("������� �������� �������:");
	getline(cin, name);
	this->mAh = mAh;
	this->name = name;
}
void Smartphone::printSmartphone(int mAh, string name)
{

	printf("����� �������:                %d", mAh);
	cout << "\n��������:                     " << name;
	
}
void Smartphone::correct(int mAh, string name)
{
	int n;

	printf("1.��������\n2.����� �������\n");
	printf("�������� ����,������� ������ �������������:");
	scanf("%d", &n);
	switch (n)
	{
	case 1:

		system("cls");
		cin.ignore(32767, '\n');
		printf("������� �������� �������:");
		getline(cin, name);
		this->name = name;
		break;
	case 2:


		system("cls");
		printf("\n������� ����� �������(mAh/�):");
		scanf("\n%d", &mAh);
		this->mAh = mAh;
		break;
	}
}
