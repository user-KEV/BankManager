#include "Utenti.h"
#include <iostream>

Utenti::Utenti(std::string nome, float patrimonio){
    this->nome = nome;
    this->patrimonio = patrimonio;
}

std::string Utenti::getNome() const{
    return nome;
}
float Utenti::getDebito() const{
    return debito;
}
float Utenti::getPatrimonio() const{
    return patrimonio;
}

void Utenti::richiediPrestito(Casse& c, float n){
    if(n > c.getCapitale()){
        std::cout << "impossibile richiedere prestito.\n";
    }
    else{
        c.setPrestiti(n);
        patrimonio += n; 
        debito += n;
    }
}
void Utenti::ricopriPrestito(Casse& c, float n){
    if(n > debito){
        n = debito;
    }
    if(n > patrimonio){
        std::cout << nome << " non ha abbastanza patrimonio per ricoprire " << n << "$\n";
        return;
    }

    patrimonio -= n;
    debito -= n;
    c.setCapitale(n);

    std::cout << nome << " ha ricopeerto " << n << "$ del prestito\n";
}

void Utenti::mostraInfo(){
    std::cout << "nome utente: " << nome << '\n';
    std::cout << "patrimonio: " << patrimonio << '\n';
    std::cout << "debiti: " << debito << '\n';
}
