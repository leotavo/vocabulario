#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

// EXEMPLO
// --------------------------------------------------------

// Declara��o de classe.

class Codigo {
private:
        int codigo;

        const static int LIMITE = 25;

        // Ilustra m�todo de valida��o.

        void validar(int) throw (invalid_argument);

public:
        void setCodigo(int) throw (invalid_argument);

        // Ilustra m�todo inline e constante.

        int getCodigo() const;
};

inline int Codigo::getCodigo() const {
        return codigo;
}

#endif // DOMINIOS_H_INCLUDED
