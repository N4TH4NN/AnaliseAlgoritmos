/* BUSCA ORDENADA.

DISCIPLINA: ANÁLISE DE ALGORITMOS.
GRUPO: Gabriel de Jesus, Nathan Santana, Rafhael Martins e Victor Resende.
PROFESSOR: Rodrigo Hagstrom.*/

#include <math.h>
#include <stdio.h>
#include<time.h>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// C program for implementation of Bubble sort
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

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


// C program for implementation of selection sort
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
 
        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}

// Driver program to test above functions
int main()
{
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(arr)/sizeof(arr[0]);

    clock_t t_bs, t_is, t_ss; //variável para armazenar tempo

    printf("\n####################");
    printf("\nORDENAÇÃO BUBBLE SORT");
    printf("\n####################\n\n");

    t_bs = clock(); //armazena tempo
    bubbleSort(arr, n);
    t_bs = clock() - t_bs; //tempo final - tempo inicial
    //imprime o tempo na tela
    printf("Tempo de execucao: %lf\n", ((double)t_bs)/((CLOCKS_PER_SEC))); //conversão para double

    printf("Ordenação Bubble Sort: \n");
	printArray(arr, n);

    printf("\n####################");
    printf("\nORDENAÇÃO INSERTION SORT");
    printf("\n####################\n\n");

    t_is = clock(); //armazena tempo
    insertionSort(arr, n);
    t_is = clock() - t_is; //tempo final - tempo inicial
    //imprime o tempo na tela
    printf("Tempo de execucao: %lf\n", ((double)t_is)/((CLOCKS_PER_SEC))); //conversão para double

    printf("Ordenação Insertion Sort: \n");
    printArray(arr, n);

    printf("\n####################");
    printf("\nORDENAÇÃO SELECTION SORT");
    printf("\n####################\n\n");

    t_ss = clock(); //armazena tempo
    selectionSort(arr, n);
    t_ss = clock() - t_ss; //tempo final - tempo inicial
    //imprime o tempo na tela
    printf("Tempo de execucao: %lf\n", ((double)t_ss)/((CLOCKS_PER_SEC))); //conversão para double

    printf("Ordenação Selection Sort: \n");
    printArray(arr, n);
	return 0;
}
