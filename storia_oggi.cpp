#include <iostream>
#include <ctime>
#include <vector>
#include <string>
#include <algorithm>
#include "dates.h"

using namespace std;



// Funzione per trovare fatti storici accaduti oggi
vector<FattoStorico> trovaFattiPerOggi(int giorno, int mese, const vector<FattoStorico>& tuttiIFatti) {
    vector<FattoStorico> fattiOggi;
    
    for (const auto& fatto : tuttiIFatti) {
        if (fatto.giorno == giorno && fatto.mese == mese) {
            fattiOggi.push_back(fatto);
        }
    }
    
    // Ordina per importanza (1 = massima priorità)
    sort(fattiOggi.begin(), fattiOggi.end(), 
              [](const FattoStorico& a, const FattoStorico& b) {
                  return a.importanza < b.importanza;
              });
    
    return fattiOggi;
}

// Funzione per ottenere il nome del mese in italiano
string nomeMeseItaliano(int mese) {
    const vector<string> mesi = {
        "", "Gennaio", "Febbraio", "Marzo", "Aprile", "Maggio", "Giugno",
        "Luglio", "Agosto", "Settembre", "Ottobre", "Novembre", "Dicembre"
    };
    return mesi[mese];
}

int main() {
    // Ottieni la data corrente
    time_t now = time(0);
    tm* localTime = localtime(&now);
    
    int giornoCorrente = localTime->tm_mday;
    int meseCorrente = localTime->tm_mon + 1; // tm_mon va da 0 a 11
    int annoCorrente = localTime->tm_year + 1900;
    
    cout << "========================================" << endl;
    cout << "Oggi è: " << giornoCorrente << " " 
              << nomeMeseItaliano(meseCorrente) << " " 
              << annoCorrente << endl;
    cout << "========================================" << endl;
    cout << endl;
    
    // Inizializza il database dei fatti storici
    vector<FattoStorico> tuttiIFatti = inizializzaFattiStorici();
    
    // Trova fatti accaduti oggi
    vector<FattoStorico> fattiOggi = trovaFattiPerOggi(giornoCorrente, meseCorrente, tuttiIFatti);
    
    if (fattiOggi.empty()) {
        cout << "Nessun fatto storico particolare registrato per oggi nel nostro database." << endl;
        cout << "Ma ogni giorno fa la storia!" << endl;
    } else {
        cout << "📚 FATTI STORICI ACCADUTI OGGI:" << endl;
        cout << "----------------------------------------" << endl;
        
        int numeroFatto = 1;
        int importanzaPrecedente = 0;
        
        for (const auto& fatto : fattiOggi) {
            // Mostra livello di importanza se cambia
            if (fatto.importanza != importanzaPrecedente) {
                cout << endl;
                if (fatto.importanza == 1) {
                    cout << "⭐ MASSIMA IMPORTANZA ⭐" << endl;
                } else if (fatto.importanza == 2) {
                    cout << "🔹 ALTA IMPORTANZA 🔹" << endl;
                } else {
                    cout << "🔸 IMPORTANZA MEDIA 🔸" << endl;
                }
                importanzaPrecedente = fatto.importanza;
            }
            
            cout << endl;
            cout << numeroFatto << ". " << fatto.descrizione << endl;
            cout << "   Anno: " << fatto.anno << endl;
            numeroFatto++;
        }
        
        cout << endl;
        cout << "----------------------------------------" << endl;
        cout << "Totale eventi trovati: " << fattiOggi.size() << endl;
    }
    
    cout << endl;
    cout << "========================================" << endl;
    
    return 0;
}
