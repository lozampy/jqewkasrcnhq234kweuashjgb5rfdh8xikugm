#ifndef DATES_H
#define DATES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struttura per rappresentare una data con ordine di importanza
typedef struct {
    int giorno;
    int mese;
    int anno;
    int importanza;  // 1 = massima importanza, valori più alti = minore importanza
    char descrizione[256];
} DataImportante;

// Funzione per creare una nuova data
DataImportante creaData(int giorno, int mese, int anno, int importanza, const char* descrizione) {
    DataImportante data;
    data.giorno = giorno;
    data.mese = mese;
    data.anno = anno;
    data.importanza = importanza;
    strncpy(data.descrizione, descrizione, sizeof(data.descrizione) - 1);
    data.descrizione[sizeof(data.descrizione) - 1] = '\0';
    return data;
}

// Funzione per confrontare due date in base all'importanza
int confrontaImportanza(const void* a, const void* b) {
    const DataImportante* dataA = (const DataImportante*)a;
    const DataImportante* dataB = (const DataImportante*)b;
    return dataA->importanza - dataB->importanza;
}

// Funzione per stampare una data
void stampaData(DataImportante data) {
    printf("%02d/%02d/%04d - Importanza: %d - %s\n", 
           data.giorno, data.mese, data.anno, 
           data.importanza, data.descrizione);
}

// Esempi di date storiche importanti
#define DATA_SCOPERTA_AMERICA {12, 10, 1492, 1, "Scoperta dell'America da parte di Cristoforo Colombo"}
#define DATA_RIVOLUZIONE_FRANCESE {14, 7, 1789, 1, "Presa della Bastiglia - Rivoluzione Francese"}
#define DATA_PRIMA_GUERRA_MONDIALE {28, 6, 1914, 1, "Inizio Prima Guerra Mondiale (Attentato di Sarajevo)"}
#define DATA_SBARKO_NORMANDIA {6, 6, 1944, 1, "Sbarco in Normandia - D-Day"}
#define DATA_ALLUNAGGIO {20, 7, 1969, 1, "Primo allunaggio - Missione Apollo 11"}
#define DATA_CADUTA_MURO_BERLINO {9, 11, 1989, 1, "Caduta del Muro di Berlino"}
#define DATA_UNITA_ITALIA {17, 3, 1861, 2, "Proclamazione del Regno d'Italia"}
#define DATA_FINE_SECONDA_GUERRA {8, 5, 1945, 2, "Fine della Seconda Guerra Mondiale in Europa"}
#define DATA_RIVOLUZIONE_RUSSA {25, 10, 1917, 2, "Rivoluzione Russa d'Ottobre"}
#define DATA_INDIPENDENZA_USA {4, 7, 1776, 2, "Dichiarazione di Indipendenza degli Stati Uniti"}
#define DATA_NASCITA_NAZIONI_UNITE {24, 10, 1945, 3, "Fondazione delle Nazioni Unite"}
#define DATA_TRATTATO_ROMA {25, 3, 1957, 3, "Firma dei Trattati di Roma - Nascita CEE"}
#define DATA_GIORNO_TERRA {22, 4, 1970, 3, "Primo Giorno della Terra"}

#endif // DATES_H
