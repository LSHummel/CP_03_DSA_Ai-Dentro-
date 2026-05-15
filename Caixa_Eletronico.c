#include <stdio.h>

void menu(void){
printf("1 - Saldo da conta\n");
printf("2 - Depositar\n");
printf("3 - Retirar\n");
printf("4 - Sair\n");
}

int main(){
int opcao = 0;
float saldo_da_conta = 2532.0; 
float deposito = 0;
float saque = 0;
//Função de soma 
float soma(float a, float b){
    return a + b;
}
//Função de subtração
float sub(float a, float b){
    return a - b;
}

while(opcao != 4){
    menu();
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
        printf("Seu saldo da conta e: %.2f\n",saldo_da_conta);
        break;

        case 2:
        printf("Digite quanto deseja depositar em sua conta: \n");
        scanf("%f", &deposito);
        if(deposito <= 0){
            printf("Valor invalido, digite novamente");
        }
        float novo_saldo = soma(saldo_da_conta, deposito);
        printf("O novo saldo da sua conta e: %.2f\n", novo_saldo);
            
        break;
        case 3:
        printf("Digite quanto deseja retirar da sua conta: \n");
        scanf("%f", &saque);
        if(saque <= 0){
            printf("Valor invalido, digite novamente");
        }
        float resultado = sub(saldo_da_conta, saque);
        printf("O novo saldo da sua conta e: %.2f\n", resultado);
            break;
        default:

        }
        
    }
    return 0;
}