#include <iostream>
#include <ctime>
#include <vector>
#include <string>
#include <algorithm>
#include "dates.h"

using namespace std;

// Struttura per i fatti storici (compatibile con dates.h ma in stile C++)
struct FattoStorico {
    int giorno;
    int mese;
    int anno;
    int importanza;
    string descrizione;
};

// Database di fatti storici organizzati per giorno e mese
vector<FattoStorico> inizializzaFattiStorici() {
    vector<FattoStorico> fatti;
    
    // GENNAIO
    fatti.push_back({1, 1, 1863, 1, "Proclamazione dell'Emancipazione negli USA da parte di Lincoln"});
    fatti.push_back({4, 1, 1951, 2, "Le truppe cinesi conquistano Seoul durante la Guerra di Corea"});
    fatti.push_back({15, 1, 1929, 1, "Nascita di Martin Luther King Jr., leader dei diritti civili"});
    fatti.push_back({27, 1, 1945, 1, "Liberazione del campo di concentramento di Auschwitz"});
    fatti.push_back({30, 1, 1933, 1, "Hitler diventa Cancelliere della Germania"});
    
    // FEBBRAIO
    fatti.push_back({2, 2, 1943, 1, "Resa delle forze tedesche a Stalingrado - Punto di svolta nella WWII"});
    fatti.push_back({7, 2, 1962, 2, "Gli USA impongono l'embargo totale su Cuba"});
    fatti.push_back({11, 2, 1929, 1, "Firma dei Patti Lateranensi tra Italia e Vaticano"});
    fatti.push_back({14, 2, 1929, 2, "Massacro di San Valentino a Chicago"});
    fatti.push_back({25, 2, 1948, 2, "Colpo di stato comunista in Cecoslovacchia"});
    
    // MARZO
    fatti.push_back({1, 3, 1872, 2, "Istituzione del Parco Nazionale di Yellowstone, il primo al mondo"});
    fatti.push_back({8, 3, 1917, 1, "Inizio della Rivoluzione Russa di Febbraio"});
    fatti.push_back({15, 3, 44, 1, "Assassinio di Giulio Cesare alle Idi di Marzo"});
    fatti.push_back({18, 3, 1965, 1, "Prima passeggiata spaziale della storia (Alexei Leonov)"});
    fatti.push_back({25, 3, 1957, 2, "Firma dei Trattati di Roma - Nascita della CEE"});
    fatti.push_back({30, 3, 1867, 2, "Gli USA acquistano l'Alaska dalla Russia"});
    
    // APRILE
    fatti.push_back({12, 4, 1961, 1, "Primo uomo nello spazio: Yuri Gagarin"});
    fatti.push_back({15, 4, 1912, 1, "Affondamento del Titanic"});
    fatti.push_back({22, 4, 1970, 2, "Prima celebrazione del Giorno della Terra"});
    fatti.push_back({25, 4, 1945, 1, "Liberazione dell'Italia dal nazifascismo"});
    fatti.push_back({26, 4, 1986, 1, "Disastro di Chernobyl"});
    
    // MAGGIO
    fatti.push_back({1, 5, 1886, 2, "Rivolta di Haymarket a Chicago - Origine della Festa dei Lavoratori"});
    fatti.push_back({8, 5, 1945, 1, "Fine della Seconda Guerra Mondiale in Europa (VE Day)"});
    fatti.push_back({13, 5, 1981, 2, "Attentato a Papa Giovanni Paolo II in Piazza San Pietro"});
    fatti.push_back({22, 5, 1980, 2, "Pac-Man viene rilasciato in Giappone"});
    fatti.push_back({28, 5, 1937, 2, "Neville Chamberlain diventa Primo Ministro britannico"});
    
    // GIUGNO
    fatti.push_back({6, 6, 1944, 1, "Sbarco in Normandia - D-Day, inizio della liberazione dell'Europa"});
    fatti.push_back({12, 6, 1987, 1, "Discorso di Reagan al Muro di Berlino: 'Mr. Gorbachev, tear down this wall!'"});
    fatti.push_back({14, 6, 1777, 2, "Adozione della bandiera americana Stars and Stripes"});
    fatti.push_back({28, 6, 1914, 1, "Attentato di Sarajevo - Inizio della Prima Guerra Mondiale"});
    fatti.push_back({30, 6, 1908, 2, "Evento di Tunguska in Siberia"});
    
    // LUGLIO
    fatti.push_back({4, 7, 1776, 1, "Dichiarazione di Indipendenza degli Stati Uniti d'America"});
    fatti.push_back({14, 7, 1789, 1, "Presa della Bastiglia - Inizio della Rivoluzione Francese"});
    fatti.push_back({20, 7, 1969, 1, "Primo allunaggio: Neil Armstrong e Buzz Aldrin sulla Luna"});
    fatti.push_back({25, 7, 1943, 2, "Caduta del fascismo in Italia"});
    fatti.push_back({28, 7, 1914, 1, "L'Austria-Ungheria dichiara guerra alla Serbia - Inizio WWI"});
    
    // AGOSTO
    fatti.push_back({6, 8, 1945, 1, "Sgancio della bomba atomica su Hiroshima"});
    fatti.push_back({9, 8, 1945, 1, "Sgancio della bomba atomica su Nagasaki"});
    fatti.push_back({15, 8, 1947, 1, "Indipendenza dell'India dal Regno Unito"});
    fatti.push_back({19, 8, 1991, 2, "Tentato colpo di stato in Unione Sovietica"});
    fatti.push_back({28, 8, 1963, 1, "Martin Luther King: 'I Have a Dream' a Washington"});
    
    // SETTEMBRE
    fatti.push_back({1, 9, 1939, 1, "La Germania invade la Polonia - Inizio della Seconda Guerra Mondiale"});
    fatti.push_back({8, 9, 1943, 1, "Annuncio dell'Armistizio italiano - Fine della guerra per l'Italia"});
    fatti.push_back({11, 9, 2001, 1, "Attacchi terroristici alle Torri Gemelle di New York"});
    fatti.push_back({15, 9, 1821, 2, "Indipendenza di Costa Rica, El Salvador, Guatemala, Honduras e Nicaragua"});
    fatti.push_back({27, 9, 1940, 2, "Firma del Patto Tripartito tra Germania, Italia e Giappone"});
    
    // OTTOBRE
    fatti.push_back({3, 9, 1990, 1, "Riunificazione della Germania"});
    fatti.push_back({9, 10, 1989, 1, "Manifestazioni pacifiche che portano alla caduta del Muro di Berlino"});
    fatti.push_back({12, 10, 1492, 1, "Cristoforo Colombo scopre l'America"});
    fatti.push_back({24, 10, 1945, 2, "Fondazione delle Nazioni Unite"});
    fatti.push_back({25, 10, 1917, 1, "Rivoluzione d'Ottobre in Russia"});
    fatti.push_back({29, 10, 1929, 1, "Martedì Nero - Crollo di Wall Street, inizio Grande Depressione"});
    
    // NOVEMBRE
    fatti.push_back({1, 11, 1755, 2, "Terremoto di Lisbona"});
    fatti.push_back({9, 11, 1989, 1, "Caduta del Muro di Berlino"});
    fatti.push_back({11, 11, 1918, 1, "Armistizio di Compiègne - Fine della Prima Guerra Mondiale"});
    fatti.push_back({22, 11, 1963, 1, "Assassinio del Presidente John F. Kennedy a Dallas"});
    fatti.push_back({28, 11, 1919, 2, "Primo volo transatlantico di Alcock e Brown"});
    
    // DICEMBRE
    fatti.push_back({7, 12, 1941, 1, "Attacco giapponese a Pearl Harbor - Entrata USA nella WWII"});
    fatti.push_back({10, 12, 1948, 2, "Proclamazione della Dichiarazione Universale dei Diritti Umani"});
    fatti.push_back({17, 12, 1903, 1, "Primo volo dei fratelli Wright"});
    fatti.push_back({25, 12, 1991, 1, "Dimissioni di Gorbaciov - Fine ufficiale dell'URSS"});
    fatti.push_back({31, 12, 1999, 2, "Passaggio del millennio e fine del XX secolo"});
    
    return fatti;
}

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
