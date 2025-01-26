#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "Portuguese_Brazil");

    char continuar = 's';

  do {

    system("cls");      //limpa o terminal
    printf("\n================================\n");
    printf("         - CALCULADORA -\n");
    printf("================================\n");

   long int numeroUm;
   long int numeroDois;
   char tecla;

   printf("\nDigite o primeiro número: ");
   scanf("%ld", &numeroUm);

   getchar();

   printf("\nDigite o segundo número: ");
   scanf("%ld", &numeroDois);

   getchar();                           //limpa o buffer

   printf("\nEscolha o método a ser utilizado:\n");
   printf("Digite ' + ' para somar\n");
   printf("Digite ' - ' para subtrair\n");
   printf("Digite ' * ' para multiplicação\n");
   printf("Digite ' / ' para divisão\n");
   printf("Digite ' r ' para obter o valor da raiz quadrada dos números\n\n");

   printf("Digite a tecla desejada: ");
   tecla = getchar();
   double resultado;
   

   if(tecla == '+') {
    printf("\n===========================================================\n");
    printf("\n- A soma de %ld + %ld é: %ld\n", numeroUm, numeroDois, numeroUm + numeroDois);   
  }

  else if(tecla == '-') {
    printf("\n===========================================================\n");
    printf("\n- A subtração de %ld - %ld é: %ld\n", numeroUm, numeroDois, numeroUm - numeroDois);
  }

  else if(tecla == '*'){
     printf("\n===========================================================\n");
     printf("\n- A multiplicação de %ld por %ld é: %ld\n", numeroUm, numeroDois, numeroUm * numeroDois);
  } 

  else if(tecla == '/') {
    if (numeroDois == 0 || numeroUm == 0) {
        printf("Erro! não é possível dividir por zero");
    } else {
                printf("\n===========================================================\n");
                resultado = (double) numeroUm / numeroDois;
                if (resultado == (int)resultado) {
                    printf("\n- A divisão de %ld por %ld é: %.0f\n", numeroUm, numeroDois, resultado);
                } else {
                    printf("\n- A divisão de %ld por %ld é: %.6f\n", numeroUm, numeroDois, resultado);
                }

            }
  }

    else if(tecla == 'r') {
            if (numeroUm < 0 || numeroDois < 0) {
                printf("Erro! Não é possível calcular a raiz quadrada de números negativos.\n");
            } else {
                printf("\n===========================================================\n");
                resultado = sqrt(numeroUm);
                if (resultado == (int)resultado) {
                    printf("\n- A raiz quadrada de %ld é: %.0f\n", numeroUm, resultado);
                } else {
                    printf("\n- A raiz quadrada de %ld é: %.6f\n", numeroUm, resultado);
                }

                resultado = sqrt(numeroDois);
                if (resultado == (int)resultado) {
                    printf("\n- A raiz quadrada de %ld é: %.0f\n", numeroDois, resultado);
                } else {
                    printf("\n- A raiz quadrada de %ld é: %.6f\n", numeroDois, resultado);

                }
            }
        }
        else {
            printf("Opção inválida! Por favor, escolha uma das opções listadas.\n");
        }
    printf("\n===========================================================\n");
    printf("\nDeseja abrir um novo comando? S/N: ");
    scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("\n\n==========================================\n");
    printf("------------------------------------------\n");
    printf("\nObrigado por ter utilizado a calculadora!!\n");
    printf("\n------------------------------------------\n");
    printf("==========================================\n\n\n");

}

