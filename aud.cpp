﻿// aud.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <time.h>

#define ARR_SIZE 5

int main()
{
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int arr[ARR_SIZE];
	int j, i, n;
	printf("Массив: \n");
	for (i = 0; i<ARR_SIZE; i++) {
		arr[i] = rand() % 100;
		printf("%d\t", arr[i]);
	}
	printf("\n");
	for (i = 0; i < ARR_SIZE - 1; i++) {
		for (j = 0; j < ARR_SIZE - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				n = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = n;
			}
		}
	}
	printf("Отсортированный массив: \n");
	for (int i = 0; i < ARR_SIZE; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
