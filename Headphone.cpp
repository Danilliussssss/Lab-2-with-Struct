#include "Headphone.h"
#pragma warning(disable : 4996)
void Headphone::InitNullHeadphone()
{
	mAh = 0;
	name = "";

}
void Headphone::InitHeadphone(int mAh, string name) {
	this->mAh = mAh;
	this->name = name;
}
void Headphone::EnterHeadphone(int mAh, string name)
{
	printf("\n������� ����� �������(mAh/�):");
	scanf("\n%d", &mAh);
	cin.ignore(32767, '\n');
	printf("������� �������� �������:");
	getline(cin, name);
	this->mAh = mAh;
	this->name = name;
}
void Headphone::PrintHeadphone(int mAh, string name)
{
	printf("����� �������:                %d", mAh);
	cout << "\n��������:                     " << name;
	

}
void Headphone::correctHeadphone(int mAh, string name)
{
	int n;

	printf("1.��������\n2.����� �������\n");
	printf("�������� ����,������� ������ �������������:");
	scanf("%d", &n);
	if (n == 1)
	{
		system("cls");
		cin.ignore(32767, '\n');
		printf("������� �������� �������:");
		getline(cin, name);
		this->name = name;
	}
	else if (n == 2)
	{

		system("cls");
		printf("\n������� ����� �������(mAh/�):");
		scanf("\n%d", &mAh);
		this->mAh = mAh;
	}


}



