// dominios.h

/* 
  Header com as classes que representam os domínios.
*/

#ifndef DOMINIOS_H
#define DOMINIOS_H

// includes necessários
#include <string>;
#include <stdexcept>


// declaração das classes de domínio.


/*
  Classe Nome:  
    utilização => Nome do vocabulário; Nome do autor; Nome do usuário.
    restrições => até 20 caracteres, letras e espaço em branco
*/
class Nome{
private:
  string  nome;
  
  const static unsigned LIMITE = 20;
  const static string RANGE = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz "

  void validar(string) throw (invalid_argument);
  
public:
  void setNome(string) throw (invalid_argument);

  string getNome() const;
};

inline string Nome::getNome() const {
        return nome;
}


/*
  Classe Senha:  
    utilização => senha para autenticação de usuário
    restrições => 5 caracteres, sem repetição
*/
class Senha{
private:
  string  senha;
  
  const static unsigned TAMANHO = 5;

  void validar(string) throw (invalid_argument);
  
public:
  void setSenha(string) throw (invalid_argument);

  string getSenha() const;
};

inline string Senha::getSenha() const {
        return senha;
}

/*
  Classe Email:  
    utilização => e-mail de cadastro do usuário
    restrições => Formato L@LLL, onde L são letras
*/
class Email{
private:
  string  email;
  
  void validar(string) throw (invalid_argument);
  
public:
  void setEmail(string) throw (invalid_argument);

  string getEmail() const;
};

inline string Email::getEmail() const {
        return email;
}

/*
  Classe Avaliacao:  
    utilização => nota a ser dada pelos usuários às definições
    restrições => valores 1,2,3,4 e 5
*/
class Avaliacao{
private:
  unsigned  avaliacao;
  
  const static unsigned MIN = 1;
  const static unsigned MAX = 5;
  
  void validar(unsigned) throw (invalid_argument);
  
public:
  void setAvaliacao(unsigned) throw (invalid_argument);

  unsigned getAvaliacao() const;
};

inline unsigned Avaliacao::getAvaliacao() const {
        return avaliacao;
}

/*
  Classe Texto:  
    utilização => texto referente ao termo ou definição
    restrições => até 50 caracteres
*/
class Texto{
private:
  string  texto;
  
  const static unsigned LIMITE = 50;

  void validar(string) throw (invalid_argument);
  
public:
  void setTexto(string) throw (invalid_argument);

  string getTexto() const;
};

inline string Texto::getTexto() const {
        return texto;
}

#endif
