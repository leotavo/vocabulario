// dominios.cpp


/* 
  Implementação das classes de domínio.
*/

#include  "dominios.h"
#include  <string>
using std::string;
#include  <stdexcept>
#include  <algorithm>
std::find_if_not;



bool func(char c){
    return c == 'x';
}

// classe Nome
const unsigned Nome::LIMITE;
const string Nome::RANGE;



void Nome::validar(string nome) throw (invalid_argument){
    if (nome.size > LIMITE)
      throw invalid_argument("Argumento invalido.");
    else{
      string::iterator it = find_if_not
    }
    std::array<int,5>::iterator it =
    std::find_if_not (foo.begin(), foo.end(), [](int i){return i%2;} );
}

void Codigo::setCodigo(int codigo) throw (invalid_argument){
    validar(codigo);
    this->codigo = codigo;
}
