/*
�������� ���������, ������� ��������� ������������� ��������� 
��������������� ���������,
��������� � ���� ��������� ��������� ������. 
������������� ��������� 4-� �������� ��������.
������� ���������� ������������ �������� ��������.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task8.h"

int main(int argc, char *argv[])
{
	int i = 0;
	char buf1[SIZE] = { "\0" };
	while (argv[1][i] != '\0' && argv[1][i] != '\n')
	{
		buf1[i] = argv[1][i];
		i++;
	}

	printf("Input: %s\n", buf1);
	int res = eval(buf1);
	printf("Result: %d\n", res);

	return 0;
}