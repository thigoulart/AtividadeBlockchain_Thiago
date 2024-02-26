#include "hashtable.h"
#include <iostream>
using namespace std;

Hash::Hash(int max) {
    length = 0;
    max_items = max;
    structure = new Produto[max_items];
}

Hash::~Hash() {
    delete[] structure;
}

bool Hash::isFull() const {
    return (length == max_items);
}

int Hash::getLength() const {
    return length;
}

void Hash::retrieveItem(Produto &produto, bool &found) {
    int location = getHash(produto);
    Produto aux = structure[location];
    if (produto.getId() != aux.getId()) {
        found = false;
    } else {
        found = true;
        produto = aux;
    }
}

void Hash::insertItem(Produto produto) {
    int location = getHash(produto);
    int originalLocation = location;

    // Tratamento de colisões
    while (structure[location].getId() != -1) {
        location++;
        if (location == originalLocation) {
            cout << "A tabela hash está cheia. Não é possível inserir o produto." << endl;
            return;
        }
        if (location == max_items) {
            location = 0;
        }
    }

    structure[location] = produto;
    length++;
}

void Hash::deleteItem(Produto produto) {
    int location = getHash(produto);
    structure[location] = Produto();
    length--;
}

void Hash::print() {
    for (int i = 0; i < max_items; i++) {
        cout << i << ":" << structure[i].getId() << ", " << structure[i].getProduto() << endl;
    }
}

int Hash::getHash(Produto produto) {
    return produto.getId() % max_items;
}
