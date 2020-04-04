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

    printf("Total de passageiros transportados: %d\n", sumIn);

    printf("Circulação de passageiros por estação:\n");
    for (int index = 0; index < numeroDeParadas; index++) {
        printf("Estação %d: %d ", index, fluxoEstacao[index][0] + fluxoEstacao[index][1]);
    }

    int fluxoTotal = 0;
    printf("\nPassageiros transportados por estação:\n");
    for (int index = 0; index < numeroDeParadas; index++) {
        fluxoTotal += fluxoEstacao[index][0] - fluxoEstacao[index][1];
        printf("Estação %d: %d ", index, fluxoTotal);
    }

    printf("\nDiferença entre Embarque-Desembarque: %d", sumIn - sumOut);

}