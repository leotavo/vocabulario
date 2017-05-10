#include "dominios.h"

//Exemplo de defini��es de constantes.

const int Codigo::LIMITE;

// EXEMPLO
// --------------------------------------------------------

void Codigo::validar(int codigo) throw (invalid_argument){

    // Lan�a exce��o se valor for maior que o limite definido.

    if (codigo > LIMITE)
        throw invalid_argument("Argumento invalido.");
}

void Codigo::setCodigo(int codigo) throw (invalid_argument){
    validar(codigo);
    this->codigo = codigo;
}
