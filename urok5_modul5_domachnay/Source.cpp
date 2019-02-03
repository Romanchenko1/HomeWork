#include<iostream>
#include<stdio.h>
#include<time.h>
#include<locale.h>



void task1()
{
//1.Дан целочисленный квадратный массив 10×10.Найти сумму элементов  каждой строки.
	int A[10][10];
	int total=0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++) 
		{
			A[i][j] = 0 + rand() % 50;
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	printf("\n============================\n");
	for (int i = 0; i < 10; i++) 
	{
		for (int j = 0; j < 10; j++) 
		{
			total += A[i][j];
		}
		printf("Сумма %d строки->%d\n", i + 1, total);
	}
}


void task2()
{
//2.Дан целочисленный квадратный массив 4×4.Найти строку с наименьшей суммой элементов
	int A[4][4];
	int a = 0;
	int b = 0;
	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			A[i][j] = 0 + rand() % 50;
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	printf("\n============================\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			sum += A[i][j];
		}
		if (a < sum)
		{
			a = sum;
			b = i;
		}
	}
	printf("строка с наименьшей суммой элементов->%d\n", b);
}


void task3()
{
//3.Дана целочисленная матрица  6× 8. Найти произведение положительных элементов первого столбца.
	int A[6][8];
	int proiz = 0;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			A[i][j] = -2 + rand() % 50;
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	printf("\n============================\n");
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (A[i][1] > 0)
			{
				proiz = proiz * A[i][j];
			}
		}
	}
	printf("Произведение первого столбца->%d\n", proiz);
}

void task4()
{
//5.Дан двухмерный целочисленный массив A(M, N).Составить  одномерный массив B из номеров строк этого массива
	int A[5][5];
	int B[5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			A[i][j] = 0 + rand() % 50;
			printf("%d ", A[i][j]);
			B[i] = A[i][0];
		}
		printf("\n");
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", B[i]);
	}
}


void task5()
{
//6.Написать программу, которая в матрице чисел A(N, M) находит все элементы
//превышающие по абсолютной величине заданное число B.Подсчитать число таких элементов и записать их в массив C.
	int A[] = { 2,5,-1,7,-5,3,9,-3,0,1 };
	int C[10];
	int B;
	int j = 0;
	printf("Введите число->");
	scanf_s("%d", &B);
	for (int i = 0; i < 10; i++)
	{
		if (abs(A[i]) > B)
		{
			C[j] = A[i];
			j++;
		}
	}
	for (int i = 0; i < j; i++)
	{
		printf("%d ", C[i]);
	}
	printf("\n");
}


void task6()
{
//7.Дана целочисленная матрица размера 8х5.Определить:
//a.сумму всех элементов второго столбца массива;
//b.сумму всех элементов 3 - й строки массива.
	int A[8][5];
	int sum1=0, sum2=0;
	int i, j;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 5; j++)
		{
			A[i][j] = 0 + rand() % 50;
			printf("%d ", A[i][j]);
			sum1 = sum1 + A[i][1];
			sum2 = sum2 + A[2][j];
		}
		printf("\n");
	}
	printf("\n============================\n");
	printf("Сумма 2го столбца->%d\n", sum1);
	printf("Сумма 3й строки->%d\n", sum2);
}


void task7()
{
//8.Дана целочисленная прямоугольная матрица размера M•N
//Сформировать одномерный массив, состоящий из элементов, лежащих в интервале[1, 10]
//Найти произведение елементов полученного одномерного массив
	const int N = 10;
	int n, m;
	do {
		printf("->");
		scanf_s("%d", &n);
	} while (n < 1 || N < n);
	do {
		printf("->");
		scanf_s("%d", &m);
	} while (m < 1 || N < m);
	int a[N][N];
	int b[N*N], k = 0;
	b[0] = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {

			a[i][j] = rand() % 100;
			printf("%d ", a[i][j]);
			if (1 <= a[i][j] && a[i][j] <= 10) {
				b[k] = a[i][j];
				++k;
			}
		}
		printf("\n");
	}
	printf("\n------------------------\n");
	unsigned long long p = 1;
	for (int i = 0; i < k; ++i)
	{
		printf("%d\t", b[i]);
		p *= b[i];
	}
	printf("произведение->%d\n", p);
}

#define N 7
#define M 9
void task8()
{
//Дана целочисленная квадратная матрица.Указать столбец(назвать его номер)
//где минимальное количество элементов, кратных сумме индексов
	int A[N][M];
	int i, j, x, count;
	int min = N;
	for (i = 0; i < N; i++, putchar('\n'))
	{
		for (j = 0; j < M; j++)
		{
			A[i][j] = 0 + rand() % 50;
			printf("%d", A[i][j]);
		}
		putchar('\n');
	}
	for (j = 0; j < M; j++, putchar('\n'))
	{
		printf("Столбец->%d:", j);
		for (i = 0, count = 0; i < N; i++) 
		{
			if (i || j) 
			{
				if (A[i][j] % (i + j) == 0)
				{
					printf("A[%d][%d] / %d; ", i, j, i + j);
					count++;
				}
			}
		}
		if (count < min && count > 0) 
		{
			min = count;
			x = j;
		}
	}
	printf("\nСтолбец с минимальным количеством элементов кратных сумме индексов->%d\n", x, min);
}


void task9()
{
//10.Дана целочисленная квадратная матрица.Найти сумму элементов матрицы, лежащих выше главной диагонали
	int A[4][4];
	int i, j;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			A[i][j] = 0 + rand() % 50;
		}
	}
	int sum(0);
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			sum += A[i][j];
		}
	}
	printf("Сумма элементов выше главной диагонали->%d\n", sum);
}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "");
	int task;
	int flag;
start:
	printf("Введите номер задания-> ");
	scanf_s("%d", &task);
	switch (task)
	{
	case 1: {task1(); }break;
	case 2: {task2(); }break;
	case 3: {task3(); }break;
	case 4: {task4(); }break;
	case 5: {task5(); }break;
	case 6: {task6(); }break;
	case 7: {task7(); }break;
	case 8: {task8(); }break;
	case 9: {task9(); }break;
	default:
		break;
	}
	printf("Чтобы продолжить нажмите 1->");
	scanf_s("%d", &flag);
	if (flag==1)
	{
		goto start;
	}
	system("pause");
}