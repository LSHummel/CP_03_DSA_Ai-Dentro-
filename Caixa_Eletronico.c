#include <stdio.h>

void menu(void){
printf("1 - Saldo da conta\n");
printf("2 - Depositar\n");
printf("3 - Retirar\n");
printf("4 - Sair\n");
}

int main(){
int opcao = 0;

while(opcao != 4){
    menu();
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
        printf("1");
            break;
        case 2:
        printf("2");
            break;
        case 3:
        printf("3");
            break;
        default:




    }







    }
    return 0;
}