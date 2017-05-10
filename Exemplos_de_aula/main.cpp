// Exemplo desenvolvido para ilustrar a sintaxe da linguagem.

#include <stdexcept>
#include <iostream>
#include <string>

#include "dominios.h"
#include "entidades.h"
#include "testes.h"
#include "interfaces.h"
#include "controladoras.h"
#include "stubs.h"
#include "builders.h"

using namespace std;

int main()
{
    // Exemplo com classe domínio.

    {

        Codigo a;

        try {
            // Exemplo de solicitação que não gera exceção.

            a.setCodigo(10);

            // Exemplo de solicitação que gera exceção.

            a.setCodigo(100);
        }
        catch(invalid_argument exp){
            // Exemplo de interação com a exceção.

            cout << "Valor = " << exp.what() << endl;
        }

        // Valor armazenado na exceção.

        cout << "Valor = " << a.getCodigo() << endl;
    }

    // Exemplo com classe entidade.

    {
        Produto a;

        Codigo b, c;

        b.setCodigo(10);

        a.setCodigo(b);

        c = a.getCodigo();

        cout << "Valor = " << b.getCodigo() << endl;
        cout << "Valor = " << c.getCodigo() << endl;

    }

    // Exemplo com teste de domínio.

    {
        TUCodigo a;

        int resultado = a.run();

        cout << "Resultado TUCodigo = " << resultado << endl;
    }

    return 0;
}
