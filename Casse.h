#ifndef CASSE_H
#define CASSE_H

class Casse{
    private:
        float capitale = 0;
        float prestiti = 0;
        float incassi = 0;
    public:
        Casse(float capitale);
        
        float getCapitale() const;
        float getPrestiti() const;
        float getIncassi() const;

        void setCapitale(float n);
        void setPrestiti(float n);
        
        void mostraInfo();
};

#endif
