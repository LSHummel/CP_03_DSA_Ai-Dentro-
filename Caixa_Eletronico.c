#include <stdio.h>

// Função de soma
float soma(float a, float b){
    return a + b;
}

// Função de subtração
float sub(float a, float b){
    return a - b;
}

// Menu de cartão
void card(void){
    printf("------Insira o seu cartao------\n");
    printf("1 - Visa\n");
    printf("2 - Master Card\n");
    printf("3 - Elo\n");
    printf("4 - Finalizar Operacao\n");
}

// Menu principal
void menu(void){
    printf("1 - Saldo da conta\n");
    printf("2 - Depositar\n");
    printf("3 - Retirar\n");
    printf("4 - Sair\n");
}

int main(){
    int opcao_menu = 0;
    int opcao_card = 0;
    float saldo_da_conta = 2532.0; 
    float deposito = 0;
    float saque = 0;

while(opcao_card != 4){
        card();
        printf("Escolher opcao: ");
        scanf("%d",&opcao_card);

            // Loop do menu principal
            while(opcao_menu != 4){
                menu();
                printf("Escolha uma opcao: ");
                scanf("%d", &opcao_menu);

                switch(opcao_menu){
                    case 1:
                        printf("Seu saldo da conta e: %.2f\n",saldo_da_conta);
                        break;

                    case 2:
                        printf("Digite quanto deseja depositar: ");
                        scanf("%f", &deposito);

                        if(deposito <= 0){
                            printf("Valor invalido\n");
                            break;
                        }

                        saldo_da_conta = soma(saldo_da_conta, deposito);
                        printf("Novo saldo: %.2f\n", saldo_da_conta);
                        break;

                    case 3:
                        printf("Digite quanto deseja sacar: ");
                        scanf("%f", &saque);

                        if(saque <= 0){
                            printf("Valor invalido\n");
                            break;
                        }

                        if(saque > saldo_da_conta){
                            printf("Saldo insuficiente\n");
                            break;
                        }

                        saldo_da_conta = sub(saldo_da_conta, saque);
                        printf("Novo saldo: %.2f\n", saldo_da_conta);
                        break;

                    case 4:
                        printf("Saindo do menu...\n");
                        break;

                    default:
                        printf("Opcao invalida\n");
                }
            }
             break;
    }

    return 0;
}