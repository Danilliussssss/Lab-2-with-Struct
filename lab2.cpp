#pragma warning(disable : 4996)
#include <iostream>
#include "NoteBook.h"
#include "Smartphone.h"
#include "Processor.h"
#include "Headphone.h"

void printmenu()
{
	printf("Выберите категорию гаджетов:");
	printf("\n1.Смартфоны\n2.Наушники\n3.Ноутбуки\n4.Выход\n");
}


int main()
{
	int choose, massive;
	setlocale(LC_ALL, "russian");
	do {
		system("cls");
		printmenu();
		do
			scanf("%d", &choose);
		while (choose < 0 && choose>4);
		if (choose == 1)
		{
			system("cls");
			Smartphone SMARTPHONE;
			printf("Введите данные своего смартфона:\n");
			SMARTPHONE.EnterSmartphone(SMARTPHONE.mAh, SMARTPHONE.name);
			SMARTPHONE.Pr.EnterProcessor(SMARTPHONE.Pr.GHz, SMARTPHONE.Pr.name);
			Smartphone* A = nullptr;
			printf("Введите кол-во гаджетов:");
			scanf("%d", &massive);
				A = new Smartphone[massive];
				for (int i = 0; i < massive; i++)
				{
					A->InitSmartphone(SMARTPHONE.mAh, SMARTPHONE.name);
					A->Pr.InitProcessor(SMARTPHONE.Pr.GHz, SMARTPHONE.Pr.name);
				}
			A->printSmartphone(A->mAh,A->name);
			A->Pr.PrintProcessor(A->Pr.GHz, A->Pr.name);
			int a;
			printf("\nРедактировать данные смартфона?\n1.Да\n2.Нет\n");
			do {
				scanf("%d", &a);
			} while (a != 1 && a != 2);
			if (a == 1)
			{
				SMARTPHONE.correct(SMARTPHONE.mAh, SMARTPHONE.name);
				delete[] A;
				A = new Smartphone[massive];
				for (int i = 0; i < massive; i++)
					A[i].InitSmartphone(SMARTPHONE.mAh, SMARTPHONE.name);	
			}
			printf("\nРедактировать данные процессора?\n1.Да\n2.Нет\n");
			do {
				scanf("%d", &a);
			} while (a != 1 && a != 2);
			if (a == 1)
			{
				SMARTPHONE.Pr.correctProcessor(SMARTPHONE.Pr.GHz, SMARTPHONE.Pr.name);
				for (int i = 0; i < massive; i++)
					A[i].Pr.InitProcessor(SMARTPHONE.Pr.GHz, SMARTPHONE.Pr.name);
			}
			A->printSmartphone(A->mAh, A->name);
			A->Pr.PrintProcessor(A->Pr.GHz, A->Pr.name);
		}
		else if (choose == 2)
		{
			system("cls");
			Headphone HEADPHONE;
			printf("Введите данные своих наушников:\n");
			HEADPHONE.EnterHeadphone(HEADPHONE.mAh, HEADPHONE.name);
			Headphone* A = nullptr;

			printf("Введите кол-во гаджетов:");
			scanf("%d", &massive);
			
				A = new Headphone[massive];
				for (int i = 0; i < massive; i++) {
					A[i].InitHeadphone(HEADPHONE.mAh, HEADPHONE.name);
			}
			A->PrintHeadphone(A->mAh, A->name);
			int a;
			printf("\nРедактировать данные?\n1.Да\n2.Нет\n");
			do {
				scanf("%d", &a);
			} while (a != 1 && a != 2);
			if (a == 1)
			{
				HEADPHONE.correctHeadphone(HEADPHONE.mAh, HEADPHONE.name);
				delete[] A;A = new Headphone[massive];
				for (int i = 0; i < massive; i++)
					A[i].InitHeadphone(HEADPHONE.mAh, HEADPHONE.name);
				A->PrintHeadphone(A->mAh, A->name);

			}
		}
		else if (choose == 3)
		{
			system("cls");
			Notebook Note;
			printf("Введите данные своего ноутбука:\n");
			Notebook* N = nullptr;
			Note.EnterNotebook(Note.mAh, Note.name);
			Note.Video.EnterVideo(Note.Video.TF, Note.Video.name);
			printf("Введите кол-во гаджетов:");
			scanf("%d", &massive);N = new Notebook[massive];
			for (int i = 0; i < massive; i++)
			{
				N->SwipeNotebook(Note.mAh, Note.name);
				N->Video.InitVideo(Note.Video.TF, Note.Video.name);
			}
			N->PrintNotebook(N->mAh, N->name);
			N->Video.PrintVideo(Note.Video.TF, Note.Video.name);
			int a;
			printf("\nРедактировать данные ноутбука?\n1.Да\n2.Нет\n");
			do {
				scanf("%d", &a);
			} while (a != 1 && a != 2);
			if (a == 1)
			{
				system("cls");
				Note.correctNotebook(Note.mAh, Note.name);
				delete[] N;N = new Notebook[massive];
				for (int i = 0; i < massive; i++)
					N->SwipeNotebook(Note.mAh, Note.name);
					N->PrintNotebook(N->mAh, N->name);
				
			}
			printf("\nРедактировать данные видеокарты?\n1.Да\n2.Нет\n");
			do {
				scanf("%d", &a);
			} while (a != 1 && a != 2);
			if(a==1)
			{
				N->Video.correctVideo(Note.Video.TF, Note.Video.name);
				for (int i = 0; i < massive; i++)
			N->Video.InitVideo(Note.Video.TF, Note.Video.name);
			
			}
			N->PrintNotebook(N->mAh, N->name);N->Video.PrintVideo(N->Video.TF,N->Video.name);
		} 
		else if (choose == 4)
			return 0;
		cout << "\n";
		system("pause");
	} while (choose != 4);
}


