#ifndef EVENTI_STORICI_H
#define EVENTI_STORICI_H
 
#include <iostream>
#include <string>
using namespace std;
 
class EventiStorici {
private:
    struct Evento {
        int giorno;
        int mese;
        int anno;
        string descrizione;
    };
 
    static const int NUM_EVENTI = 490;
    Evento eventi[NUM_EVENTI];
 
public:
    static const int EVENTS_COUNT = NUM_EVENTI;
 
    const Evento& getEvento(int i) const {
        return eventi[i];
    }
 
    EventiStorici() {
        // ============================================================
        // GENNAIO (0-30 originali + 31-38 nuovi)
        // ============================================================
        eventi[0]  = {1,  1, 1959, "Rivoluzione Cubana: Fidel Castro prende il potere a L'Avana"};
        eventi[1]  = {2,  1, 1492, "I Re Cattolici conquistano Granada, ponendo fine alla Reconquista"};
        eventi[2]  = {3,  1, 1521, "Papa Leone X scomunica Martin Lutero con la bolla Decet Romanum Pontificem"};
        eventi[3]  = {4,  1, 2010, "Inaugurazione del Burj Khalifa a Dubai: con 828 m e' l'edificio piu' alto del mondo"};
        eventi[4]  = {5,  1, 1919, "Fondazione del Partito dei Lavoratori Tedeschi (DAP), futuro Partito Nazista"};
        eventi[5]  = {6,  1, 1412, "Nasce Giovanna d'Arco a Domremy, futura eroina nazionale francese"};
        eventi[6]  = {7,  1, 1610, "Galileo Galilei scopre i quattro principali satelliti di Giove con il suo telescopio"};
        eventi[7]  = {8,  1, 1297, "Francesco Grimaldi conquista travestito da monaco la fortezza di Monaco"};
        eventi[8]  = {9,  1, 2007, "Steve Jobs presenta il primo iPhone alla Macworld Conference di San Francisco"};
        eventi[9]  = {10, 1, 49,   "Giulio Cesare attraversa il Rubicone con le sue legioni: inizia la guerra civile"};
        eventi[10] = {11, 1, 1922, "Leonard Thompson riceve la prima iniezione di insulina su un essere umano"};
        eventi[11] = {12, 1, 1848, "Inizia la rivolta di Palermo contro i Borboni: primo moto del 1848 in Europa"};
        eventi[12] = {13, 1, 1898, "Emile Zola pubblica 'J'accuse' in prima pagina in difesa del capitano Dreyfus"};
        eventi[13] = {14, 1, 2005, "La sonda Huygens atterra sulla luna di Saturno Titano: primo atterraggio nel Sistema Solare esterno"};
        eventi[14] = {15, 1, 2001, "Nasce Wikipedia, la prima enciclopedia libera e collaborativa online"};
        eventi[15] = {16, 1, 1547, "Ivan il Terribile viene incoronato primo Zar di tutte le Russie"};
        eventi[16] = {17, 1, 1991, "Inizia la Prima Guerra del Golfo con l'Operazione Desert Storm"};
        eventi[17] = {18, 1, 1871, "Proclamazione del Secondo Reich: Guglielmo I diventa Imperatore di Germania"};
        eventi[18] = {19, 1, 1915, "Prima incursione aerea su Londra da parte degli Zeppelin tedeschi"};
        eventi[19] = {20, 1, 1936, "Muore re Giorgio V del Regno Unito dopo 25 anni di regno"};
        eventi[20] = {21, 1, 1793, "Luigi XVI viene ghigliottinato in Place de la Revolution a Parigi"};
        eventi[21] = {22, 1, 1901, "Muore la regina Vittoria dopo 63 anni di regno, la piu' lunga regnante britannica"};
        eventi[22] = {23, 1, 1556, "Terremoto di Shaanxi in Cina: circa 830.000 morti, il piu' letale della storia"};
        eventi[23] = {24, 1, 1848, "James Marshall scopre pepite d'oro a Sutter's Mill, California: corsa all'oro"};
        eventi[24] = {25, 1, 1924, "Prima edizione dei Giochi Olimpici Invernali a Chamonix, Francia"};
        eventi[25] = {26, 1, 1788, "La Prima Flotta britannica arriva in Australia fondando la colonia di New South Wales"};
        eventi[26] = {27, 1, 1945, "L'Armata Rossa libera il campo di concentramento di Auschwitz-Birkenau"};
        eventi[27] = {28, 1, 1986, "Il disastro dello Space Shuttle Challenger: l'orbiter esplode 73 secondi dopo il lancio"};
        eventi[28] = {29, 1, 1886, "Karl Benz brevetta la prima automobile a motore a scoppio: la Benz Patent-Motorwagen"};
        eventi[29] = {30, 1, 1933, "Adolf Hitler viene nominato Cancelliere della Germania dal presidente Hindenburg"};
        eventi[30] = {31, 1, 1606, "Guy Fawkes viene giustiziato per la Congiura delle Polveri contro il Parlamento"};
        // Gennaio - nuovi
        eventi[31] = {1,  1, 1863, "Entra in vigore il Proclama di Emancipazione: Lincoln libera gli schiavi negli stati confederati"};
        eventi[32] = {4,  1, 1643, "Nasce Isaac Newton a Woolsthorpe, scopritore della gravita' e delle leggi del moto"};
        eventi[33] = {8,  1, 1642, "Muore Galileo Galilei ad Arcetri, padre della scienza sperimentale moderna"};
        eventi[34] = {17, 1, 1706, "Nasce Benjamin Franklin a Boston, inventore del parafulmine e Padre Fondatore americano"};
        eventi[35] = {19, 1, 1807, "Nasce Edgar Allan Poe a Boston, maestro del racconto gotico e del terrore"};
        eventi[36] = {22, 1, 1879, "Battaglia di Rorke's Drift: 150 soldati britannici resistono all'assalto di 4000 Zulu"};
        eventi[37] = {24, 1, 1965, "Muore Winston Churchill, il piu' grande statista britannico del Novecento"};
        eventi[38] = {27, 1, 1756, "Nasce Wolfgang Amadeus Mozart a Salisburgo, genio assoluto del classicismo musicale"};
 
        // ============================================================
        // FEBBRAIO (39-68 originali + 69-76 nuovi)
        // ============================================================
        eventi[39] = {1,  2, 2003, "Disastro dello Space Shuttle Columbia: si disintegra al rientro, 7 astronauti morti"};
        eventi[40] = {2,  2, 1943, "Battaglia di Stalingrado: la 6a Armata tedesca si arrende all'Armata Rossa"};
        eventi[41] = {3,  2, 1468, "Johannes Gutenberg muore a Magonza, inventore della stampa a caratteri mobili"};
        eventi[42] = {4,  2, 1945, "Conferenza di Yalta: Churchill, Roosevelt e Stalin decidono il futuro del dopoguerra"};
        eventi[43] = {5,  2, 1818, "Nasce Karl Marx a Treviri, padre del comunismo scientifico"};
        eventi[44] = {6,  2, 1952, "Elisabetta II diventa Regina del Regno Unito alla morte del padre Giorgio VI"};
        eventi[45] = {7,  2, 1992, "Trattato di Maastricht firmato: nasce ufficialmente l'Unione Europea"};
        eventi[46] = {8,  2, 1587, "Maria Stuarda, ex regina di Scozia, viene decapitata nel castello di Fotheringhay"};
        eventi[47] = {9,  2, 1849, "Proclamazione della Repubblica Romana dopo la fuga di Pio IX a Gaeta"};
        eventi[48] = {10, 2, 1840, "La regina Vittoria sposa il principe Alberto di Sassonia-Coburgo-Gotha"};
        eventi[49] = {11, 2, 1990, "Nelson Mandela viene liberato dopo 27 anni di prigionia sull'isola di Robben"};
        eventi[50] = {12, 2, 1809, "Nasce Charles Darwin a Shrewsbury, padre della teoria dell'evoluzione per selezione naturale"};
        eventi[51] = {13, 2, 1633, "Galileo Galilei arriva a Roma per essere processato dall'Inquisizione"};
        eventi[52] = {14, 2, 1929, "Massacro di San Valentino a Chicago: la banda di Al Capone elimina 7 rivali"};
        eventi[53] = {15, 2, 1564, "Nasce Galileo Galilei a Pisa, fondatore della fisica moderna e dell'astronomia osservativa"};
        eventi[54] = {16, 2, 1959, "Fidel Castro diventa Primo Ministro di Cuba dopo la Rivoluzione"};
        eventi[55] = {17, 2, 1600, "Giordano Bruno viene arso vivo in Campo de' Fiori a Roma dall'Inquisizione"};
        eventi[56] = {18, 2, 1564, "Muore Michelangelo Buonarroti a Roma, sommo artista del Rinascimento italiano"};
        eventi[57] = {19, 2, 1473, "Nasce Niccolo' Copernico a Torún, fondatore dell'astronomia eliocentrica"};
        eventi[58] = {20, 2, 1816, "Il Barbiere di Siviglia di Rossini debutta al Teatro Argentina di Roma"};
        eventi[59] = {21, 2, 1848, "Karl Marx e Friedrich Engels pubblicano il Manifesto del Partito Comunista a Londra"};
        eventi[60] = {22, 2, 1732, "Nasce George Washington a Pope's Creek, primo presidente degli Stati Uniti"};
        eventi[61] = {23, 2, 1455, "Johannes Gutenberg completa la stampa della prima Bibbia a caratteri mobili"};
        eventi[62] = {24, 2, 1530, "Carlo V d'Asburgo viene incoronato Imperatore del Sacro Romano Impero a Bologna"};
        eventi[63] = {25, 2, 1956, "Nikita Krusciov denuncia al XX Congresso i crimini di Stalin"};
        eventi[64] = {26, 2, 1936, "Tentativo di golpe militare in Giappone da parte di ufficiali nazionalisti"};
        eventi[65] = {27, 2, 1933, "Incendio del Reichstag a Berlino: Hitler sfrutta l'evento per accentrare il potere"};
        eventi[66] = {28, 2, 1986, "Olof Palme, Primo Ministro svedese, viene assassinato per strada a Stoccolma"};
        eventi[67] = {29, 2, 1960, "Devastante terremoto di Agadir in Marocco: oltre 15.000 morti"};
        // Febbraio - nuovi
        eventi[68] = {7,  2, 1812, "Nasce Charles Dickens a Portsmouth, autore di Oliver Twist e David Copperfield"};
        eventi[69] = {14, 2, 1876, "Alexander Graham Bell deposita il brevetto del telefono poche ore prima di Elisha Gray"};
        eventi[70] = {18, 2, 1930, "Clyde Tombaugh scopre Plutone all'Osservatorio Lowell in Arizona"};
        eventi[71] = {20, 2, 1962, "John Glenn diventa il primo americano a orbitare attorno alla Terra con Friendship 7"};
        eventi[72] = {23, 2, 1685, "Nasce Georg Friedrich Handel ad Halle, compositore del celebre oratorio Messia"};
        eventi[73] = {24, 2, 1582, "Papa Gregorio XIII annuncia la riforma del calendario che porta il suo nome"};
        eventi[74] = {28, 2, 1953, "Francis Crick annuncia la scoperta della doppia elica del DNA ai colleghi del pub Eagle"};
        eventi[75] = {4,  2, 1789, "George Washington viene eletto primo presidente degli Stati Uniti d'America"};
 
        // ============================================================
        // MARZO (76-105 originali + 106-113 nuovi)
        // ============================================================
        eventi[76] = {1,  3, 1565, "Fondazione di Rio de Janeiro da parte dei Portoghesi guidati da Estacio de Sa'"};
        eventi[77] = {2,  3, 1836, "Il Texas dichiara l'indipendenza dal Messico a Washington-on-the-Brazos"};
        eventi[78] = {3,  3, 1861, "Lo zar Alessandro II firma il manifesto sull'abolizione della servitu' della gleba in Russia"};
        eventi[79] = {4,  3, 1789, "Entra ufficialmente in vigore la Costituzione degli Stati Uniti d'America"};
        eventi[80] = {5,  3, 1953, "Muore Iosif Stalin: fine di un'era di terrore durata quasi trent'anni"};
        eventi[81] = {6,  3, 1475, "Nasce Michelangelo Buonarroti a Caprese, massimo genio artistico del Rinascimento"};
        eventi[82] = {7,  3, 1876, "Alexander Graham Bell ottiene il brevetto del telefono"};
        eventi[83] = {8,  3, 1917, "Rivoluzione di Febbraio in Russia: i lavoratori insorgono contro lo zar Nicola II"};
        eventi[84] = {9,  3, 1831, "Il re Luigi Filippo di Francia fonda la Legione Straniera ad Algeri"};
        eventi[85] = {10, 3, 241,  "Battaglia delle Isole Egadi: Roma sconfigge Cartagine, fine della Prima Guerra Punica"};
        eventi[86] = {11, 3, 2011, "Terremoto di magnitudo 9.0 e tsunami devastano la costa del Giappone: disastro di Fukushima"};
        eventi[87] = {12, 3, 1930, "Gandhi inizia la Marcia del Sale da Sabarmati ad Ahmedabad: resistenza pacifica"};
        eventi[88] = {13, 3, 1781, "William Herschel scopre il pianeta Urano con il suo telescopio a Bath"};
        eventi[89] = {14, 3, 1879, "Nasce Albert Einstein a Ulm, Wurtemberg, padre della relativita'"};
        eventi[90] = {15, 3, 44,   "Giulio Cesare viene pugnalato 23 volte al Senato durante le Idi di Marzo"};
        eventi[91] = {16, 3, 1978, "Aldo Moro viene rapito dalle Brigate Rosse a Roma: sara' ucciso 55 giorni dopo"};
        eventi[92] = {17, 3, 461,  "San Patrizio muore in Irlanda dopo aver diffuso il Cristianesimo sull'isola"};
        eventi[93] = {18, 3, 1871, "Inizia la Comune di Parigi: governo rivoluzionario durato 72 giorni"};
        eventi[94] = {19, 3, 1812, "Le Cortes di Cadice promulgano la prima Costituzione liberale spagnola"};
        eventi[95] = {20, 3, 1602, "Fondazione della Compagnia Olandese delle Indie Orientali: prima societa' per azioni"};
        eventi[96] = {21, 3, 1960, "Massacro di Sharpeville: la polizia sudafricana spara su manifestanti neri, 69 morti"};
        eventi[97] = {22, 3, 1945, "Nasce la Lega Araba al Cairo con sette stati fondatori"};
        eventi[98] = {23, 3, 1983, "Il presidente Reagan annuncia il progetto di difesa missilistica SDI (Guerre Stellari)"};
        eventi[99] = {24, 3, 1603, "Muore Elisabetta I d'Inghilterra: fine della dinastia Tudor"};
        eventi[100] = {25, 3, 1957, "Firma dei Trattati di Roma: nasce la CEE, nucleo originario dell'Unione Europea"};
        eventi[101] = {26, 3, 1827, "Muore Ludwig van Beethoven a Vienna, sordo da decenni e autore della Nona Sinfonia"};
        eventi[102] = {27, 3, 1977, "Disastro aereo di Tenerife: due Boeing 747 si scontrano sulla pista, 583 morti"};
        eventi[103] = {28, 3, 193,  "L'imperatore Pertinace viene assassinato dalla Guardia Pretoriana e il trono messo all'asta"};
        eventi[104] = {29, 3, 1461, "Battaglia di Towton: la piu' sanguinosa battaglia della Guerra delle Due Rose"};
        eventi[105] = {30, 3, 1282, "Vespri Siciliani: i siciliani si ribellano alla dominazione angioina, massacrando i francesi"};
        eventi[106] = {31, 3, 1889, "Inaugurazione della Torre Eiffel a Parigi, costruita da Gustave Eiffel per l'Esposizione"};
        // Marzo - nuovi
        eventi[107] = {5,  3, 1770, "Massacro di Boston: le truppe britanniche aprono il fuoco sui coloni americani"};
        eventi[108] = {10, 3, 1876, "Alexander Graham Bell effettua la prima telefonata: 'Mr. Watson, come here, I want to see you'"};
        eventi[109] = {15, 3, 1917, "Lo zar Nicola II abdica al trono di Russia durante la Rivoluzione di Febbraio"};
        eventi[110] = {25, 3, 1306, "Robert Bruce viene incoronato Re di Scozia a Scone"};
        eventi[111] = {26, 3, 1953, "Jonas Salk annuncia il vaccino contro la poliomielite, una delle malattie piu' temute"};
        eventi[112] = {28, 3, 1979, "Incidente nucleare di Three Mile Island in Pennsylvania: il peggiore disastro atomico USA"};
        eventi[113] = {30, 3, 1867, "Con il Trattato di Cessione gli USA acquistano l'Alaska dalla Russia per 7,2 milioni di dollari"};
 
        // ============================================================
        // APRILE (114-143 originali + 144-151 nuovi)
        // ============================================================
        eventi[114] = {1,  4, 1976, "Steve Jobs e Steve Wozniak fondano la Apple Computer Company in un garage"};
        eventi[115] = {2,  4, 1982, "L'Argentina invade le Isole Falkland occupate dai britannici: inizia la Guerra delle Falkland"};
        eventi[116] = {3,  4, 1973, "Martin Cooper di Motorola effettua la prima telefonata con un cellulare nella storia"};
        eventi[117] = {4,  4, 1968, "Martin Luther King Jr. viene assassinato al Lorraine Motel di Memphis"};
        eventi[118] = {5,  4, 1955, "Winston Churchill si dimette da Primo Ministro a 80 anni"};
        eventi[119] = {6,  4, 1896, "Prima edizione dei Giochi Olimpici dell'era moderna ad Atene"};
        eventi[120] = {7,  4, 1948, "Fondazione dell'Organizzazione Mondiale della Sanita' (OMS) a Ginevra"};
        eventi[121] = {8,  4, 1820, "Viene scoperta la Venere di Milo nell'isola greca di Milo"};
        eventi[122] = {9,  4, 1865, "Il generale Lee si arrende a Grant ad Appomattox: fine della Guerra di Secessione"};
        eventi[123] = {10, 4, 1815, "Eruzione catastrofica del vulcano Tambora in Indonesia: raffreddamento globale"};
        eventi[124] = {11, 4, 1961, "Inizio del processo al criminale nazista Adolf Eichmann a Gerusalemme"};
        eventi[125] = {12, 4, 1961, "Jurij Gagarin diventa il primo essere umano nello spazio con Vostok 1"};
        eventi[126] = {13, 4, 1970, "Esplosione nel modulo di servizio dell'Apollo 13: crew salva dopo rocambolesco recupero"};
        eventi[127] = {14, 4, 1865, "Il presidente Abraham Lincoln viene colpito a morte da John Wilkes Booth al Ford's Theatre"};
        eventi[128] = {15, 4, 1452, "Nasce Leonardo da Vinci a Vinci, genio universale del Rinascimento"};
        eventi[129] = {16, 4, 1917, "Lenin rientra in Russia dalla Svizzera sul treno sigillato: guidera' la Rivoluzione"};
        eventi[130] = {17, 4, 1975, "I Khmer Rossi di Pol Pot prendono Phnom Penh: inizia il genocidio cambogiano"};
        eventi[131] = {18, 4, 1906, "Il terremoto di San Francisco distrugge gran parte della citta': 3000 morti"};
        eventi[132] = {19, 4, 1775, "Battaglia di Lexington e Concord: i primi colpi della Rivoluzione Americana"};
        eventi[133] = {20, 4, 1889, "Nasce Adolf Hitler a Braunau am Inn, Austria, futuro dittatore del Terzo Reich"};
        eventi[134] = {21, 4, 753,  "Fondazione leggendaria di Roma da parte di Romolo sul colle Palatino"};
        eventi[135] = {22, 4, 1500, "Pedro Alvares Cabral approda sulle coste del Brasile: scoperta ufficiale del paese"};
        eventi[136] = {23, 4, 1616, "Muore William Shakespeare a Stratford-upon-Avon, il maggior drammaturgo della storia"};
        eventi[137] = {24, 4, 1184, "Caduta di Troia secondo la data tradizionale calcolata dagli antichi"};
        eventi[138] = {25, 4, 1945, "Incontro all'Elba tra truppe americane e sovietiche: la Germania e' tagliata in due"};
        eventi[139] = {26, 4, 1986, "Esplosione del reattore n.4 di Chernobyl: la peggiore catastrofe nucleare civile"};
        eventi[140] = {27, 4, 1521, "Ferdinando Magellano muore nella battaglia di Mactan nelle Filippine"};
        eventi[141] = {28, 4, 1945, "Benito Mussolini viene fucilato dai partigiani a Giulino di Mezzegra sul Lago di Como"};
        eventi[142] = {29, 4, 1945, "Adolf Hitler sposa Eva Braun nel bunker sotterraneo della Cancelleria di Berlino"};
        eventi[143] = {30, 4, 1945, "Adolf Hitler si suicida nel Fuhrerbunker a Berlino con la sua sposa Eva Braun"};
        // Aprile - nuovi
        eventi[144] = {2,  4, 1513, "Juan Ponce de Leon approda in Florida cercando la leggendaria Fontana della Giovinezza"};
        eventi[145] = {3,  4, 1860, "Parte la prima corsa del Pony Express da St. Joseph, Missouri, a Sacramento"};
        eventi[146] = {13, 4, 1743, "Nasce Thomas Jefferson a Shadwell, terzo presidente USA e autore della Dichiarazione d'Indipendenza"};
        eventi[147] = {16, 4, 1943, "Albert Hofmann scopre accidentalmente gli effetti allucinogeni dell'LSD nel suo laboratorio"};
        eventi[148] = {17, 4, 1790, "Muore Benjamin Franklin a Philadelphia, a 84 anni, inventore e diplomatico"};
        eventi[149] = {20, 4, 1999, "Strage di Columbine: due studenti uccidono 13 persone in una scuola del Colorado"};
        eventi[150] = {21, 4, 1918, "Il Barone Rosso Manfred von Richthofen viene abbattuto: aveva 80 vittorie aeree"};
        eventi[151] = {23, 4, 1564, "Nasce William Shakespeare a Stratford-upon-Avon, il piu' grande drammaturgo della storia"};
 
        // ============================================================
        // MAGGIO (152-181 originali + 182-189 nuovi)
        // ============================================================
        eventi[152] = {1,  5, 1886, "Rivolta di Haymarket a Chicago: origine internazionale della Festa dei Lavoratori"};
        eventi[153] = {2,  5, 1519, "Muore Leonardo da Vinci al Castello di Clos Luce in Francia, ospite di Francesco I"};
        eventi[154] = {3,  5, 1791, "La Polonia adotta la prima costituzione moderna scritta in Europa"};
        eventi[155] = {4,  5, 1776, "Il Rhode Island dichiara per primo l'indipendenza dalla Gran Bretagna"};
        eventi[156] = {5,  5, 1821, "Muore Napoleone Bonaparte sull'isola di Sant'Elena in esilio dopo 6 anni"};
        eventi[157] = {6,  5, 1527, "Sacco di Roma: i Lanzichenecchi di Carlo V saccheggiano la citta' per otto giorni"};
        eventi[158] = {7,  5, 1945, "La Germania firma la resa incondizionata a Reims: fine della WWII in Europa"};
        eventi[159] = {8,  5, 1945, "V-E Day: il mondo celebra la vittoria degli Alleati sull'Europa nazista"};
        eventi[160] = {9,  5, 1950, "Dichiarazione Schuman: la proposta di Robert Schuman getta le basi della futura UE"};
        eventi[161] = {10, 5, 1940, "Winston Churchill diventa Primo Ministro britannico nel momento piu' buio della guerra"};
        eventi[162] = {11, 5, 330,  "Costantino I inaugura Costantinopoli come nuova capitale dell'Impero Romano"};
        eventi[163] = {12, 5, 1949, "Fine del Blocco di Berlino imposto dai sovietici: l'Occidente ha vinto la prima crisi fredda"};
        eventi[164] = {13, 5, 2022, "Kendrick Lamar pubblica Mr. Morale & The Big Steppers, album atteso da cinque anni"};
        eventi[165] = {14, 5, 1948, "David Ben-Gurion proclama la nascita dello Stato di Israele a Tel Aviv"};
        eventi[166] = {15, 5, 1618, "Keplero scopre la sua Terza Legge del moto planetario: armonia dei mondi"};
        eventi[167] = {16, 5, 1929, "Prima cerimonia di consegna degli Academy Awards (Oscar) a Los Angeles"};
        eventi[168] = {17, 5, 1973, "Inizio delle udienze del Senato USA sullo scandalo Watergate in diretta televisiva"};
        eventi[169] = {18, 5, 1804, "Napoleone Bonaparte viene proclamato Imperatore dei Francesi dal Senato"};
        eventi[170] = {19, 5, 1536, "Anna Bolena, seconda moglie di Enrico VIII, viene decapitata nella Torre di Londra"};
        eventi[171] = {20, 5, 1498, "Vasco da Gama arriva a Calicut in India: prima rotta marittima diretta Europa-India"};
        eventi[172] = {21, 5, 1927, "Charles Lindbergh atterra a Parigi dopo 33 ore di volo: primo transatlantico solitario"};
        eventi[173] = {22, 5, 1176, "Battaglia di Legnano: la Lega Lombarda sconfigge Federico Barbarossa"};
        eventi[174] = {23, 5, 1618, "Seconda defenestrazione di Praga: gettati dalla finestra i commissari imperiali"};
        eventi[175] = {24, 5, 1844, "Samuel Morse invia il primo messaggio telegrafico: 'What hath God wrought'"};
        eventi[176] = {25, 5, 1085, "Alfonso VI di Castiglia conquista Toledo, riportando la citta' ai cristiani"};
        eventi[177] = {26, 5, 1897, "Bram Stoker pubblica il romanzo 'Dracula', pietra miliare della letteratura gotica"};
        eventi[178] = {27, 5, 1703, "Pietro il Grande fonda San Pietroburgo sulle paludi della Neva"};
        eventi[179] = {28, 5, 585,  "Eclissi solare predetta da Talete mette fine alla guerra tra Medi e Lidi"};
        eventi[180] = {29, 5, 1453, "Caduta di Costantinopoli: fine dell'Impero Romano d'Oriente dopo 1000 anni"};
        eventi[181] = {30, 5, 1431, "Giovanna d'Arco viene bruciata sul rogo a Rouen davanti a migliaia di persone"};
        eventi[182] = {31, 5, 1902, "Trattato di Vereeniging: fine della Guerra Anglo-Boera in Sudafrica"};
        // Maggio - nuovi
        eventi[183] = {4,  5, 1970, "Strage di Kent State: la Guardia Nazionale uccide quattro studenti in protesta contro il Vietnam"};
        eventi[184] = {6,  5, 1840, "Viene emesso il Penny Black, il primo francobollo adesivo della storia postale"};
        eventi[185] = {8,  5, 1828, "Nasce Henri Dunant a Ginevra, futuro fondatore della Croce Rossa Internazionale"};
        eventi[186] = {10, 5, 1869, "Completamento della prima ferrovia transcontinentale americana a Promontory Summit, Utah"};
        eventi[187] = {17, 5, 1954, "Sentenza Brown v. Board: la Corte Suprema USA vieta la segregazione scolastica"};
        eventi[188] = {23, 5, 1701, "Il pirata William 'Captain Kidd' viene impiccato a Wapping, Londra"};
        eventi[189] = {26, 5, 1521, "L'Editto di Worms mette Martin Lutero al bando dal Sacro Romano Impero"};
        eventi[190] = {18, 5, 1944, "Le forze polacche conquistano Montecassino sfondando la Linea Gustav"};
 
        // ============================================================
        // GIUGNO (191-220 originali + 221-228 nuovi)
        // ============================================================
        eventi[191] = {1,  6, 1980, "La CNN di Ted Turner inizia le trasmissioni: nasce il telegiornale 24 ore su 24"};
        eventi[192] = {2,  6, 1946, "Il referendum istituzionale italiano sceglie la Repubblica: fine della monarchia"};
        eventi[193] = {3,  6, 1989, "L'esercito cinese reprime il movimento democratico in Piazza Tienanmen: centinaia di morti"};
        eventi[194] = {4,  6, 1989, "Prime elezioni semi-libere in Polonia: Solidarnosc vince schiacciando i comunisti"};
        eventi[195] = {5,  6, 1967, "Inizia la Guerra dei Sei Giorni: Israele attacca Egitto, Giordania e Siria"};
        eventi[196] = {6,  6, 1944, "D-Day: 156.000 soldati alleati sbarcano sulle spiagge della Normandia"};
        eventi[197] = {7,  6, 1494, "Trattato di Tordesillas: Spagna e Portogallo si dividono il mondo non cristiano"};
        eventi[198] = {8,  6, 632,  "Muore Maometto a Medina: inizia la crisi di successione che spacchera' l'Islam"};
        eventi[199] = {9,  6, 68,   "L'imperatore Nerone si suicida in fuga da Roma dopo essere stato abbandonato da tutti"};
        eventi[200] = {10, 6, 1940, "L'Italia di Mussolini entra in guerra a fianco della Germania nazista"};
        eventi[201] = {11, 6, 1984, "Muore Enrico Berlinguer, segretario del PCI, durante un comizio a Padova"};
        eventi[202] = {12, 6, 1942, "Anna Frank riceve per il compleanno il diario dove raccontera' la sua vita nascosta"};
        eventi[203] = {13, 6, 323,  "Muore Alessandro Magno a Babilonia, a soli 32 anni, re di un impero immenso"};
        eventi[204] = {14, 6, 1800, "Battaglia di Marengo: Napoleone ribalta la situazione e sconfigge gli Austriaci"};
        eventi[205] = {15, 6, 1215, "Il re Giovanni Senzaterra firma la Magna Carta a Runnymede: prima limitazione del potere reale"};
        eventi[206] = {16, 6, 1963, "Valentina Tereskova diventa la prima donna a volare nello spazio con Vostok 6"};
        eventi[207] = {17, 6, 1972, "Cinque uomini vengono arrestati al Watergate: inizia lo scandalo che abbattera' Nixon"};
        eventi[208] = {18, 6, 1815, "Battaglia di Waterloo: la sconfitta definitiva di Napoleone Bonaparte"};
        eventi[209] = {19, 6, 1867, "L'imperatore Massimiliano d'Asburgo viene fucilato dai repubblicani messicani"};
        eventi[210] = {20, 6, 1837, "La diciottenne Vittoria diventa Regina del Regno Unito alla morte di Guglielmo IV"};
        eventi[211] = {21, 6, 1527, "Niccolo' Machiavelli muore a Firenze, autore del Principe e storico fiorentino"};
        eventi[212] = {22, 6, 1633, "Galileo Galilei abiura davanti all'Inquisizione: 'Eppur si muove' (apocrifa)"};
        eventi[213] = {23, 6, 1757, "Battaglia di Plassey: la Compagnia delle Indie batte i Moghul, inizia il dominio britannico"};
        eventi[214] = {24, 6, 1894, "Il presidente francese Sadi Carnot viene assassinato da un anarchico italiano a Lione"};
        eventi[215] = {25, 6, 1876, "Battaglia di Little Bighorn: Toro Seduto e Cavallo Pazzo annientano le truppe di Custer"};
        eventi[216] = {26, 6, 1945, "Firma della Carta delle Nazioni Unite a San Francisco da parte di 50 nazioni"};
        eventi[217] = {27, 6, 1905, "Ammutinamento della corazzata Potëmkin nel porto di Odessa"};
        eventi[218] = {28, 6, 1914, "L'arciduca Francesco Ferdinando e la moglie vengono assassinati a Sarajevo da Gavrilo Princip"};
        eventi[219] = {29, 6, 1613, "Il Globe Theatre di Shakespeare brucia durante la rappresentazione dell'Enrico VIII"};
        eventi[220] = {30, 6, 1520, "La Noche Triste: gli Aztechi cacciano Cortes da Tenochtitlan con gravi perdite"};
        // Giugno - nuovi
        eventi[221] = {8,  6, 1949, "George Orwell pubblica '1984': romanzo distopico profetico sul totalitarismo"};
        eventi[222] = {10, 6, 1944, "Massacro di Oradour-sur-Glane: le Waffen-SS uccidono 642 civili francesi"};
        eventi[223] = {16, 6, 1816, "Mary Shelley ospite di Byron a Villa Diodati immagina il personaggio di Frankenstein"};
        eventi[224] = {22, 6, 1941, "La Germania lancia l'Operazione Barbarossa: 3 milioni di soldati invadono l'URSS"};
        eventi[225] = {23, 6, 1912, "Nasce Alan Turing a Londra, padre dell'informatica e decriptatore di Enigma"};
        eventi[226] = {26, 6, 1963, "JFK pronuncia a Berlino Ovest il celebre discorso 'Ich bin ein Berliner'"};
        eventi[227] = {27, 6, 1954, "Entra in funzione Obninsk, la prima centrale nucleare commerciale della storia, in URSS"};
        eventi[228] = {30, 6, 1908, "Evento di Tunguska: una meteora esplode in Siberia con la potenza di mille bombe atomiche"};
 
        // ============================================================
        // LUGLIO (229-260 originali + 261-268 nuovi)
        // ============================================================
        eventi[229] = {1,  7, 1916, "Inizia la Battaglia della Somme: nel solo primo giorno 57.470 caduti britannici"};
        eventi[230] = {2,  7, 1900, "Primo volo dello Zeppelin LZ1 sul lago di Costanza: nasce il dirigibile rigido"};
        eventi[231] = {3,  7, 1608, "Samuel de Champlain fonda la citta' di Quebec sulle rive del fiume San Lorenzo"};
        eventi[232] = {4,  7, 1776, "Il Congresso approva la Dichiarazione d'Indipendenza: nascono gli Stati Uniti d'America"};
        eventi[233] = {5,  7, 1811, "Il Venezuela dichiara l'indipendenza dalla Spagna: prima repubblica latinoamericana"};
        eventi[234] = {6,  7, 1535, "Tommaso Moro viene decapitato per aver rifiutato di riconoscere Enrico VIII capo della Chiesa"};
        eventi[235] = {7,  7, 1937, "Incidente al Ponte di Marco Polo: inizia la Seconda Guerra Sino-Giapponese"};
        eventi[236] = {8,  7, 1497, "Vasco da Gama salpa da Lisbona verso l'India circumnavigando l'Africa"};
        eventi[237] = {9,  7, 1776, "Prima lettura pubblica della Dichiarazione d'Indipendenza davanti all'esercito a New York"};
        eventi[238] = {10, 7, 1940, "Inizia la Battaglia d'Inghilterra: la Luftwaffe bombarda le citta' britanniche"};
        eventi[239] = {11, 7, 1302, "Battaglia degli Speroni d'Oro a Courtrai: milizie fiamminghe sconfiggono la cavalleria francese"};
        eventi[240] = {12, 7, 100,  "Nascita di Gaio Giulio Cesare a Roma secondo la data tradizionale"};
        eventi[241] = {13, 7, 1793, "Jean-Paul Marat viene assassinato da Charlotte Corday nella sua vasca da bagno"};
        eventi[242] = {14, 7, 1789, "Presa della Bastiglia a Parigi: il popolo abbatte il simbolo della tirannia reale"};
        eventi[243] = {15, 7, 1099, "I Crociati conquistano Gerusalemme dopo cinque settimane di assedio"};
        eventi[244] = {16, 7, 1945, "Test Trinity nel New Mexico: prima esplosione nucleare della storia"};
        eventi[245] = {17, 7, 1918, "Lo zar Nicola II, la famiglia Romanov e i servi vengono fucilati a Ekaterinburg"};
        eventi[246] = {18, 7, 64,   "Grande incendio di Roma: brucia per sei giorni, distrugge dieci dei quattordici quartieri"};
        eventi[247] = {19, 7, 711,  "Battaglia di Guadalete: gli Arabi di Tariq ibn Ziyad sconfiggono i Visigoti"};
        eventi[248] = {20, 7, 1969, "Neil Armstrong mette piede sulla Luna: 'Un piccolo passo per l'uomo...'"};
        eventi[249] = {21, 7, 365,  "Terremoto di Creta: lo tsunami che ne segue distrugge Alessandria d'Egitto"};
        eventi[250] = {22, 7, 1812, "Battaglia di Salamanca: Wellington sconfigge l'esercito napoleonico in Spagna"};
        eventi[251] = {23, 7, 1952, "Colpo di stato dei Liberi Ufficiali in Egitto: Farouk I viene deposto"};
        eventi[252] = {24, 7, 1911, "Hiram Bingham scopre la citta' inca perduta di Machu Picchu in Peru'"};
        eventi[253] = {25, 7, 306,  "Costantino I viene proclamato imperatore romano dalle sue truppe a York"};
        eventi[254] = {26, 7, 1956, "Nasser nazionalizza il Canale di Suez scatenando la crisi internazionale"};
        eventi[255] = {27, 7, 1953, "Armistizio di Panmunjom: fine della Guerra di Corea dopo tre anni di combattimenti"};
        eventi[256] = {28, 7, 1914, "L'Austria-Ungheria dichiara guerra alla Serbia: scoppia la Prima Guerra Mondiale"};
        eventi[257] = {29, 7, 1588, "La flotta di Elisabetta I sconfigge la Grande Armada spagnola di Filippo II"};
        eventi[258] = {30, 7, 1932, "Inaugurazione dei Giochi Olimpici di Los Angeles: prime Olimpiadi con il villaggio atleti"};
        eventi[259] = {31, 7, 1498, "Cristoforo Colombo avvista l'isola di Trinidad durante il suo terzo viaggio"};
        // Luglio - nuovi
        eventi[260] = {2,  7, 1566, "Muore Nostradamus a Salon-de-Provence, medico e autore delle famose Centurie profetiche"};
        eventi[261] = {11, 7, 1804, "Aaron Burr uccide in duello Alexander Hamilton, primo Segretario del Tesoro americano"};
        eventi[262] = {13, 7, 1930, "Inizia il primo Campionato Mondiale di Calcio a Montevideo, vinto dall'Uruguay"};
        eventi[263] = {25, 7, 1943, "Benito Mussolini viene sfiduciato dal Gran Consiglio del Fascismo e poi arrestato"};
        eventi[264] = {27, 7, 1866, "Viene posato con successo il primo cavo telegrafico transatlantico permanente nell'Atlantico"};
        eventi[265] = {31, 7, 1944, "Muore Antoine de Saint-Exupery durante una missione di ricognizione, autore del Piccolo Principe"};
        eventi[266] = {15, 7, 1685, "Battaglia di Sedgemoor: ultima battaglia combattuta sul suolo inglese"};
        eventi[267] = {8,  7, 1776, "La Campana della Liberta' di Philadelphia suona per annunciare la firma dell'Indipendenza"};
 
        // ============================================================
        // AGOSTO (268-297 originali + 298-306 nuovi)
        // ============================================================
        eventi[268] = {1,  8, 1944, "Inizio dell'insurrezione di Varsavia contro l'occupazione nazista: combattera' 63 giorni"};
        eventi[269] = {2,  8, 216,  "Battaglia di Canne: Annibale circonda e annichilisce 8 legioni romane"};
        eventi[270] = {3,  8, 1492, "Cristoforo Colombo salpa da Palos de la Frontera con tre caravelle verso l'ignoto"};
        eventi[271] = {4,  8, 1914, "La Germania invade il Belgio neutrale: Gran Bretagna dichiara guerra alla Germania"};
        eventi[272] = {5,  8, 1962, "Muore Marilyn Monroe a Hollywood per un'overdose di barbiturici a 36 anni"};
        eventi[273] = {6,  8, 1945, "Il bombardiere Enola Gay sgancia Little Boy su Hiroshima: 80.000 morti immediati"};
        eventi[274] = {7,  8, 1960, "La Costa d'Avorio proclama l'indipendenza dalla Francia"};
        eventi[275] = {8,  8, 1974, "Richard Nixon annuncia le dimissioni da presidente USA in diretta televisiva"};
        eventi[276] = {9,  8, 1945, "Fat Man esplode su Nagasaki: con Hiroshima causa la resa del Giappone"};
        eventi[277] = {10, 8, 1792, "Assalto alle Tuileries: il popolo parigino abbatte definitivamente la monarchia"};
        eventi[278] = {11, 8, 1919, "La Costituzione di Weimar entra in vigore: nasce la prima repubblica tedesca"};
        eventi[279] = {12, 8, 30,   "Cleopatra VII si suicida ad Alessandria con un aspide dopo la morte di Marco Antonio"};
        eventi[280] = {13, 8, 1961, "Inizia la costruzione del Muro di Berlino nella notte: la citta' e' divisa in due"};
        eventi[281] = {14, 8, 1947, "Il Pakistan diventa stato indipendente dalla Gran Bretagna con Mohammed Ali Jinnah"};
        eventi[282] = {15, 8, 1947, "Nehru proclama l'indipendenza dell'India: fine del dominio coloniale britannico"};
        eventi[283] = {16, 8, 1977, "Muore Elvis Presley nella sua villa di Graceland a Memphis, il Re del Rock & Roll"};
        eventi[284] = {17, 8, 1945, "Sukarno proclama l'indipendenza dell'Indonesia dall'Olanda dopo tre secoli"};
        eventi[285] = {18, 8, 1227, "Muore Gengis Khan, fondatore dell'Impero Mongolo, il piu' vasto della storia"};
        eventi[286] = {19, 8, 14,   "Muore l'imperatore Augusto a Nola: era stato il primo imperatore romano"};
        eventi[287] = {20, 8, 1940, "Leon Trotsky viene assassinato con un piccone a Citta' del Messico"};
        eventi[288] = {21, 8, 1944, "Conferenza di Dumbarton Oaks: le grandi potenze progettano le Nazioni Unite"};
        eventi[289] = {22, 8, 1485, "Battaglia di Bosworth: Riccardo III muore in combattimento, fine della Guerra delle Due Rose"};
        eventi[290] = {23, 8, 79,   "Il Vesuvio erutta seppellendo Pompei, Ercolano e Stabia sotto cenere e lapilli"};
        eventi[291] = {24, 8, 410,  "I Visigoti di Alarico saccheggiano Roma per tre giorni: primo saccheggio in 800 anni"};
        eventi[292] = {25, 8, 1609, "Galileo presenta il suo telescopio al Doge di Venezia sul campanile di San Marco"};
        eventi[293] = {26, 8, 1789, "L'Assemblea Nazionale Francese approva la Dichiarazione dei Diritti dell'Uomo"};
        eventi[294] = {27, 8, 1883, "Eruzione del Krakatoa: l'esplosione si sente a 4800 km, tsunami uccide 36.000 persone"};
        eventi[295] = {28, 8, 1963, "Martin Luther King pronuncia il discorso 'I Have a Dream' davanti a 250.000 persone"};
        eventi[296] = {29, 8, 1949, "L'URSS fa esplodere la sua prima bomba atomica nel Kazakhstan"};
        eventi[297] = {30, 8, 1918, "Attentato a Lenin a Mosca: colpito da due pallottole, sopravvivera'"};
        eventi[298] = {31, 8, 1997, "Diana Spencer, Principessa del Galles, muore in un incidente d'auto a Parigi"};
        // Agosto - nuovi
        eventi[299] = {4,  8, 70,   "Le truppe romane di Tito distruggono il Secondo Tempio di Gerusalemme"};
        eventi[300] = {6,  8, 1991, "Tim Berners-Lee pubblica il primo sito web della storia al CERN di Ginevra"};
        eventi[301] = {10, 8, 1519, "Ferdinando Magellano salpa da Siviglia per il primo giro del mondo in assoluto"};
        eventi[302] = {17, 8, 1807, "Robert Fulton inaugura il Clermont, primo battello a vapore commerciale sul fiume Hudson"};
        eventi[303] = {19, 8, 1839, "Louis Daguerre presenta al pubblico il dagherrotipo: nasce ufficialmente la fotografia"};
        eventi[304] = {22, 8, 1864, "Viene firmata la Prima Convenzione di Ginevra: nasce il diritto internazionale umanitario"};
        eventi[305] = {29, 8, 1831, "Michael Faraday scopre il principio fondamentale dell'induzione elettromagnetica"};
        eventi[306] = {31, 8, 1888, "Mary Ann Nichols viene uccisa a Whitechapel: primo omicidio attribuito a Jack lo Squartatore"};
 
        // ============================================================
        // SETTEMBRE (307-335 originali + 336-343 nuovi)
        // ============================================================
        eventi[307] = {1,  9, 1939, "La Germania invade la Polonia con 1,5 milioni di soldati: inizia la Seconda Guerra Mondiale"};
        eventi[308] = {2,  9, 1945, "Ho Chi Minh proclama l'indipendenza del Vietnam dal Giappone e dalla Francia"};
        eventi[309] = {3,  9, 301,  "San Marino fonda la sua Repubblica: e' la piu' antica repubblica del mondo"};
        eventi[310] = {4,  9, 476,  "Odoacre depone Romolo Augustolo: cade l'Impero Romano d'Occidente"};
        eventi[311] = {5,  9, 1972, "Settembre Nero rapisce e uccide undici atleti israeliani alle Olimpiadi di Monaco"};
        eventi[312] = {6,  9, 1522, "La nave Victoria torna a Siviglia: completato il primo giro del mondo"};
        eventi[313] = {7,  9, 1812, "Battaglia di Borodino: la piu' sanguinosa giornata delle guerre napoleoniche"};
        eventi[314] = {8,  9, 1943, "L'Italia firma l'armistizio di Cassibile con gli Alleati: fine della guerra fascista"};
        eventi[315] = {9,  9, 1976, "Muore Mao Zedong a Pechino, fondatore della Repubblica Popolare Cinese"};
        eventi[316] = {10, 9, 1898, "L'imperatrice Elisabetta d'Austria ('Sissi') viene assassinata a Ginevra da un anarchico"};
        eventi[317] = {11, 9, 2001, "Attacchi terroristici dell'11 settembre: crollano le Twin Towers, quasi 3000 morti"};
        eventi[318] = {12, 9, 1683, "Battaglia di Vienna: Jan Sobieski sconfigge i Turchi Ottomani, fine dell'espansione islamica"};
        eventi[319] = {13, 9, 81,   "Domiziano diventa imperatore romano dopo la morte del padre Vespasiano"};
        eventi[320] = {14, 9, 1321, "Muore Dante Alighieri a Ravenna, autore della Divina Commedia"};
        eventi[321] = {15, 9, 1821, "Costa Rica, Guatemala, Honduras, Nicaragua ed El Salvador dichiarano l'indipendenza"};
        eventi[322] = {16, 9, 1620, "I Padri Pellegrini salpano dall'Inghilterra con la Mayflower verso il Nuovo Mondo"};
        eventi[323] = {17, 9, 1787, "I delegati firmano la Costituzione degli Stati Uniti a Philadelphia"};
        eventi[324] = {18, 9, 1931, "Incidente di Mukden: il Giappone usa un pretesto per invadere la Manciuria"};
        eventi[325] = {19, 9, 1356, "Battaglia di Poitiers: gli inglesi catturano il re Giovanni II di Francia"};
        eventi[326] = {20, 9, 1870, "Presa di Porta Pia: le truppe italiane entrano a Roma, che diventa capitale d'Italia"};
        eventi[327] = {21, 9, 1792, "La Convenzione Nazionale abolisce la monarchia e proclama la Prima Repubblica Francese"};
        eventi[328] = {22, 9, 1862, "Lincoln annuncia il Proclama di Emancipazione: liberi gli schiavi negli stati ribelli"};
        eventi[329] = {23, 9, 1846, "Scoperta del pianeta Nettuno da parte di Galle e Le Verrier"};
        eventi[330] = {24, 9, 622,  "Egira: Maometto lascia La Mecca per Medina, anno zero del calendario islamico"};
        eventi[331] = {25, 9, 1513, "Vasco Nunez de Balboa scopre l'Oceano Pacifico dall'istmo di Panama"};
        eventi[332] = {26, 9, 1580, "Francis Drake completa la seconda circumnavigazione del globo ad Plymouth"};
        eventi[333] = {27, 9, 1821, "Augustin de Iturbide proclama l'indipendenza del Messico dalla Spagna"};
        eventi[334] = {28, 9, 1066, "Guglielmo il Conquistatore sbarca a Pevensey con il suo esercito normanno"};
        eventi[335] = {29, 9, 1364, "Battaglia di Auray: fine della Guerra di Successione bretone"};
        eventi[336] = {30, 9, 1938, "Accordi di Monaco: Chamberlain cede i Sudeti a Hitler credendo di evitare la guerra"};
        // Settembre - nuovi
        eventi[337] = {8,  9, 1504, "Michelangelo svela il David in Piazza della Signoria a Firenze: capolavoro del Rinascimento"};
        eventi[338] = {9,  9, 9,    "Battaglia della Foresta di Teutoburgo: Arminio distrugge tre legioni romane di Varo"};
        eventi[339] = {13, 9, 1759, "Battaglia delle Pianure di Abramo: gli inglesi conquistano Quebec dai francesi"};
        eventi[340] = {16, 9, 1810, "Miguel Hidalgo pronuncia il Grito de Dolores: inizia la guerra d'indipendenza messicana"};
        eventi[341] = {19, 9, 1991, "Due escursionisti trovano Otzi, l'Uomo del Similaun, conservato nel ghiaccio da 5300 anni"};
        eventi[342] = {25, 9, 1066, "Battaglia di Stamford Bridge: Harold II sconfigge il re norvegese Harald Hardrada"};
        eventi[343] = {30, 9, 1955, "James Dean muore in un incidente d'auto in California: aveva solo 24 anni"};
 
        // ============================================================
        // OTTOBRE (344-373 originali + 374-381 nuovi)
        // ============================================================
        eventi[344] = {1,  10, 1949, "Mao Zedong proclama a Pechino la nascita della Repubblica Popolare Cinese"};
        eventi[345] = {2,  10, 1187, "Saladino conquista Gerusalemme: la Terza Crociata sara' la risposta cristiana"};
        eventi[346] = {3,  10, 1990, "La riunificazione tedesca e' ufficiale: la DDR cessa di esistere"};
        eventi[347] = {4,  10, 1582, "Entra in vigore il calendario gregoriano: si salta dal 4 al 15 ottobre"};
        eventi[348] = {5,  10, 1962, "Esce nei cinema il primo film di James Bond, Dr. No, con Sean Connery"};
        eventi[349] = {6,  10, 1973, "Egitto e Siria attaccano Israele nel giorno di Yom Kippur: inizia la quarta guerra arabo-israeliana"};
        eventi[350] = {7,  10, 1571, "Battaglia di Lepanto: la Lega Santa cristiana sconfigge la flotta ottomana"};
        eventi[351] = {8,  10, 1967, "Ernesto Che Guevara viene catturato dall'esercito boliviano"};
        eventi[352] = {9,  10, 1962, "L'Uganda ottiene l'indipendenza dalla Gran Bretagna"};
        eventi[353] = {10, 10, 732,  "Battaglia di Poitiers: Carlo Martello ferma l'avanzata araba in Europa"};
        eventi[354] = {11, 10, 1962, "Papa Giovanni XXIII apre il Concilio Vaticano II: rivoluzione nella Chiesa cattolica"};
        eventi[355] = {12, 10, 1492, "Cristoforo Colombo avvista la prima terra americana: l'isola di Guanahani (Bahamas)"};
        eventi[356] = {13, 10, 54,   "Nerone diventa imperatore romano dopo la morte sospetta di Claudio"};
        eventi[357] = {14, 10, 1066, "Battaglia di Hastings: Guglielmo il Conquistatore sconfigge Harold II"};
        eventi[358] = {15, 10, 1582, "Santa Teresa d'Avila muore ad Alba de Tormes, riformatrice del Carmelo"};
        eventi[359] = {16, 10, 1793, "Maria Antonietta viene ghigliottinata in Place de la Revolution a Parigi"};
        eventi[360] = {17, 10, 1931, "Al Capone viene condannato a 11 anni di carcere per evasione fiscale"};
        eventi[361] = {18, 10, 1867, "La Russia cede formalmente l'Alaska agli Stati Uniti ad Arcangelo"};
        eventi[362] = {19, 10, 202,  "Battaglia di Zama: Scipione l'Africano sconfigge Annibale ponendo fine alla guerra"};
        eventi[363] = {20, 10, 1944, "Il generale MacArthur ritorna nelle Filippine con le forze alleate"};
        eventi[364] = {21, 10, 1805, "Battaglia di Trafalgar: Nelson sconfigge la flotta franco-spagnola ma cade in battaglia"};
        eventi[365] = {22, 10, 1962, "Kennedy annuncia in televisione il blocco navale di Cuba: apice della Guerra Fredda"};
        eventi[366] = {23, 10, 42,   "Seconda battaglia di Filippi: il suicidio di Bruto consacra la vittoria di Ottaviano"};
        eventi[367] = {24, 10, 1945, "Entra in vigore la Carta delle Nazioni Unite: nasce ufficialmente l'ONU"};
        eventi[368] = {25, 10, 1415, "Battaglia di Agincourt: Enrico V d'Inghilterra sconfigge la cavalleria francese"};
        eventi[369] = {26, 10, 1881, "Sparatoria all'OK Corral a Tombstone, Arizona: i fratelli Earp contro i Clanton"};
        eventi[370] = {27, 10, 1962, "Il giorno piu' pericoloso della storia: apice della crisi dei missili di Cuba"};
        eventi[371] = {28, 10, 312,  "Battaglia di Ponte Milvio: Costantino sconfigge Massenzio e diventa unico imperatore"};
        eventi[372] = {29, 10, 1929, "Martedi' nero: il crollo di Wall Street da inizio alla Grande Depressione mondiale"};
        eventi[373] = {30, 10, 1938, "Orson Welles trasmette La Guerra dei Mondi come notiziario: panico negli USA"};
        eventi[374] = {31, 10, 1517, "Martin Lutero affigge le 95 Tesi a Wittenberg: nasce la Riforma Protestante"};
        // Ottobre - nuovi
        eventi[375] = {8,  10, 1871, "Grande Incendio di Chicago: la citta' brucia per tre giorni, 300 morti e 100.000 senza casa"};
        eventi[376] = {13, 10, 1307, "Il re Filippo IV di Francia fa arrestare simultaneamente tutti i Cavalieri Templari"};
        eventi[377] = {16, 10, 1846, "Prima operazione chirurgica con anestesia all'etere al Massachusetts General Hospital di Boston"};
        eventi[378] = {22, 10, 1879, "Thomas Edison accende con successo la prima lampadina a incandescenza di lunga durata"};
        eventi[379] = {25, 10, 1881, "Nasce Pablo Picasso a Malaga, Spagna, cofondatore del Cubismo e padre dell'arte moderna"};
        eventi[380] = {27, 10, 1858, "Nasce Theodore Roosevelt a New York, 26° presidente USA e fondatore dei Parchi Nazionali"};
        eventi[381] = {28, 10, 1886, "Inaugurazione ufficiale della Statua della Liberta' a New York, dono del popolo francese"};
 
        // ============================================================
        // NOVEMBRE (382-411 originali + 412-419 nuovi)
        // ============================================================
        eventi[382] = {1,  11, 1755, "Il terremoto di Lisbona e il conseguente tsunami distruggono la capitale portoghese"};
        eventi[383] = {2,  11, 1947, "Howard Hughes vola per il primo e unico volo dello Spruce Goose, il piu' grande aereo"};
        eventi[384] = {3,  11, 1957, "La cagnetta Laika, a bordo di Sputnik 2, e' il primo essere vivente in orbita"};
        eventi[385] = {4,  11, 1922, "Howard Carter scopre i gradini che conducono alla tomba di Tutankhamon"};
        eventi[386] = {5,  11, 1605, "La Congiura delle Polveri viene scoperta: Guy Fawkes e' arrestato con i barili di polvere"};
        eventi[387] = {6,  11, 1860, "Abraham Lincoln viene eletto 16° presidente degli USA: il Sud minaccia la secessione"};
        eventi[388] = {7,  11, 1917, "Rivoluzione d'Ottobre: i Bolscevichi di Lenin prendono il potere a Pietrogrado"};
        eventi[389] = {8,  11, 392,  "Teodosio I vieta tutti i culti pagani nell'Impero Romano con l'editto di Tessalonica"};
        eventi[390] = {9,  11, 1989, "Il Muro di Berlino cade: il simbolo della Guerra Fredda crolla sotto i picconi dei berlinesi"};
        eventi[391] = {10, 11, 1483, "Nasce Martin Lutero a Eisleben, il riformatore che divise per sempre il Cristianesimo"};
        eventi[392] = {11, 11, 1918, "Armistizio di Compiegne: alle 11 dell'11/11 cessa il fuoco, fine della Grande Guerra"};
        eventi[393] = {12, 11, 1954, "Ellis Island chiude come centro di immigrazione dopo aver accolto 12 milioni di persone"};
        eventi[394] = {13, 11, 1985, "L'eruzione del Nevado del Ruiz in Colombia scatena una colata che seppellisce Armero"};
        eventi[395] = {14, 11, 1889, "Nellie Bly inizia il suo giro del mondo in 72 giorni per battere il record di Phileas Fogg"};
        eventi[396] = {15, 11, 1315, "La Confederazione Svizzera sconfigge gli Asburgo a Morgarten: nasce la Svizzera moderna"};
        eventi[397] = {16, 11, 1632, "Battaglia di Lutzen: il re svedese Gustavo Adolfo muore mentre guida la carica"};
        eventi[398] = {17, 11, 1869, "Inaugurazione del Canale di Suez: il Mediterraneo e' connesso al Mar Rosso"};
        eventi[399] = {18, 11, 1928, "Topolino debutta nel corto animato Steamboat Willie: nasce il simbolo Disney"};
        eventi[400] = {19, 11, 1863, "Abraham Lincoln pronuncia il Discorso di Gettysburg in pochi memorabili minuti"};
        eventi[401] = {20, 11, 1945, "Apertura del Processo di Norimberga: i criminali nazisti di fronte alla giustizia"};
        eventi[402] = {21, 11, 1783, "Primo volo in mongolfiera con esseri umani: Pilatre de Rozier sorvola Parigi per 25 minuti"};
        eventi[403] = {22, 11, 1963, "Il presidente John Fitzgerald Kennedy viene assassinato a Dallas da Lee Harvey Oswald"};
        eventi[404] = {23, 11, 1407, "Luigi d'Orleans viene assassinato dai sicari di Giovanni Senzapaura: guerra civile in Francia"};
        eventi[405] = {24, 11, 1859, "Charles Darwin pubblica 'L'Origine delle Specie': rivoluzione nella storia del pensiero"};
        eventi[406] = {25, 11, 1947, "Inizia l'era della Lista Nera di Hollywood: 10 sceneggiatori rifiutano di testimoniare"};
        eventi[407] = {26, 11, 1922, "Howard Carter e Lord Carnarvon aprono per la prima volta la tomba di Tutankhamon"};
        eventi[408] = {27, 11, 1095, "Papa Urbano II indice la Prima Crociata al Concilio di Clermont"};
        eventi[409] = {28, 11, 1520, "Magellano attraversa lo stretto che porta il suo nome tra l'Atlantico e il Pacifico"};
        eventi[410] = {29, 11, 1947, "L'ONU approva il Piano di Partizione della Palestina: nascono due stati separati"};
        eventi[411] = {30, 11, 1782, "Firma del Trattato di Parigi preliminare: Gran Bretagna riconosce l'indipendenza USA"};
        // Novembre - nuovi
        eventi[412] = {3,  11, 1793, "La scrittrice Olympe de Gouges, autrice della Dichiarazione dei Diritti della Donna, viene ghigliottinata"};
        eventi[413] = {8,  11, 1519, "Hernan Cortes incontra l'imperatore azteco Montezuma II a Tenochtitlan"};
        eventi[414] = {14, 11, 1851, "Herman Melville pubblica Moby Dick, capolavoro della letteratura americana"};
        eventi[415] = {16, 11, 1532, "Francisco Pizarro cattura l'imperatore Inca Atahualpa a Cajamarca: fine dell'Impero Inca"};
        eventi[416] = {18, 11, 1626, "Viene consacrata la Basilica di San Pietro a Roma, la piu' grande chiesa cristiana del mondo"};
        eventi[417] = {20, 11, 1917, "Battaglia di Cambrai: primo massiccio impiego dei carri armati nella storia"};
        eventi[418] = {25, 11, 2016, "Muore Fidel Castro a L'Avana, leader della Rivoluzione cubana per quasi sessant'anni"};
        eventi[419] = {30, 11, 1667, "Nasce Jonathan Swift a Dublino, autore dei Viaggi di Gulliver e feroce satirico"};
 
        // ============================================================
        // DICEMBRE (420-449 originali + 450-459 nuovi)
        // ============================================================
        eventi[420] = {1,  12, 1955, "Rosa Parks si rifiuta di cedere il posto a un bianco: inizia il boicottaggio di Montgomery"};
        eventi[421] = {2,  12, 1804, "Napoleone si autoincoronaImpera tore in Notre-Dame di Parigi, in presenza del Papa"};
        eventi[422] = {3,  12, 1967, "Christiaan Barnard esegue il primo trapianto di cuore della storia a Città del Capo"};
        eventi[423] = {4,  12, 1872, "Il brigantino Mary Celeste viene trovato abbandonato in Atlantico: mistero irrisolto"};
        eventi[424] = {5,  12, 1933, "Il 21° Emendamento pone fine al proibizionismo negli USA dopo 14 anni"};
        eventi[425] = {6,  12, 1865, "Il 13° Emendamento abolisce la schiavitu' negli Stati Uniti d'America"};
        eventi[426] = {7,  12, 1941, "Il Giappone attacca a sorpresa la base navale americana di Pearl Harbor alle Hawaii"};
        eventi[427] = {8,  12, 1980, "John Lennon viene assassinato davanti al Dakota Building di New York da Mark Chapman"};
        eventi[428] = {9,  12, 1905, "La legge Briand-Combes sancisce la separazione tra Chiesa e Stato in Francia"};
        eventi[429] = {10, 12, 1948, "L'ONU approva la Dichiarazione Universale dei Diritti dell'Uomo a Parigi"};
        eventi[430] = {11, 12, 1946, "L'UNICEF (Fondo ONU per l'infanzia) viene fondato dall'Assemblea Generale"};
        eventi[431] = {12, 12, 1901, "Guglielmo Marconi riceve il primo segnale radio transatlantico dalla Cornovaglia"};
        eventi[432] = {13, 12, 1577, "Francis Drake salpa da Plymouth iniziando la sua circumnavigazione del globo"};
        eventi[433] = {14, 12, 1911, "Roald Amundsen raggiunge il Polo Sud con la sua spedizione: batte Scott di 33 giorni"};
        eventi[434] = {15, 12, 1961, "Adolf Eichmann viene condannato a morte dal Tribunale di Gerusalemme"};
        eventi[435] = {16, 12, 1773, "Boston Tea Party: i coloni americani gettano in mare il te' britannico protestando"};
        eventi[436] = {17, 12, 1903, "I fratelli Wright volano per 12 secondi a Kitty Hawk: nasce l'aviazione moderna"};
        eventi[437] = {18, 12, 1865, "Il 13° Emendamento viene ratificato: la schiavitu' e' abolita in tutti gli USA"};
        eventi[438] = {19, 12, 1984, "Gran Bretagna e Cina firmano la Dichiarazione Congiunta sul futuro di Hong Kong"};
        eventi[439] = {20, 12, 1989, "Gli USA invadono Panama per catturare il generale Noriega: Operazione Giusta Causa"};
        eventi[440] = {21, 12, 1988, "Un Boeing 747 di Pan Am esplode sopra Lockerbie in Scozia: 270 morti"};
        eventi[441] = {22, 12, 1849, "Fedor Dostoevskij viene condannato a morte, poi all'ultimo momento graziato"};
        eventi[442] = {23, 12, 1913, "Il Federal Reserve Act crea la banca centrale degli Stati Uniti"};
        eventi[443] = {24, 12, 1914, "Tregua di Natale sul fronte occidentale: soldati nemici giocano a calcio nella terra di nessuno"};
        eventi[444] = {25, 12, 800,  "Carlo Magno viene incoronato Imperatore del Sacro Romano Impero da Papa Leone III"};
        eventi[445] = {26, 12, 1898, "Marie e Pierre Curie annunciano la scoperta del Radio alla Sorbona di Parigi"};
        eventi[446] = {27, 12, 1831, "Charles Darwin inizia il viaggio sul Beagle che lo portera' a formulare la teoria evolutiva"};
        eventi[447] = {28, 12, 1895, "Prima proiezione cinematografica pubblica dei fratelli Lumiere al Grand Cafe' di Parigi"};
        eventi[448] = {29, 12, 1170, "Thomas Becket, arcivescovo di Canterbury, viene assassinato nella sua cattedrale"};
        eventi[449] = {30, 12, 1922, "Nasce ufficialmente l'Unione delle Repubbliche Socialiste Sovietiche (URSS)"};
        // Dicembre - nuovi
        eventi[450] = {8,  12, 1941, "Gli Stati Uniti dichiarano guerra al Giappone il giorno dopo Pearl Harbor"};
        eventi[451] = {10, 12, 1869, "Il Wyoming diventa il primo territorio USA a concedere il diritto di voto alle donne"};
        eventi[452] = {16, 12, 1944, "La Germania nazista lancia la sua ultima offensiva: inizia la Battaglia delle Ardenne"};
        eventi[453] = {18, 12, 1912, "Viene annunciata la scoperta del Cranio di Piltdown: il piu' celebre falso paleontologico"};
        eventi[454] = {21, 12, 1620, "I Padri Pellegrini sbarcano a Plymouth Rock, Massachusetts: fondano la prima colonia"};
        eventi[455] = {22, 12, 1894, "Alfred Dreyfus viene condannato ingiustamente per spionaggio: inizia il Caso Dreyfus"};
        eventi[456] = {25, 12, 1066, "Guglielmo il Conquistatore viene incoronato Re d'Inghilterra a Westminster"};
        eventi[457] = {27, 12, 1932, "Radio City Music Hall apre a New York: diventa il teatro con piu' posti al mondo"};
        eventi[458] = {29, 12, 1845, "Il Texas viene formalmente ammesso come 28° stato degli Stati Uniti d'America"};
        eventi[459] = {30, 12, 1916, "Rasputin viene assassinato a Pietrogrado da un gruppo di nobili russi guidato da Yusupov"};
        // Fine eventi extra
        eventi[460] = {31, 12, 1999, "Boris Yeltsin si dimette da presidente russo cedendo il potere a Vladimir Putin"};
 
        // ============================================================
        // EXTRA TRASVERSALI (eventi fondamentali senza duplicati)
        // ============================================================
        eventi[461] = {5,  8, 1305, "Guglielmo Wallace, eroe dell'indipendenza scozzese, viene catturato e giustiziato"};
        eventi[462] = {4,  9, 1886, "Geronimo, leggendario capo apache, si arrende definitivamente all'esercito americano"};
        eventi[463] = {6,  10, 1536, "William Tyndale, traduttore della Bibbia in inglese, viene strangolato e bruciato sul rogo"};
        eventi[464] = {9,  3, 1796, "Napoleone Bonaparte sposa Giuseppina de Beauharnais a Parigi"};
        eventi[465] = {24, 6, 1812, "Napoleone attraversa il fiume Niemen con la Grande Armee': inizia l'invasione della Russia"};
        eventi[466] = {14, 8, 1945, "Il Giappone annuncia la resa incondizionata in un discorso radiofonico dell'imperatore Hirohito"};
        eventi[467] = {2,  9, 31,   "Battaglia di Azio: Ottaviano sconfigge Marco Antonio e Cleopatra, diventa padrone di Roma"};
        eventi[468] = {3,  12, 1984, "Disastro di Bhopal: una fuga di gas tossico dalla Union Carbide uccide oltre 3000 persone"};
        eventi[469] = {9,  2, 1773, "Nasce William Henry Harrison, 9° presidente USA: morto dopo soli 31 giorni in carica"};
        eventi[470] = {25, 4, 1974, "Rivoluzione dei Garofani in Portogallo: fine pacifica della dittatura quarantennale di Salazar"};
        eventi[471] = {5,  6, 1783, "I fratelli Montgolfier effettuano la prima dimostrazione pubblica della mongolfiera a Annonay"};
        eventi[472] = {10, 11, 1969, "Debutta Sesame Street, il programma educativo televisivo americano piu' longevo della storia"};
        eventi[473] = {3,  4, 1973, "Viene inventato il cellulare: Martin Cooper telefona al rivale della Bell Labs"};
        eventi[474] = {29, 10, 1618, "Sir Walter Raleigh viene decapitato nella Torre di Londra per ordine di Giacomo I"};
        eventi[475] = {31, 10, 1984, "Indira Gandhi, Prima Ministra dell'India, viene assassinata dalla sua scorta sikh"};
        eventi[476] = {11, 11, 1620, "I Padri Pellegrini firmano il Mayflower Compact: primo documento democratico americano"};
        eventi[477] = {12, 3, 1912, "Juliette Gordon Low fonda le Girl Scouts of the USA a Savannah, Georgia"};
        eventi[478] = {7,  4, 1827, "Il chimico inglese John Walker inventa i fiammiferi"};
        eventi[479] = {1,  7, 1867, "Il Canada diventa dominio autonomo all'interno dell'Impero Britannico"};
        eventi[480] = {15, 8, 1969, "Inizia il Festival di Woodstock: tre giorni di musica, pace e hippie"};
        eventi[481] = {4,  11, 1979, "Studenti iraniani prendono in ostaggio il personale dell'ambasciata USA a Teheran"};
        eventi[482] = {18, 4, 1949, "L'Irlanda dichiara ufficialmente la Repubblica e lascia il Commonwealth britannico"};
        eventi[483] = {21, 7, 1969, "Buzz Aldrin e Neil Armstrong trascorrono 2 ore sulla Luna: ripreso in diretta mondiale"};
        eventi[484] = {26, 7, 1945, "Gli Alleati pubblicano la Dichiarazione di Potsdam: resa o distruzione del Giappone"};
        eventi[485] = {6,  2, 1918, "Il Parlamento britannico approva il Representation of the People Act: voto alle donne"};
        eventi[486] = {13, 5, 1981, "Mehmet Ali Agca spara a Papa Giovanni Paolo II in Piazza San Pietro"};
        eventi[487] = {23, 8, 1939, "Patto Molotov-Ribbentrop: URSS e Germania si dividono l'Europa orientale in segreto"};
        eventi[488] = {17, 9, 1939, "L'URSS invade la Polonia da est, in accordo segreto con la Germania nazista"};
        eventi[489] = {4,  6, 1944, "Le truppe alleate liberano Roma: prima capitale europea dell'Asse ad essere liberata"};
    }
};
 
#endif // EVENTI_STORICI_H
 
