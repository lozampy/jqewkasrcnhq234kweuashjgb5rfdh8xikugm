#include <iostream>
#include <ctime>
#include "dates.h"
 
using namespace std;
 
// Restituisce il nome del giorno della settimana
const char* getNomeGiorno(int wday) {
    switch (wday) {
        case 0: return "Domenica";
        case 1: return "Lunedi'";
        case 2: return "Martedi'";
        case 3: return "Mercoledi'";
        case 4: return "Giovedi'";
        case 5: return "Venerdi'";
        case 6: return "Sabato";
        default: return "???";
    }
}
 
// Restituisce il nome del mese
const char* getNomeMese(int mon) {
    switch (mon) {
        case 0:  return "Gennaio";
        case 1:  return "Febbraio";
        case 2:  return "Marzo";
        case 3:  return "Aprile";
        case 4:  return "Maggio";
        case 5:  return "Giugno";
        case 6:  return "Luglio";
        case 7:  return "Agosto";
        case 8:  return "Settembre";
        case 9:  return "Ottobre";
        case 10: return "Novembre";
        case 11: return "Dicembre";
        default: return "???";
    }
}
 
// Stampa una linea decorativa
void stampaLinea(char c, int lunghezza) {
    for (int i = 0; i < lunghezza; ++i)
        cout << c;
    cout << "\n";
}
 
int main() {
   
    // 1. Recupero della data corrente tramite <ctime>
    time_t ora = time(nullptr);
    tm* dataLocale = localtime(&ora);
 
    int giornoDelMese = dataLocale->tm_mday;          // 1-31
    int mese          = dataLocale->tm_mon + 1;        // tm_mon e' 0-11, convertiamo in 1-12
    int anno          = dataLocale->tm_year + 1900;    // tm_year e' anni dal 1900
    int giornoDellaSett = dataLocale->tm_wday;         // 0=domenica ... 6=sabato
    int ora24         = dataLocale->tm_hour + 2;
    int minuti        = dataLocale->tm_min;
    int secondi       = dataLocale->tm_sec;

    
    // 2. Presentazione dell'intestazione
   
    stampaLinea('=', 62);
    cout << "        ALMANACCO STORICO - ACCADDE OGGI\n";
    stampaLinea('=', 62);
 
    // Stampa data e ora attuali
    cout << "  " << getNomeGiorno(giornoDellaSett) << " "
         << giornoDelMese << " " << getNomeMese(mese - 1) << " " << anno;
 
    // Ora con padding manuale
    cout << "   ore ";
    if (ora24 < 10)   cout << "0";
    cout << ora24 << ":";
    if (minuti < 10)  cout << "0";
    cout << minuti << ":";
    if (secondi < 10) cout << "0";
    cout << secondi << "\n";
 
    stampaLinea('-', 62);
 
    // 3. Ricerca degli eventi storici per il giorno corrente
    int trovati = 0;
    
    // Crea un'istanza della classe EventiStorici per accedere agli eventi
    EventiStorici eventiStorici;
 
    for (int i = 0; i < EventiStorici::EVENTS_COUNT; ++i) {
        if (eventiStorici.getEvento(i).mese == mese && eventiStorici.getEvento(i).giorno == giornoDelMese) {
            if (trovati == 0) {
                cout << "  EVENTI STORICI accaduti il "
                     << giornoDelMese << " " << getNomeMese(mese - 1) << ":\n";
                stampaLinea('-', 62);
            }
 
            // Anno: gestione anni a.C. (negativi)
            int annoEvento = eventiStorici.getEvento(i).anno;
            if (annoEvento < 0) {
                cout << "  [" << -annoEvento << " a.C.] ";
            } else {
                cout << "  [" << annoEvento << " d.C.] ";
            }
 
            // Stampa il testo dell'evento con ritorno a capo automatico
            // a 56 caratteri per adattarsi alla larghezza
            const char* testo = eventiStorici.getEvento(i).descrizione.c_str();
            int col = 11; // colonna corrente dopo "  [XXXX d.C.] "
            for (int j = 0; testo[j] != '\0'; ++j) {
                cout << testo[j];
                ++col;
                // Ritorno a capo "morbido": se siamo oltre 56 col e il
                // prossimo carattere e' uno spazio, andiamo a capo
                if (col > 55 && testo[j] == ' ' && testo[j+1] != '\0') {
                    cout << "\n              ";  // indentazione allineata
                    col = 14;
                }
            }
            cout << "\n\n";
            ++trovati;
        }
    }
 
    // 4. Messaggio se non ci sono eventi registrati
    if (trovati == 0) {
        cout << "  Nessun evento storico registrato per oggi nel database.\n";
    } 
        else {
            cout << "  Trovati " << trovati << " event";
            if (trovati == 1) cout << "o storico";
            else cout << "i storici";
            cout << " per questa data.\n";
    }
 
    stampaLinea('=', 62);
    return 0;
}
 
