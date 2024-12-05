#include <stdio.h>
#include <string.h>
#include "ingrediente.h"

Ingrediente estoque[MAX_INGREDIENTES];
int totalIngredientes = 0;

void adicionarIngrediente() {
    if (totalIngredientes >= MAX_INGREDIENTES) {
        printf("Limite de ingredientes atingido!\n");
        return;
    }
    Ingrediente novo;
    novo.id = totalIngredientes + 1;
    printf("Nome do ingrediente: ");
    scanf(" %[^\n]", novo.nome);
    printf("Preço do ingrediente: ");
    scanf("%f", &novo.preco);
    estoque[totalIngredientes++] = novo;
    printf("Ingrediente adicionado com sucesso!\n");
}

void listarIngredientes() {
    for (int i = 0; i < totalIngredientes; i++) {
        Ingrediente ing = estoque[i];
        printf("ID: %d, Nome: %s, Preço: %.2f\n", ing.id, ing.nome, ing.preco);
    }
}

void editarIngrediente() {
    int id;
    printf("ID do ingrediente para editar: ");
    scanf("%d", &id);
    if (id <= 0 || id > totalIngredientes) {
        printf("Ingrediente não encontrado!\n");
        return;
    }
    Ingrediente *ing = &estoque[id - 1];
    printf("Novo nome: ");
    scanf(" %[^\n]", ing->nome);
    printf("Novo preço: ");
    scanf("%f", &ing->preco);
    printf("Ingrediente editado com sucesso!\n");
}

void removerIngrediente() {
    int id;
    printf("ID do ingrediente para remover: ");
    scanf("%d", &id);
    if (id <= 0 || id > totalIngredientes) {
        printf("Ingrediente não encontrado!\n");
        return;
    }
    for (int i = id - 1; i < totalIngredientes - 1; i++) {
        estoque[i] = estoque[i + 1];
    }
    totalIngredientes--;
    printf("Ingrediente removido com sucesso!\n");
}
