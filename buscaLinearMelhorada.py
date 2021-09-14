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
	desejado = int(input('Digite um número para procurar na lista: '))
	print('\n')
	
	for n, x in enumerate(vetor):
		esperar()
		print(f'Verificando se o número {desejado} está no índice {n} da lista.')
		if x == desejado:
			esperar()
			print(f'O número {desejado} foi encontrado no índice {n} da lista.\n\n')
			break
		else:
			esperar()
			print('Número não encontrado.\n')

	esperar()
	print('Fim da Busca Linear.\nObrigado por usar!')
	
painel()
buscaLinear()