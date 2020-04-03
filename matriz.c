# include <stdio.h>

void main(){
    const int bimestresAnuais = 4;
    const int  numerosAlunos = 4;

    float notasAlunos[numerosAlunos][bimestresAnuais];
    float mediasAlunos[numerosAlunos];

    float media = 0;

    printf("Inisira as 4 notas do aluno 1:\n");

    for (int aluno = 0; aluno < numerosAlunos; aluno++)
    {
        for(int notas = 0; notas < bimestresAnuais; ++notas){
            scanf("%f", &notasAlunos[aluno][notas]);
            media += notasAlunos[aluno][notas];
        }
        mediasAlunos[aluno] = media / bimestresAnuais;
        media = 0;
        printf("Insira as 4 notas do aluno %i: \n", aluno + 2);
    }

    for(int aluno = 0; aluno < numerosAlunos; ++aluno){
        printf("A media do aluno %i é %.2f\n", aluno +1, mediasAlunos[aluno]);
    }
    
}