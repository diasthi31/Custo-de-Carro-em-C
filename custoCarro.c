#include <stdio.h>

double lucroDistribuidor(double precoFabrica, int percentualLucro) {
    return precoFabrica * (percentualLucro / 100.0);
}

double valorImpostos(double precoFabrica, int percentualImposto) {
    return precoFabrica * (percentualImposto / 100.0);
}

double precoFinal(double precoFabrica, int lucroDistribuidor, double valorImpostos) {
    return precoFabrica + lucroDistribuidor + valorImpostos;
}

int main() {
    double precoFabrica, percentualLucro, percentualImposto;    
    
    printf("Qual o valor de fábrica do veículo? ");
    scanf("%lf", &precoFabrica);
    printf("Qual o percentual de lucro do distribuidor? ");
    scanf("%lf", &percentualLucro);
    printf("Qual o percentual de imposto? ");
    scanf("%lf", &percentualImposto);

    double lucroDis = lucroDistribuidor(precoFabrica, percentualLucro);
    double valorIm = valorImpostos(precoFabrica, percentualImposto);
    double precoFi = precoFinal(precoFabrica, lucroDis, valorIm);

    printf("------------------------------------------------\n");
    printf("------------------------------------------------\n");
    printf("Preço de fábrica do veículo         : %.2lf\n", precoFabrica);
    printf("Percentual de lucro do distribuidor : %.2lf%%\n", percentualLucro);
    printf("Lucro do distribuidor               : %.2lf\n", lucroDis);
    printf("Percentual de impostos              : %.2lf%%\n", percentualImposto);
    printf("Valor dos impostos                  : %.2lf\n", valorIm);
    printf("Preço final                         : %.2lf", precoFi);

    return 0;
}