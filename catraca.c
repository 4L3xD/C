# include <stdio.h>

void main(){
    int numeroDeParadas = 5;
    char nomeEstacao[5][21] = {"Campinas", "São Paulo", "São José dos Campos", "Resende", "Rio de Janeiro"};
    int fluxoEstacao[][2] = {{}, {}, {}, {}, {}};
    int passageiroIn, passageiroOut, sumIn = 0, sumOut = 0;    

    printf("\nTrajeto Campinas-Rio 8h\n");

    for (int index = 0; index < numeroDeParadas; index++) {
        printf("\nEstação %d: %s", index, nomeEstacao[index]);
        printf("\nQuantos passageiros embarcaram: ");
        scanf("%d", &fluxoEstacao[index][0]);
        
        sumIn += fluxoEstacao[index][0];

        printf("\nQuantos passageiros desembarcaram: ");
        scanf("%d", &fluxoEstacao[index][1]);
        
        sumOut += fluxoEstacao[index][1];
        // sumOut = sumOut + fluxoEstacao[index][1];

    }
    printf("___________________________________________");
    printf("\nTotal de passageiros transportados: %d\n", sumIn);

    printf("\nCirculação de passageiros por estação:");
    for (int index = 0; index < numeroDeParadas; index++) {
        printf("\nEstação %d: %d ", index, fluxoEstacao[index][0] + fluxoEstacao[index][1]);
    }
    printf("\n");

    int fluxoTotal = 0;
    printf("\nPassageiros transportados por estação:");
    for (int index = 0; index < numeroDeParadas; index++) {
        fluxoTotal += fluxoEstacao[index][0] - fluxoEstacao[index][1];
        printf("\nEstação %d: %d ", index, fluxoTotal);
    }

    printf("\n\nDiferença entre Embarque-Desembarque: %d\n", sumIn - sumOut);

}