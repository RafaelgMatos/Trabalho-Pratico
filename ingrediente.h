#ifndef INGREDIENTE_H
#define INGREDIENTE_H

#define MAX_INGREDIENTES 50

typedef struct {
    int id;
    char nome[50];
    float preco;
} Ingrediente;

void adicionarIngrediente();
void listarIngredientes();
void editarIngrediente();
void removerIngrediente();

#endif
