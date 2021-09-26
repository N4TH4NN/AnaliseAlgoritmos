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
	for i in range(35000):
		vetor.append(randint(0, 1000))
	return vetor


print('\n\n\n######################################################\n\n\n')
print('BUSCA LINEAR SEQUENCIAL')
	
def buscaLinear():
	vetor = criarVetor()
	#print("Vetor gerado: ", vetor)
	print('\n')
	desejado = int(input('Digite um número para procurar na lista: '))
	print('\n')
	
	for n, x in enumerate(vetor):
		#print(f'Verificando se o número {desejado} está no índice {n} da lista.')
		if x == desejado:
			print(f'O número {desejado} foi encontrado no índice {n} da lista.\n\n')

	print('Fim da Busca Linear Sequencial.\nObrigado por usar!')
	
painel()

inicio_buscaLinear = time.time()
buscaLinear()
fim_buscaLinear = time.time()
print('Tempo execucao:', (fim_buscaLinear - inicio_buscaLinear)/60)

print('\n\n\n######################################################\n\n\n')
print('BUSCA LINEAR MELHORADA')
	
def buscaLinearMelhorada():
	vetor = criarVetor()
	#print("Vetor gerado: ", vetor)
	print('\n')

	desejado = int(input('Digite um número para procurar na lista: '))
	print('\n')
	
	for n, x in enumerate(vetor):

		#print(f'Verificando se o número {desejado} está no índice {n} da lista.')
		if x == desejado:
			print(f'O número {desejado} foi encontrado no índice {n} da lista.\n\n')
			break
		else:
			print('Número não encontrado.\n')

	print('Fim da Busca Linear Melhorada.\nObrigado por usar!')
	
painel()

inicio_buscaLinearMelhorada = time.time()
buscaLinearMelhorada()
fim_buscaLinearMelhorada = time.time()
print('Tempo execucao:', (fim_buscaLinearMelhorada - inicio_buscaLinearMelhorada)/60)

print('\n\n\n######################################################\n\n\n')