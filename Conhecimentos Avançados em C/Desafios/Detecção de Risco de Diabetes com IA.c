#include <stdio.h>

const char* obterDiagnostico(int idade, int concentracaoGlicose, float imc) {
    if (concentracaoGlicose < 120) {
        return "Você não corre risco de diabetes";
    } else if (concentracaoGlicose >= 120 && concentracaoGlicose <= 125 && imc > 27) {
        return "Você tem uma probabilidade de adquirir diabetes. Procure um médico";
    } else if (concentracaoGlicose >= 126) {
        return "É altamente recomendável que você procure um médico para avaliação";
    } else if (idade > 40) {
        return "Não tem diabetes. IMPORTANTE: cuide da sua saúde por estar acima dos 40 anos";
    } else {
        return "Você não corre risco de diabetes";
    }
}

int main() {
    int idade, concentracaoGlicose;
    float imc;

    scanf("%d", &idade);
    scanf("%d", &concentracaoGlicose);
    scanf("%f", &imc);

    const char* diagnostico = obterDiagnostico(idade, concentracaoGlicose, imc);
    printf("%s\n", diagnostico);

    return 0;
}
