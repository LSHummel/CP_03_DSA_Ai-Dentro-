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

// Menu visa
void menu_visa(void){
    printf("========================\n");
    printf("        Cartao Visa\n");
    printf("========================\n");
    printf("1 - Saldo da conta\n");
    printf("2 - Depositar\n");
    printf("3 - Retirar\n");
    printf("4 - Sair\n");
}
// Menu master card
void menu_master(void){
    printf("========================\n");
    printf("   Cartao Master Card\n");
    printf("========================\n");
    printf("1 - Saldo da conta\n");
    printf("2 - Depositar\n");
    printf("3 - Retirar\n");
    printf("4 - Sair\n");
}
// Menu elo
void menu_elo(void){
    printf("========================\n");
    printf("       Cartao Elo\n");
    printf("========================\n");
    printf("1 - Saldo da conta\n");
    printf("2 - Depositar\n");
    printf("3 - Retirar\n");
    printf("4 - Sair\n");
}






// Código Principal

int main(){
    // Escolha do case no menu
    int opcao_menu = 0;
    int opcao_card = 0;
    // Saldo de cada cartão
    float saldo_da_conta_visa = 2532.0; 
    float saldo_da_conta_master = 2097.0;
    float saldo_da_conta_elo = 3151.0;
    // Depósito e Saque da conta
    float deposito = 0;
    float saque = 0;


// Loop do menu Cartão
while(opcao_card != 4){
    card();
    printf("Escolher opcao: ");
    scanf("%d",&opcao_card);
    switch(opcao_card){

        // Case do menu Visa
        case 1:
            // Loop do menu Visa
            opcao_menu = 0;
        
            while(opcao_menu != 4){
                menu_visa();
                printf("Escolha uma opcao: ");
                scanf("%d", &opcao_menu);

                switch(opcao_menu){
                    case 1:
                        printf("Seu saldo da conta e: %.2f\n",saldo_da_conta_visa);
                        break;

                    case 2:
                        printf("Digite quanto deseja depositar: ");
                        scanf("%f", &deposito);

                        if(deposito <= 0){
                            printf("Valor invalido\n");
                            break;
                        }

                        saldo_da_conta_visa = soma(saldo_da_conta_visa, deposito);
                        printf("Novo saldo: %.2f\n", saldo_da_conta_visa);
                        break;

                    case 3:
                        printf("Digite quanto deseja sacar: ");
                        scanf("%f", &saque);

                        if(saque <= 0){
                            printf("Valor invalido\n");
                            break;
                        }

                        if(saque > saldo_da_conta_visa){
                            printf("Saldo insuficiente\n");
                            break;
                        }

                        saldo_da_conta_visa = sub(saldo_da_conta_visa, saque);
                        printf("Novo saldo: %.2f\n", saldo_da_conta_visa);
                        break;

                    case 4:
                        printf("Saindo do menu...\n");
                        break;

                    default:
                        printf("Opcao invalida\n");
                }
            }    
            break;
        // Case do menu Master Card
        case 2:
            // Loop do menu Master Card
            opcao_menu = 0;

            while(opcao_menu != 4){
                menu_master();
                printf("Escolha uma opcao: ");
                scanf("%d", &opcao_menu);

                switch(opcao_menu){
                    case 1:
                        printf("Seu saldo da conta e: %.2f\n",saldo_da_conta_master);
                        break;

                    case 2:
                        printf("Digite quanto deseja depositar: ");
                        scanf("%f", &deposito);

                        if(deposito <= 0){
                            printf("Valor invalido\n");
                            break;
                        }

                        saldo_da_conta_master = soma(saldo_da_conta_master, deposito);
                        printf("Novo saldo: %.2f\n", saldo_da_conta_master);
                        break;

                    case 3:
                        printf("Digite quanto deseja sacar: ");
                        scanf("%f", &saque);

                        if(saque <= 0){
                            printf("Valor invalido\n");
                            break;
                        }

                        if(saque > saldo_da_conta_master){
                            printf("Saldo insuficiente\n");
                            break;
                        }

                        saldo_da_conta_master = sub(saldo_da_conta_master, saque);
                        printf("Novo saldo: %.2f\n", saldo_da_conta_master);
                        break;

                    case 4:
                        printf("Saindo do menu...\n");
                        break;

                    default:
                        printf("Opcao invalida\n");
                    }
                }
                break;    
        // Case do menu Elo
        case 3:
            // Loop menu Elo
            opcao_menu = 0;
            
            while(opcao_menu != 4){
                menu_elo();
                printf("Escolha uma opcao: ");
                scanf("%d", &opcao_menu);

                switch(opcao_menu){
                    case 1:
                        printf("Seu saldo da conta e: %.2f\n",saldo_da_conta_elo);
                        break;

                    case 2:
                        printf("Digite quanto deseja depositar: ");
                        scanf("%f", &deposito);

                        if(deposito <= 0){
                            printf("Valor invalido\n");
                            break;
                        }

                        saldo_da_conta_elo = soma(saldo_da_conta_elo, deposito);
                        printf("Novo saldo: %.2f\n", saldo_da_conta_elo);
                        break;

                    case 3:
                        printf("Digite quanto deseja sacar: ");
                        scanf("%f", &saque);

                        if(saque <= 0){
                            printf("Valor invalido\n");
                            break;
                        }

                        if(saque > saldo_da_conta_elo){
                            printf("Saldo insuficiente\n");
                            break;
                        }

                        saldo_da_conta_elo = sub(saldo_da_conta_elo, saque);
                        printf("Novo saldo: %.2f\n", saldo_da_conta_elo);
                        break;

                    case 4:
                        printf("Saindo do menu...\n");
                        break;

                    default:
                        printf("Opcao invalida\n");
                    }
                break;
            }
        }
    }

        



    return 0;
}