#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(void) {
  int portaPremiada, portaEscolhida, portaVazia;
  char opt;
  srand(time(NULL));
  portaPremiada = rand() % 3 + 1;
  //printf("%d\n", portaPremiada);
  // escolher porta
  do {
    printf("Apresentador: Qual porta deseja escolher (1, 2, 3)\n");
    scanf("%d%*c", &portaEscolhida);
    printf("Tem certeza? (s/n)\n\n");
    scanf("%c%*c", &opt);
  } while (opt == 'n');

  // tirar uma porta
  if (portaPremiada == 1) {
    do {
      portaVazia = rand() % 3 + 1;
    } while (portaVazia == portaEscolhida || portaVazia == portaPremiada);
    printf("\nApresentador: Uma das portas vazias foi revelada e foi a de número %d\n\n", portaVazia);
  } else if (portaPremiada == 2) {
    do {
      portaVazia = rand() % 3 + 1;
    } while (portaVazia == portaEscolhida || portaVazia == portaPremiada);
    printf("Apresentador: Uma das portas vazias foi revelada e foi a de número %d\n\n", portaVazia);
  } else if (portaPremiada == 3) {
    do {
      portaVazia = rand() % 3 + 1;
    } while (portaVazia == portaEscolhida || portaVazia == portaPremiada);
    printf("Apresentador: Uma das portas vazias foi revelada e foi a de número %d\n\n", portaVazia);
  }
  // dar a opção de trocar de porta

  printf("Apresentador: A porta que você escolheu continua sendo a de número %d\n\n", portaEscolhida);
  printf("Apresentador: Gostaria de trocar de porta? (s/n)\n\n");
  scanf("%c%*c", &opt);
  
  if(portaEscolhida == portaPremiada && opt == 's'){
    printf("\nApresentador: A porta premiada era a de número %d\n\nVOCE PERDEU!!!", portaPremiada);
  }else if (portaEscolhida == portaPremiada && opt == 'n'){
    printf("\nApresentador: A porta premiada era a de número %d\n\nVOCE VENCEU!!!", portaPremiada);
  }else if (portaEscolhida != portaPremiada && opt == 'n'){
    printf("\nApresentador: A porta premiada era a de número %d\n\nVOCE PERDEU!!!", portaPremiada);
  }else if (portaEscolhida != portaPremiada && opt == 's'){
    printf("\nApresentador: A porta premiada era a de número %d\n\nVOCE VENCEU!!!", portaPremiada);
  }
  
  return 0;
}