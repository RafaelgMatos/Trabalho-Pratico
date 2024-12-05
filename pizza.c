#include <stdio.h>
#include <string.h>
#include "pizza.h"

Pizza cardapio[MAX_PIZZAS];
int totalPizzas = 0;

void adicionarPizza() {
    if (totalPizzas >= MAX_PIZZAS) {
        printf("Limite de pizzas atingido!\n");
        return;
    }
    Pizza nova;
    nova.id = totalPizzas + 1;
    printf("Nome da pizza: ");
    scanf(" %[^\n]", nova.nome);
    printf("Tamanho (P/M/G): ");
    scanf(" %c", &nova.tamanho);
    printf("Preço base: ");
    scanf("%f", &nova.preco);
    nova.qtdIngredientes = 0; // Inicial sem ingredientes
    cardapio[totalPizzas++] = nova;
    printf("Pizza adicionada com sucesso!\n");
}

void listarPizzas() {
    for (int i = 0; i < totalPizzas; i++) {
        Pizza p = cardapio[i];
        printf("ID: %d, Nome: %s, Tamanho: %c, Preço: %.2f\n", p.id, p.nome, p.tamanho, p.preco);
    }
}

void editarPizza() {
    int id;
    printf("ID da pizza para editar: ");
    scanf("%d", &id);
    if (id <= 0 || id > totalPizzas) {
        printf("Pizza não encontrada!\n");
        return;
    }
    Pizza *p = &cardapio[id - 1];
    printf("Novo nome: ");
    scanf(" %[^\n]", p->nome);
    printf("Novo tamanho (P/M/G): ");
    scanf(" %c", &p->tamanho);
    printf("Novo preço base: ");
    scanf("%f", &p->preco);
    printf("Pizza editada com sucesso!\n");
}

void removerPizza() {
    int id;
    printf("ID da pizza para remover: ");
    scanf("%d", &id);
    if (id <= 0 || id > totalPizzas) {
        printf("Pizza não encontrada!\n");
        return;
    }
    for (int i = id - 1; i < totalPizzas - 1; i++) {
        cardapio[i] = cardapio[i + 1];
    }
    totalPizzas--;
    printf("Pizza removida com sucesso!\n");
}
