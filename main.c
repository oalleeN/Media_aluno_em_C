#include <stdio.h>
/* 
- Obter notas
- Calcular media
- Verificar se o aluno foi reprovado ou aprovado

- Se a média for >= 7, aprovado!
- Se não, reprovado!
*/
int main(void) {
    // declaração das variáveis
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    // verifica se o aluno foi aprovado ou reprovado
    media = (nota1 + nota2) / 2.0;

    if (media >= 7.0) {
        printf("Aprovado!\n");
    } else { 
        printf("Reprovado!\n");
    }
    
    printf("Sua media foi: %.1f", media);

    return 0;
}