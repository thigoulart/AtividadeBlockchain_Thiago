#include "produto.h"

class Hash {
public:
    Hash(int max_items = 100);
    ~Hash();
    bool isFull() const;
    int getLength() const;

    void retrieveItem(Produto &produto, bool &found);
    void insertItem(Produto produto);
    void deleteItem(Produto produto);
    void print();

private:
    int getHash(Produto produto);
    int max_items;
    int length;
    Produto *structure;
};
