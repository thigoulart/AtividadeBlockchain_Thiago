#include <iostream>
#include "hashtable.h" 

using namespace std;

int main(){
  Hash produtosHash(10);
   int   ids[7]   = {
     12704, 31300, 1234,
     49001, 52202, 65606,
     91233};
  string produtos[7] = {
    "Cadeira", "Mesa", "Caneta",
    "Cama", "Caderno", "Garrafa",
    "Prato"}; 

    cout << "------------------------------" <<  endl;
    for (int i = 0; i < 7; i++) {
      Produto produto = Produto(ids[i], produtos[i]);
      produtosHash
    .insertItem(produto);
    }
    produtosHash.print();  
    cout << "------------------------------" <<  endl;

    Produto produto(12704,"");  
    bool     found = false;
    produtosHash
  .retrieveItem(produto, found);
    cout << produto.getProduto() << " -> " << found << endl;

    cout << "------------------------------" <<  endl;

    produtosHash
  .deleteItem(produto);
    produtosHash
  .print();
    cout << "Fim" << endl;  
}