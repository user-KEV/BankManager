#include "Utenti.h"
#include "Casse.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    float capitale_banca;
    int numero_clienti;

    do{
        cout << "inserisci il capitale della banca: \n";
        cin >> capitale_banca;
    }while(capitale_banca <= 0);
    
    Casse banca(capitale_banca);


    do{
        cout << "inserisci il numero di clienti della banca: \n";
        cin >> numero_clienti;
    }while(numero_clienti <= 0);

    vector<Utenti> clientela;

    for(int i = 0; i < numero_clienti; i++){
        string nome;
        float capitale_cliente;

        cin.ignore(10000, '\n');

        do{
            cout << "inserire il nome del cliente #" << i + 1 << '\n';
            getline(cin, nome);
        }while(nome.empty());
        do{
            cout << "inserire il capitale del cliente #" << i + 1 << '\n';
            cin >> capitale_cliente;
            cin.ignore(10000, '\n');
        }while(capitale_cliente <= 0);

        
        clientela.push_back(Utenti(nome, capitale_cliente));

    }

    int risposta;
    cout << "*******************Benvenuto nella banca principale!*******************\n";
    
    do{
        

        cout << "cosa desideri fare? inserire: \n";
        cout << "0 per uscire\n";
        cout << "1 per visualizzare i dati della banca\n";
        cout << "2 visualizzare i dati dei clienti\n";
        cout << "3 richiedere o ricoprire prestiti per un cliente\n";
        cout << "*************************************************************************\n";
        cin >> risposta;
        cin.ignore(10000, '\n');

        if(risposta == 1){
            banca.mostraInfo();
        }
        else if(risposta == 2){
            
            for(int i = 0; i < numero_clienti; i++){
                clientela[i].mostraInfo();
            }
            cout << '\n';
        }
        else if(risposta == 3){
            int posizione;
            int operazione;
            float somma;

            do{
                cout << "inserire posizione del cliente nella lista: \n";
                cin >> posizione;
                cin.ignore(10000, '\n');
            }while(posizione < 0 || posizione > numero_clienti);
            
            do{
                cout << "inserire l'operazione da eseguire (1 per richiedere prestito, 2 per ricoprirlo): \n";
                cin >> operazione;
                cin.ignore(10000, '\n');
            }while(operazione != 1 && operazione != 2);
            
            if(operazione == 1){
                cout << "inserisci somma da richiedere: \n";
                cin >> somma;
                cin.ignore(10000, '\n');
                clientela[posizione - 1].richiediPrestito(banca, somma);
            }
            else if(operazione == 2){
                cout << "inserisci somma da ricoprire: \n";
                cin >> somma;
                cin.ignore(10000, '\n');
                clientela[posizione - 1].ricopriPrestito(banca, somma);
            }
        }
    }while(risposta != 0);


    return 0;
}
