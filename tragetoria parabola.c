#include <stdio.h>
#include <math.h>

int main(){
    
    double posicaoInicial, velocidadeInicial, anguloLancamento, distanciaPercorrida;
    
    printf("Escreva as seguintes informacoes:\n");
    printf("Altura relativa ao solo do lancamento (m): ");
        scanf("%lf", &posicaoInicial);
    printf("Velocidade inicial (m/s): ");
        scanf("%lf", &velocidadeInicial);
    printf("Angulo de lancamento (graus): ");
        scanf("%lf", &anguloLancamento);
    
    double anguloLancamentoRad = anguloLancamento * M_PI / 180.0;
    
    if(posicaoInicial == 0){
        distanciaPercorrida = (velocidadeInicial * velocidadeInicial * sin(2 * anguloLancamentoRad)) / 9.81;
        printf("Distancia percorrida: %.2f metros\n", distanciaPercorrida);
    } else {
        distanciaPercorrida = (velocidadeInicial * cos(anguloLancamentoRad) / 9.81) * 
                              (velocidadeInicial * sin(anguloLancamentoRad) + 
                              sqrt(pow(velocidadeInicial * sin(anguloLancamentoRad), 2) + 2 * 9.81 * posicaoInicial));
        printf("Distancia percorrida: %.2f metros\n", distanciaPercorrida);
    }
    
    return 0;
}

