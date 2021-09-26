from random import randint
import time

def painel():
	print('\n\n\t\t\tBusca Linear')
	print('Análise de Algoritmos - Rodrigo Hagstrom')
	print('\n\nGabriel de Jesus\nNatã Ferreira\nRafhael Martins\nVictor Resende\n\n')
	print('Gerando vetores com dez dados aleatórios.')
	print('Gerando vetores com dez dados aleatórios..')
	print('Gerando vetores com dez dados aleatórios...')
	
def criarVetor():
	vetor = []
	for i in range(10):
		vetor.append(randint(0, 1000))
	return vetor

vetor = criarVetor()

print('\n\n\n######################################################')
print('\t\tBUBBLE SORT')
print('######################################################')

def bubbleSort():
    n = len(vetor)
 
    # Traverse through all array elements
    for i in range(n):
 
        # Last i elements are already in place
        for j in range(0, n-i-1):
 
            # traverse the array from 0 to n-i-1
            # Swap if the element found is greater
            # than the next element
            if vetor[j] > vetor[j+1] :
                vetor[j], vetor[j+1] = vetor[j+1], vetor[j]

    print ("\n\nO vetor ordenado eh:")
    for i in range(len(vetor)):
        print ("%d" %vetor[i])
 
painel()

inicio_bubbleSort = time.time()
bubbleSort()
fim_bubbleSort = time.time()
print('Tempo execucao:', (fim_bubbleSort - inicio_bubbleSort)/60)
print('Obrigado por usar a busca ordenada: Bubble Sort!')

print('\n\n\n######################################################')
print('\t\tINSERTION SORT')
print('######################################################')
def insertionSort():
 
    # Traverse through 1 to len(arr)
    for i in range(1, len(vetor)):
 
        key = vetor[i]
 
        # Move elements of arr[0..i-1], that are
        # greater than key, to one position ahead
        # of their current position
        j = i-1
        while j >= 0 and key < vetor[j] :
                vetor[j + 1] = vetor[j]
                j -= 1
        vetor[j + 1] = key

    print ("\n\nO vetor ordenado eh:")
    for i in range(len(vetor)):
        print("% d" % vetor[i])

painel()

inicio_insertionSort = time.time()
insertionSort()
fim_insertionSort = time.time()
print('Tempo execucao:', (fim_insertionSort - inicio_insertionSort)/60)
print('Obrigado por usar a busca ordenada: Insert Sort!')

print('\n\n\n######################################################')
print('\t\tSELECT SORT')
print('######################################################')
 
def selectSort():
    for i in range(len(vetor)):
        
        # Find the minimum element in remaining
        # unsorted array
        min_idx = i
        for j in range(i+1, len(vetor)):
            if vetor[min_idx] > vetor[j]:
                min_idx = j
                
        # Swap the found minimum element with
        # the first element       
        vetor[i], vetor[min_idx] = vetor[min_idx], vetor[i]

    print ("\n\nO vetor ordenado eh:")
    for i in range(len(vetor)):
        print("%d" %vetor[i])
 
# Driver code to test above
painel()

inicio_selectSort = time.time()
selectSort()
fim_selectSort = time.time()
print('Tempo execucao:', (fim_selectSort - inicio_selectSort)/60)
print('Obrigado por usar a busca ordenada: Select Sort!')
