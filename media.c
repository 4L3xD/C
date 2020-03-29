#include <stdio.h>

void main(){

    float n1, n2, n3, n4;

    printf("\nVamos calcular a média de quatro de suas notas.\nUtilize ponto para separar os decimais!\n");

    printf("\nDigite o resultado da P1: \n");
    scanf("%f", &n1);

    printf("\nDigite o resultado da P2: \n");
    scanf("%f", &n2);

    printf("\nDigite o resultado da P3: \n");
    scanf("%f", &n3);
 
    printf("\nDigite o resultado da P4: \n");
    scanf("%f", &n4);

    float media = ((n1*2)+(n2*3)+(n3*4)+n4)/10;
    printf("\nMédia: %.1f\n", media);

    if(media >= 7.0){
        printf("\nAluno aprovado!\n");
    }
    if(media <= 5.0){
    printf("\nAluno reprovado!\n");
    }
    
    if(media > 5.0 && media <= 6.9){
        float exame;
        printf("\nAluno em exame!\n");
        printf("Digite a nota do exame: ");
        scanf("%f", &exame);
        printf("\nNota do exame: %.1f\n", exame);
        
        float mediaFinal = (media + exame)/2;
        if(mediaFinal >= 5.0){
            printf("\nAluno aprovado!\n");
            printf("\nMédia final: %.1f\n", mediaFinal);
        } else printf("\nAluno reprovado!\nMédia final: %.1f\n", mediaFinal);
    }
}