/*
�������� ���������, ������� �������� ����� ���������� 
N-��� ����� ���� ��������� � �������������� ��������
������������� ����� ������� �������� ��� N � ��������� �� 1 �� 40
(��� � ������ ��������� �� �������) �� ����� � � ����.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"

int main()
{
	unsigned long long res = 0;
	int n = 0;
	clock_t t1, t2;
	double sec = 0.0;
	FILE *fp = fopen("fib.xls", "w");
	if (fp == NULL)
		puts("File error!");

	for (n = 1; n <= 40; n++)
	{
		t1 = clock();
		res = fib1(n);
		t2 = clock();
		sec = (double)(t2 - t1) / CLOCKS_PER_SEC;
		fprintf(stdout, "%d\t%f\n", n, sec);
		fprintf(fp, "%d\t\t%f\n", n, sec);
	}

	fclose(fp);
	return 0;
}