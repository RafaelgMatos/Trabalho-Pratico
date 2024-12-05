#ifndef PIZZA_H
#define PIZZA_H

#include "ingrediente.h"

#define MAX_INGREDIENTES 10
#define MAX_PIZZAS 50

typedef struct {
    int id;
    char nome[50];
    char tamanho;
    float preco;
    Ingrediente ingredientes[MAX_INGREDIENTES];
    int qtdIngredientes;
} Pizza;

void adicionarPizza();
void listarPizzas();
void editarPizza();
void removerPizza();

#endif
