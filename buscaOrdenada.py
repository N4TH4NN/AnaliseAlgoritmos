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
