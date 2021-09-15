from random import randint
import time

def esperar():
	pausa = time.sleep(1)
	return pausa

def painel():
	print('\n\n\t\t\tBusca Linear')
	print('Análise de Algoritmos - Rodrigo Hagstrom')
	esperar()
	print('\n\nGabriel de Jesus\nNatã Ferreira\nRafhael Martins\nVictor Resende\n\n')
	esperar()
	print('Gerando vetores com dez dados aleatórios.')
	esperar()
	print('Gerando vetores com dez dados aleatórios..')
	esperar()
	print('Gerando vetores com dez dados aleatórios...')
	
def criarVetor():
	vetor = []
	for i in range(10):
		vetor.append(randint(0, 20))
	return vetor
	
def buscaLinear():
	vetor = criarVetor()
	esperar()
	print("Vetor gerado: ", vetor)
	print('\n')

	esperar()
	sentinela = int(input('Digite um número para procurar na lista: '))
	print('\n')

	resultado = -1
	num = len(vetor)
	ultimo = vetor[num - 1]
	vetor[num - 1] = sentinela
	i = 0

	while vetor[i] != sentinela:
		i += 1
		esperar()
		print(f'Verificando se o número {sentinela} está no índice {i} da lista.')

	vetor[num - 1] = ultimo

	if i == len(vetor) - 1:
		esperar()
		print('Número não encontrado.\n')
	
	esperar()
	print(f'O número {sentinela} foi encontrado no índice {i} da lista.\n\n')

	esperar()
	print('Fim da Busca Linear.\nObrigado por usar!')

painel()
buscaLinear()