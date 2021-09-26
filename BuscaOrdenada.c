/* BUBBLE SORT.

DISCIPLINA: ANÁLISE DE ALGORITMOS.
GRUPO: Gabriel de Jesus, Nathan Santana, Rafhael Martins e Victor Resende.
PROFESSOR: Rodrigo Hagstrom.*/

// C program for implementation of Bubble sort
#include <stdio.h>
#include<time.h>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
int i, j;
for (i = 0; i < n-1; i++)	

	// Last i elements are already in place
	for (j = 0; j < n-i-1; j++)
		if (arr[j] > arr[j+1])
			swap(&arr[j], &arr[j+1]);
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// Driver program to test above functions
int main()
{
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(arr)/sizeof(arr[0]);

    clock_t t_bs; //variável para armazenar tempo

    t_bs = clock(); //armazena tempo
    bubbleSort(arr, n);
    t_bs = clock() - t_bs; //tempo final - tempo inicial
    //imprime o tempo na tela
    printf("Tempo de execucao: %lf\n", ((double)t_bs)/((CLOCKS_PER_SEC))); //conversão para double

    printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}