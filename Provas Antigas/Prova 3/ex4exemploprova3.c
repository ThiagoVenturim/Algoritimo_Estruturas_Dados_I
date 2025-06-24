#include <stdio.h>
#include <stdlib.h>

#define MAX 5


typedef struct{
    char nome[50];
    int matricula;
    float notas[3];
}Aluno;

void CalcularMedia(int tamanho, Aluno *pessoa, float *media){
    for(int i = 0; i<tamanho; i++){
    float soma=0;
        for(int j=0 ; j<3 ; j++ ){
            soma+= (pessoa+i)->notas[j];
        }
    *(media+i)= soma/3;
    }
return ;
}

void MaiorMenor( int tamanho, float *media, int *maior, int *menor, Aluno *pessoa){ 
    for(int i=0; i<tamanho ; i++){
        if( *(media+i)>= 6 ){ printf(" Aluno %s Aprovado", (pessoa+i)->nome);
        }else{ printf(" Aluno %s Reprovado", (pessoa+i)->nome); }
        
        if( *(media+i) > *(media + *maior)){
            *maior= i;
        }else if(*(media+i) < *(media + *menor))
            *menor=i;
    }

    printf("A maior media foi o aluno %s com %.2f \n", (pessoa+ *maior)->nome, *(media+*maior));
    printf("A menor media foi o aluno %s com %.2f \n", (pessoa+ *menor)->nome, *(media+*menor));

}

int main(){
    int maior=0, menor=0;
    Aluno *pessoa= (Aluno*)malloc(MAX * sizeof(Aluno));
    float *media= (float*)malloc(MAX * sizeof(float));
    if(pessoa==NULL || media==NULL ){
        printf("Erro ao alocar");
        return 1;
    }
    for(int i=0; i<MAX; i++){
        printf("----Aluno %d----", i);
        printf("\nDigite o nome do aluno: ");
        scanf("%[^\n]", pessoa[i].nome);
        printf("Digite a matricula do aluno: ");
        scanf("%d", &pessoa[i].matricula );
        printf("Digite as notas do aluno: ");
        scanf("%f %f %f", &pessoa[i].notas[0] , &pessoa[i].notas[1], &pessoa[i].notas[2]);
        fflush(stdin);
    }
    CalcularMedia(MAX, pessoa, media);
    MaiorMenor(MAX, media, &maior, &menor, pessoa);
    

free(pessoa);
free(media);
return 0;
}