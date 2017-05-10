#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include <stdexcept>

using namespace std;

// EXEMPLO
// --------------------------------------------------------

// Declara��o de classe.


class Produto {

private:

    Codigo codigo;

public:

    void setCodigo(const Codigo&);

    Codigo getCodigo() const {
        return codigo;
    }
};

// M�todos inline.

inline void Produto::setCodigo(const Codigo &codigo){
    this->codigo = codigo;
}

#endif // ENTIDADES_H_INCLUDED
