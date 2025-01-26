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

   printf("\nDigite o primeiro n�mero: ");
   scanf("%ld", &numeroUm);

   getchar();

   printf("\nDigite o segundo n�mero: ");
   scanf("%ld", &numeroDois);

   getchar();                           //limpa o buffer

   printf("\nEscolha o m�todo a ser utilizado:\n");
   printf("Digite ' + ' para somar\n");
   printf("Digite ' - ' para subtrair\n");
   printf("Digite ' * ' para multiplica��o\n");
   printf("Digite ' / ' para divis�o\n");
   printf("Digite ' r ' para obter o valor da raiz quadrada dos n�meros\n\n");

   printf("Digite a tecla desejada: ");
   tecla = getchar();
   double resultado;
   

   if(tecla == '+') {
    printf("\n===========================================================\n");
    printf("\n- A soma de %ld + %ld �: %ld\n", numeroUm, numeroDois, numeroUm + numeroDois);   
  }

  else if(tecla == '-') {
    printf("\n===========================================================\n");
    printf("\n- A subtra��o de %ld - %ld �: %ld\n", numeroUm, numeroDois, numeroUm - numeroDois);
  }

  else if(tecla == '*'){
     printf("\n===========================================================\n");
     printf("\n- A multiplica��o de %ld por %ld �: %ld\n", numeroUm, numeroDois, numeroUm * numeroDois);
  } 

  else if(tecla == '/') {
    if (numeroDois == 0 || numeroUm == 0) {
        printf("Erro! n�o � poss�vel dividir por zero");
    } else {
                printf("\n===========================================================\n");
                resultado = (double) numeroUm / numeroDois;
                if (resultado == (int)resultado) {
                    printf("\n- A divis�o de %ld por %ld �: %.0f\n", numeroUm, numeroDois, resultado);
                } else {
                    printf("\n- A divis�o de %ld por %ld �: %.6f\n", numeroUm, numeroDois, resultado);
                }

            }
  }

    else if(tecla == 'r') {
            if (numeroUm < 0 || numeroDois < 0) {
                printf("Erro! N�o � poss�vel calcular a raiz quadrada de n�meros negativos.\n");
            } else {
                printf("\n===========================================================\n");
                resultado = sqrt(numeroUm);
                if (resultado == (int)resultado) {
                    printf("\n- A raiz quadrada de %ld �: %.0f\n", numeroUm, resultado);
                } else {
                    printf("\n- A raiz quadrada de %ld �: %.6f\n", numeroUm, resultado);
                }

                resultado = sqrt(numeroDois);
                if (resultado == (int)resultado) {
                    printf("\n- A raiz quadrada de %ld �: %.0f\n", numeroDois, resultado);
                } else {
                    printf("\n- A raiz quadrada de %ld �: %.6f\n", numeroDois, resultado);

                }
            }
        }
        else {
            printf("Op��o inv�lida! Por favor, escolha uma das op��es listadas.\n");
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

