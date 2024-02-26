#include <iostream>
using namespace std;

class Produto{
private :
  int         id;
  std::string produto;  
public:  
  Produto();
  Produto(int id, std::string produto);
  string getProduto() const;
  int getId() const;
};