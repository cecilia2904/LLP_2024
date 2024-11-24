#include <stdio.h>

int main() {
    int meses, casais_iniciais, casais_adultos, casais_filhotes, total_casais;
    int i = 1;  // contador de meses

    // Entrada de dados
    printf("Digite a quantidade inicial de casais de coelhos: ");
    scanf("%d", &casais_iniciais);
    printf("Digite a quantidade de meses: ");
    scanf("%d", &meses);

    // Inicialização
    casais_adultos = casais_iniciais;  // inicialmente, todos os casais são adultos
    casais_filhotes = 0;               // não há filhotes no início
    total_casais = casais_iniciais;     // total inicial é igual ao número de casais fornecido

    // Loop para calcular a quantidade de casais de coelhos a cada mês
    while (i <= meses) {
        int novos_filhotes = casais_adultos;  // cada casal adulto gera um casal de filhotes
        casais_adultos += casais_filhotes;    // filhotes do mês passado viram adultos
        casais_filhotes = novos_filhotes;     // novos filhotes são os gerados neste mês
        total_casais = casais_adultos + casais_filhotes;  // atualiza o total de casais

        i++;  // próximo mês
    }

    // Saída do resultado
    printf("Apos %d meses, voce tera %d casais de coelhos.\n", meses, total_casais);

  
}
