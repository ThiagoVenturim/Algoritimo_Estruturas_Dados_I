/*. (Exemplo com solução) Crie uma struct chamada Pessoa com os campos nome (string
de até 50 caracteres) e idade (inteiro). Crie uma função chamada imprimirPessoa que
receba uma pessoa como parâmetro e imprima seus dados. No programa principal, leia
os dados de uma pessoa, armazene na struct e chame a função para imprimir.
*/

#include <stdio.h>
typedef struct{
    char nome [50];
    int idade;
}Pessoa;

void imprimirPessoas(Pessoa P){
    printf("Nome: %s\n", P.nome);
    printf("Idade: %d\n", P.idade);
}



int main(){
    Pessoa p1;
    printf(" Digite o nome da pessoa e sua idade");
    fgets(p1.nome, 50, stdin);
    printf("Digite a idade da pessoa: ");
    scanf("%d", &p1.idade);
    imprimirPessoas(p1);
return 0;
}
