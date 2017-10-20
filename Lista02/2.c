#include <stdio.h>

float volume(float largura, float comprimento, float altura)
{
    float volume;
    volume=largura*comprimento*altura;
    return volume;
}

int main() {
    float comprimento, altura, largura;
    printf("Insira os valores de largura, comprimento e altura (separados com espaço): ");
    scanf("%f %f %f", &largura, &comprimento, &altura);
    printf("%.2f\n", volume(largura, comprimento, altura)); 
}
