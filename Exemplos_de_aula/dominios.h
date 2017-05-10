#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

// EXEMPLO
// --------------------------------------------------------

// Declaração de classe.

class Codigo {
private:
        int codigo;

        const static int LIMITE = 25;

        // Ilustra método de validação.

        void validar(int) throw (invalid_argument);

public:
        void setCodigo(int) throw (invalid_argument);

        // Ilustra método inline e constante.

        int getCodigo() const;
};

inline int Codigo::getCodigo() const {
        return codigo;
}

#endif // DOMINIOS_H_INCLUDED
