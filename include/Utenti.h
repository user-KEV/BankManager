#ifndef UTENTI_H
#define UTENTI_H
#include <iostream>
#include "Casse.h"

class Utenti{
    private:
        std::string nome;
        float patrimonio = 0;
        float debito = 0;
    public:
        Utenti(std::string nome, float patrimonio);

        std::string getNome() const;
        float getPatrimonio() const;
        float getDebito() const;

        void richiediPrestito(Casse& c, float n);
        void ricopriPrestito(Casse& c, float n);

        void mostraInfo();
};

#endif
