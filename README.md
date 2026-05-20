# CP03 - Caixa Eletrônico

## Integrantes
- Leonardo Soares Rodrigues
- Lucas Seiji Hummel
- Matheus Pimenta Martini


## Documentação: Sistema de Atendimento de Terminal Bancário
Este documento apresenta a lógica de funcionamento, a estrutura técnica e o detalhamento do código desenvolvido em linguagem C para o sistema de simulação de um terminal bancário (caixa eletrônico) multi-cartões.

1. Visão Geral do Sistema
O programa simula a interface de um totem ou terminal de autoatendimento bancário. Ele permite ao utilizador selecionar entre diferentes bandeiras de cartão de crédito/débito, consultar os saldos específicos de cada conta, realizar operações de depósito e efetuar saques, garantindo a validação dos valores inseridos para cada transação.

2. Fluxo de Lógica (Passo a Passo)
O sistema funciona baseado em ciclos principais de repetição aninhados e em estruturas de decisão de múltipla escolha:
Ciclo Principal do Cartão (while): Mantém o programa ativo e solicita a inserção do cartão até que a opção de "Finalizar Operação" (4) seja escolhida no menu principal.
Interface de Menus (Funções card, menu_visa, menu_master e menu_elo): Exibe visualmente na tela as opções disponíveis para o utilizador de acordo com o contexto atual.
Captura de Dados (scanf): Lê as entradas numéricas fornecidas pelo utilizador para navegar nos menus e informar os valores monetários.
Processamento de Seleção (switch-case aninhados): O primeiro bloco direciona o fluxo para a bandeira de cartão selecionada. O segundo bloco (interno) processa a operação bancária escolhida para aquele cartão específico.

3. Detalhamento das Opções
Opção Principal
Sub-Opção (Menu do Cartão)
Descrição da Lógica
Validações
 
1 - Visa / 2 - MasterCard / 3 - Elo
1 - Saldo da conta
Exibe o saldo atual em conta correspondente à bandeira do cartão selecionado.
Nenhuma (apenas leitura do valor em memória).

1 - Visa / 2 - MasterCard / 3 - Elo
2 - Depositar
Soma o valor informado pelo usuário ao saldo atual da conta utilizando a função matemática de soma.
O valor do depósito deve ser estritamente maior que zero (> 0).

1 - Visa / 2 - MasterCard / 3 - Elo
3 - Retirar
Subtrai o valor informado pelo usuário do saldo atual da conta utilizando a função matemática de subtração.
O valor deve ser maior que zero (> 0) e não pode ser superior ao saldo disponível em conta (evita saldo negativo).

1 - Visa / 2 - MasterCard / 3 - Elo
4 - Sair
Encerra o loop interno do cartão atual e retorna para o menu de seleção de cartões.
Nenhuma.
4 - Finalizar Operação
-
Quebra o ciclo principal do programa, finalizando a execução do terminal bancário.
Nenhuma.


4. Funções e Operações Matemáticas
Para a execução das transações financeiras com precisão, o código isola a lógica aritmética em funções modulares que operam com ponto flutuante:
Função de Soma (soma): Retorna o resultado da operação matemática $a + b$. Utilizada para atualizar o saldo após depósitos bem-sucedidos.
Função de Subtração (sub): Retorna o resultado da operação matemática $a - b$. Utilizada para deduzir o valor sacado do saldo em conta.

5. Notas Técnicas e Observações
A arquitetura e os padrões adotados no código apresentam os seguintes destaques técnicos:
Modularização de Menus: O uso de funções do tipo void (como menu_visa() e card()) limpa a função main e facilita a manutenção visual do terminal.
Tratamento de Tipos de Dados: O uso do tipo float para os saldos e transações garante que valores centavos não sejam perdidos nas operações aritméticas.
Escopo de Variáveis Temporárias: As variáveis deposito e saque são declaradas no escopo geral da main, permitindo que sejam reaproveitadas por todas as bandeiras de cartões sem redundância de memória.
Inicialização de Saldos: O sistema simula um banco de dados real ao inicializar cada cartão com saldos pré-definidos distintos: Visa (R$ 2532.00), MasterCard (R$ 2097.00) e Elo (R$ 3151.00).

## 
