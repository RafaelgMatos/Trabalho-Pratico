#include <stdio.h>
#include "pizza.h"
#include "ingrediente.h"

void menu() {
    int opcao;
    do {
        printf("\n1. Gerenciar Pizzas\n2. Gerenciar Ingredientes\n3. Sair\nEscolha: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                listarPizzas();
                break;
            case 2:
                listarIngredientes();
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 3);
}

int main() {
    menu();
    return 0;
}
