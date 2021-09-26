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
#include <unistd.h> //para linux

#define MAX 100
#define LEN 20

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

// Inicializa a função de busca_linear_com_sentinela.
int busca_linear_com_sentinela(int v[], int num, int ultimo);

int sentinel_linear_search(int key, int *arr, int n);

int main()
{
    //Defini do vetor e variáveis.
    int vet[MAX], i, n;

    /*A função srand(time(NULL)) inicializa o gerador de números aleatórios com um valor de 'semente',
    com o parâmetro time(NULL) é então calculado um valor como sendo o total de segundos passados desde
    1 de janeiro de 1970 até a data atual. Com isso, a cada execução o valor da 'semente' será diferente.*/
    srand(time(NULL));

    printf("Gerando números aleatórios!\n\n");
    for (i = 0; i < MAX; i++){
        //Preenche o vetor com números aleatóriamente de 0 a 100.
        vet[i] = rand() % 100;
        printf("%d\t--->  no índice  --->\t[%d]\n", vet[i], i);
    }

    // Chama a função procurar.
    n = procurar();

    // Chama a função busca_linear.
    busca_linear(vet, n);

    // Chama a função busca_linear_melhorada.
    busca_linear_melhorada(vet, n);

    int array[LEN] = {3, 1, 4, 7, 10,
              20, 17, 19, 15, 16,
              18, 2, 5, 6, 8,
              9, 11, 13, 12, 14};
    // Chama a função busca_linear_com_sentinela.
    printf("Index: %d\n", sentinel_linear_search(n, array, LEN));
    //busca_linear_com_sentinela(vet, n, MAX);

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
        else{
            printf("\nElemento não foi encontrado!!!");
        }
        msleep(200);
    }
    printf("\n\nTodos os índices percorridos!");

    
}

// Função para buscar linear melhorada.
int busca_linear_melhorada(int v[], int num)
{
    //Defini variáveis.
    int i;

    printf("\n####################");
    printf("\nBUSCA LINEAR MELHORADA");
    printf("\n####################\n\n");

    // Busca o elemento no vetor.
    for (i = 0; i < MAX; i++){
        //printf("\nProcurando elemento %d no índice [%d]", num, i);
        if(v[i] == num){
            //printf("\n\nElemento encontrado!!!");
            break;
        }
        msleep(200);
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

// Função para buscar linear com sentinela.
/* Recebe um número inteiro n >= 0, um vetor de números inteiros v[0..n-1] e um número inteiro x e devolve k no intervalo
[0, n-1] tal que v[k] == x. Se tal k não existe, devolve n */
int busca_linear_com_sentinela(int v[], int num, int ultimo)
{
    printf("\n####################");
    printf("\nBUSCA LINEAR COM SENTINELA");
    printf("\n####################\n\n");

    //Defini variáveis.
    int i, ul;
    

    // Sentinela.
    ul = v[ultimo];
    v[ultimo] = num;

    // Busca o elemento no vetor.
    while(v[i] != num){
        i++;
    }

    //v[ultimo] = ul;
    v[i] == num ? i : -1;
    if(v[i] == num){
        printf("\n\nElemento %d encontrado no índice [%d]\n", num, i);
    }
    else{
        printf("Elemento não encontrado!");
    }
}

int sentinel_linear_search(int key, int *arr, int n)
{
    int last_value, i;

    /* considering that n is the real size of the array */
    if (--n < 1)
        return -1;

    last_value = arr[n];

    /* set array last member as the key */
    arr[n] = key;

    i = 0;
    while (arr[i] != key)
        ++i;

    /* recover the real array last member */
    arr[n] = last_value;

    return (arr[i] == key) ? i : -1;
}
