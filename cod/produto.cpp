#include "produto.h"

Produto::Produto(){
  this->id   = -1;
  this->produto = "";
};  
Produto::Produto(int id, std::string produto){
  this->id    = id;
  this->produto  = produto;
}
string Produto::getProduto() const {
  return produto;
}
int Produto::getId() const{
  return id;
}