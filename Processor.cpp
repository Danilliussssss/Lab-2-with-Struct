#include "Processor.h"
#pragma warning(disable : 4996)
void Processor::InitNull()
{
	GHz = 0;
	name = "";
}
void Processor::InitProcessor(float GHz, string name)
{
	this->GHz = GHz;
	this->name = name;
}
void Processor::PrintProcessor(float GHz, string name)
{
	cout << "\n������� ����������:           " << GHz;
	cout << "\n���������:                    " << name;
}
void Processor::EnterProcessor(float GHz, string name)
{
	printf("\n������� ������� ����������:");
	scanf("\n%f", &GHz);
	cin.ignore(32767, '\n');
	printf("������� �������� ����������:");
	getline(cin, name);
	this->GHz = GHz;
	this->name = name;
}
void Processor::correctProcessor(int GHz, string name)
{
	int n;

	printf("1.��������\n2.������� ���������� \n");
	printf("�������� ����,������� ������ �������������:");
	scanf("%d", &n);
	switch (n)
	{
	case 1:

		system("cls");
		cin.ignore(32767, '\n');
		printf("������� �������� ����������:");
		getline(cin, name);
		this->name = name;
		break;
	case 2:
	{

		system("cls");
		printf("\n������� ������� ����������:");
		scanf("\n%d", &GHz);
		this->GHz = GHz;
		break;
	}
	}
}