/*BUSCA LINEAR

DISCIPLINA: ANÁLISE DE ALGORITMOS.
GRUPO: Gabriel de Jesus, Nathan Santana, Rafhael Martins e Victor Resende.
PROFESSOR: Rodrigo Hagstrom.

EXERCÍCO AULA 01: Programar qualquer versão da busca linear, em qualquer linguagem, preferencialmente C ou Python, 
onde seja possível perceber o número de iterações de cada trecho do código ou algoritmo, ou, que seja possível perceber 
o tempo de execução do código.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h> //para linux

#define MAX 35000

// Função de contador de tempo em ms para a iteracao no terminal ficar mais interessante.
int msleep(unsigned int tms) { 
  return usleep(tms * 1000);
} 

// Inicializa a função de procurar.
int procurar(void);

// Inicializa a função de busca_linear.
int busca_linear(int v[], int num);

// Inicializa a função de busca_linear_melhorada.
int busca_linear_melhorada(int v[], int num);

int main()
{
    //Defini do vetor e variáveis.
    int vet[MAX], i, n;
    clock_t t_bl, t_blm; //variável para armazenar tempo

    /*A função srand(time(NULL)) inicializa o gerador de números aleatórios com um valor de 'semente',
    com o parâmetro time(NULL) é então calculado um valor como sendo o total de segundos passados desde
    1 de janeiro de 1970 até a data atual. Com isso, a cada execução o valor da 'semente' será diferente.*/
    srand(time(NULL));

    printf("Gerando números aleatórios!\n\n");
    for (i = 0; i < MAX; i++){
        //Preenche o vetor com números aleatóriamente de 0 a 100.
        vet[i] = rand() % 100;
        //printf("%d\t--->  no índice  --->\t[%d]\n", vet[i], i);
    }

    // Chama a função procurar.
    n = procurar();

    // Chama a função busca_linear.
    t_bl = clock(); //armazena tempo
    busca_linear(vet, n);
    t_bl = clock() - t_bl; //tempo final - tempo inicial
    //imprime o tempo na tela
    printf("Tempo de execucao: %lf\n", ((double)t_bl)/((CLOCKS_PER_SEC))); //conversão para double

    // Chama a função busca_linear_melhorada.
    t_blm = clock(); //armazena tempo
    busca_linear_melhorada(vet, n);
    t_blm = clock() - t_blm; //tempo final - tempo inicial
    //imprime o tempo na tela
    printf("Tempo de execucao: %lf\n", ((double)t_blm)/((CLOCKS_PER_SEC))); //conversão para double

    return 0;
}

// Função para solicitar um elemento a ser procurado.
int procurar(void)
{
    //Defini variáveis.
    int elemento;

    // Solicita ao usuário o elemento a ser buscado.
    printf("\n\nQual elemento deseja procurar: ");
    scanf("%d", &elemento);
    //printf("\nValor a ser procurado é %d\n\n", elemento);
    return elemento;
}

// Função para buscar linear.
int busca_linear(int v[], int num)
{
    //Defini variáveis.
    int i;

    printf("\n####################");
    printf("\nBUSCA LINEAR");
    printf("\n####################\n\n");

    // Busca o elemento no vetor.
    for (i = 0; i < MAX; i++){
        //printf("\nProcurando elemento %d no índice [%d]", num, i);
        // Verifica se encontrou o elemento e qual o índice.
        if(v[i] == num){
            printf("\n\nElemento %d encontrado no índice [%d]\n", num, i);
        }
        //msleep(200);
    }
    printf("\n\nTodos os índices percorridos!\n");

}

// Função para buscar linear melhorada.
int busca_linear_melhorada(int v[], int num)
{
    //Defini variáveis.
    int i;

    printf("\n\n####################");
    printf("\nBUSCA LINEAR MELHORADA");
    printf("\n####################\n\n");

    // Busca o elemento no vetor.
    for (i = 0; i < MAX; i++){
        //printf("\nProcurando elemento %d no índice [%d]", num, i);
        if(v[i] == num){
            //printf("\n\nElemento encontrado!!!");
            break;
        }
        //msleep(200);
    }

    // Verifica se encontrou o elemento e qual o índice.
    if(i < MAX){
        printf("\n\nElemento %d encontrado no índice [%d]\n", num, i);
    }
    else{
        printf("\n\nTodos os índices percorridos!");
        printf("\nElemento não foi encontrado!!!\n");
    }
}