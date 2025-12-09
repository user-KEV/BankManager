#include "Casse.h"
#include <iostream>

Casse::Casse(float capitale){
    this->capitale = capitale;
}

float Casse::getCapitale() const{
    return capitale;
}
float Casse::getPrestiti() const{
    return prestiti;
}
float Casse::getIncassi() const{
    return incassi;
}

void Casse::setCapitale(float n){
    float percentuale_guadagno = n * 0.22;
    n += percentuale_guadagno;
    capitale += n;
    incassi += n;
}
void Casse::setPrestiti(float n){
    capitale -= n;
    prestiti += n;
}

void Casse::mostraInfo(){
    std::cout << "capitale: " << Casse::getCapitale() << '\n';
    std::cout << "prestiti effettuati: " << Casse::getPrestiti() << '\n';
    std::cout << "incassi effettuati: " << Casse::getIncassi() << "\n\n";
}
