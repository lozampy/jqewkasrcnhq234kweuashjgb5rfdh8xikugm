#include <iostream>
#include <ctime>
#include "dates.h"
 
using namespace std;
 
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
 
void stampaLinea(char c, int lunghezza) {
    for (int i = 0; i < lunghezza; ++i)
        cout << c;
    cout << "\n";
}

bool dataValida(int giorno, int mese) {
    if (mese < 1 || mese > 12) return false;
    int giorniPerMese[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return giorno >= 1 && giorno <= giorniPerMese[mese - 1];
}

void stampaEventi(int giorno, int mese) {
    EventiStorici eventiStorici;
    int trovati = 0;

    for (int i = 0; i < EventiStorici::EVENTS_COUNT; ++i) {
        if (eventiStorici.getEvento(i).mese == mese && eventiStorici.getEvento(i).giorno == giorno) {
            if (trovati == 0) {
                cout << "  EVENTI STORICI accaduti il "
                     << giorno << " " << getNomeMese(mese - 1) << ":\n";
                stampaLinea('-', 62);
            }

            int annoEvento = eventiStorici.getEvento(i).anno;
            if (annoEvento < 0)
                cout << "  [" << -annoEvento << " a.C.] ";
            else
                cout << "  [" << annoEvento << " d.C.] ";

            const char* testo = eventiStorici.getEvento(i).descrizione.c_str();
            int col = 11;
            for (int j = 0; testo[j] != '\0'; ++j) {
                cout << testo[j];
                ++col;
                if (col > 55 && testo[j] == ' ' && testo[j+1] != '\0') {
                    cout << "\n              ";
                    col = 14;
                }
            }
            cout << "\n\n";
            ++trovati;
        }
    }

    if (trovati == 0) {
        cout << "  Nessun evento storico registrato per questa data nel database.\n";
    } else {
        cout << "  Trovati " << trovati << " event";
        if (trovati == 1) cout << "o storico";
        else cout << "i storici";
        cout << " per questa data.\n";
    }
}
 
int main() {
   
    // 1. Recupero della data corrente
    time_t ora = time(nullptr);
    tm* dataLocale = localtime(&ora);
 
    int giornoDelMese   = dataLocale->tm_mday;
    int mese            = dataLocale->tm_mon + 1;
    int anno            = dataLocale->tm_year + 1900;
    int giornoDellaSett = dataLocale->tm_wday;
    int ora24           = dataLocale->tm_hour + 2;
    int minuti          = dataLocale->tm_min;
    int secondi         = dataLocale->tm_sec;

    // 2. Intestazione con data di oggi
    stampaLinea('=', 62);
    cout << "        ALMANACCO STORICO - ACCADDE OGGI\n";
    stampaLinea('=', 62);

    cout << "  " << getNomeGiorno(giornoDellaSett) << " "
         << giornoDelMese << " " << getNomeMese(mese - 1) << " " << anno;
    cout << "   ore ";
    if (ora24 < 10)   cout << "0";
    cout << ora24 << ":";
    if (minuti < 10)  cout << "0";
    cout << minuti << ":";
    if (secondi < 10) cout << "0";
    cout << secondi << "\n";

    stampaLinea('-', 62);

    // 3. Mostra sempre gli eventi di oggi
    stampaEventi(giornoDelMese, mese);

    stampaLinea('=', 62);

    // 4. Chiedi se cercare un'altra data
    cout << "\n  Vuoi cercare un'altra data? (s/n): ";
    char scelta;
    cin >> scelta;

    if (scelta == 's' || scelta == 'S') {
        int giornoRicerca, meseRicerca;

        cout << "  Inserisci il giorno (1-31): ";
        cin >> giornoRicerca;
        cout << "  Inserisci il mese  (1-12): ";
        cin >> meseRicerca;

        stampaLinea('=', 62);

        if (!dataValida(giornoRicerca, meseRicerca)) {
            cout << "  Errore: data non valida.\n";
            stampaLinea('=', 62);
            return 1;
        }

        cout << "        ALMANACCO STORICO - RICERCA DATA\n";
        stampaLinea('=', 62);
        cout << "  Data cercata: " << giornoRicerca << " " << getNomeMese(meseRicerca - 1) << "\n";
        stampaLinea('-', 62);

        stampaEventi(giornoRicerca, meseRicerca);

        stampaLinea('=', 62);
    }

    return 0;
}
