//                                                                                  Kenozos
//adicionaremos 2 biblotecas:
#include <stdio.h>
#include <stdlib.h>

//aqui começamos um novo comando:
int main ()
{
    //declarando 3 variaveis:
    int A, B, X;
    
    //imprimindo uma pergunta:
    printf("\ndigite um valor:");
    //escaniado a resposta:
    scanf("%d", &A);
    

    //a mesma coisa aqui.
    printf("\ndigite um valor:");
    //aqui também
    scanf("%d", &B);
    //dica: %d é para scaniar a resposta das perguntas que nesse caso são números: d é de int (eu sei não faz sentido XD).

    //A varialvel X é o valor da varialvel A mais ao B.
    X = A + B;
    
    //aqui imprimimos os valores da variavel A e B e dopis a variavel X. 
    printf("\na soma de %d + %d é igual a %d.", A, B, X);
    
    //aqui finalisamos o código!
    return 0;
}
//                                                                                  Kenozos                                  
