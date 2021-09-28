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
	vetor = list(range(0, 100000, 5))

	#for i in range(3500000):
	#	vetor.append(randint(0, 100000))
	return vetor

	
def buscaLinear():
	print('\n\n\n######################################################')
	print('\t\tBUSCA LINEAR SEQUENCIAL')
	print('######################################################')

	#print("Vetor gerado: ", vetor)
	print('\n')
	desejado = num_escolhido
	print('\n')
	
	for n, x in enumerate(vetor):
		#print(f'Verificando se o número {desejado} está no índice {n} da lista.')
		if x == desejado:
			print(f'O número {desejado} foi encontrado no índice {n} da lista.\n\n')

	#print(f'O número {desejado} não foi encontrado na lista.\n\n')
	print('Fim da Busca Linear Sequencial.\nObrigado por usar!')
	
def buscaLinearMelhorada():
	print('\n\n\n######################################################')
	print('\t\tBUSCA LINEAR MELHORADA')
	print('######################################################')

	#print("Vetor gerado: ", vetor)
	print('\n')

	desejado = num_escolhido
	print('\n')
	
	for n, x in enumerate(vetor):

		#print(f'Verificando se o número {desejado} está no índice {n} da lista.')
		if x == desejado:
			print(f'O número {desejado} foi encontrado no índice {n} da lista.\n\n')
			break
	#print(f'O número {desejado} não foi encontrado na lista.\n\n')
	print('Fim da Busca Linear Melhorada.\nObrigado por usar!')

def buscaLinearSentinela():
    print('\n\n\n######################################################')
    print('\t\tBUSCA LINEAR COM SENTINELA')
    print('######################################################')

    #print("Vetor gerado: ", vetor)
    print('\n')


    sentinela = num_escolhido
    print('\n')
    num = len(vetor)
    ultimo = vetor[num - 1]
    vetor[num - 1] = sentinela
    i = 0

    while vetor[i] != sentinela:
        i += 1
        #print(f'Verificando se o número {sentinela} está no índice {i} da lista.')

    vetor[num - 1] = ultimo

    if i == (len(vetor) - 1) or vetor[num - 1] == sentinela:
        print('Número não encontrado.\n')


    print(f'O número {sentinela} foi encontrado no índice {i} da lista.\n\n')
    print('Fim da Busca Linear com Sentinela.\nObrigado por usar!')


painel()
num_escolhido = int(input('Digite um número para procurar na lista: '))
vetor = criarVetor()

inicio_buscaLinear = time.time()
buscaLinear()
fim_buscaLinear = time.time()
print('Tempo execucao:', (fim_buscaLinear - inicio_buscaLinear))

inicio_buscaLinearMelhorada = time.time()
buscaLinearMelhorada()
fim_buscaLinearMelhorada = time.time()
print('Tempo execucao:', (fim_buscaLinearMelhorada - inicio_buscaLinearMelhorada))

inicio_buscaLinearSentinela = time.time()
buscaLinearSentinela()
fim_buscaLinearSentinela = time.time()
print('Tempo execucao:', (fim_buscaLinearSentinela - inicio_buscaLinearSentinela))
