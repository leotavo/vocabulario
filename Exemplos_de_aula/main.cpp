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
    // Exemplo com classe dom�nio.

    {

        Codigo a;

        try {
            // Exemplo de solicita��o que n�o gera exce��o.

            a.setCodigo(10);

            // Exemplo de solicita��o que gera exce��o.

            a.setCodigo(100);
        }
        catch(invalid_argument exp){
            // Exemplo de intera��o com a exce��o.

            cout << "Valor = " << exp.what() << endl;
        }

        // Valor armazenado na exce��o.

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

    // Exemplo com teste de dom�nio.

    {
        TUCodigo a;

        int resultado = a.run();

        cout << "Resultado TUCodigo = " << resultado << endl;
    }

    return 0;
}
