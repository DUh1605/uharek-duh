// Ospravedlnujem sa, ze nemam GUI pre dany kod, z neznameho dovodu som nemal ziaden program na vytvaranie GUI, a v tom ktorom som to robil, nemal dane "vylepsenia".
// Google, ani youtube mi nepomohli pri GUI. Pravdepodobne zlý výber jazyka pre GUI, ale na to som prišiel až príliš neskoro.
#include <iostream>

using namespace std;

int i = 0;
int main()
{
    //Zadavanie Spravy
    int dlzkaPolynom;
    cout << "Kolko miestny polynom to bude?(ciselne) ";
    cin >> dlzkaPolynom;
    while (dlzkaPolynom > 33 || dlzkaPolynom < 1)   // obmedzenie dlzky spravy
    {
        system("CLS");
        cout << "Nespravny vstup." << endl;
        cout << "Tak este raz, kolko miestny polynom to bude?(ciselne) ";
        cin >> dlzkaPolynom;
    }
    cout << "Teraz ideme na polynom..." << endl;
    int sprava[dlzkaPolynom-1];
    for (int i = 0; i < dlzkaPolynom; i++) {
        cout << "Pozicia x" << dlzkaPolynom-(i+1) << ": ";
        cin >> sprava[i];
        while (sprava[i] != 0 && sprava[i] != 1)    // iba nuly a jednotky
        {
        cout << "Nespravny vstup." << endl;
        cout << "Tak este raz, zadajte hodnotu pre pozicia x" << dlzkaPolynom-(i+1) << " (0/1): ";
        cin >> sprava[i];
        }
    }
    cout << "Vami zadana sprava v tvare polynomu je: ";
    int pocetJed = 0;
    int l = 0;
    for (i = 0; i < dlzkaPolynom; i++) {            // funkcie na vypisanie spravy v tvare polynomu
        if (sprava[i] == 1) {
            pocetJed++;
        }
    }
    for (i = 0; i < dlzkaPolynom; i++) {
        if (sprava[i] == 1) {
            cout << "x" << dlzkaPolynom-(i+1);
            l++;
            if (l != pocetJed) {
                cout << "+";
            }
        }
    }
    cout << endl << endl;

    // Gen Kod                                                                      /// Zadavanie gen kodu rucne, manualne, funkcne. Bol to moj povodny pristup.
   /* int genDlzka;
    cout << "Dlzka generujuceho kodu: ";
    cin >> genDlzka;
    int genKod[genDlzka];
    cout << "Teraz ideme zadat gen kod..." << endl;
    for (int i = 0; i < genDlzka; i++) {                        // Klasicke zapisovanie do pola.
        cout << "Zadajte hodnotu x" << genDlzka-(i+1) << ": ";
        cin >> genKod[i];
        while (genKod[0] == 0) {                                //prve x musi byt 1
            cout << "Nespravny vstup pre hodnotu x" << genDlzka-1 << endl;
            cout << "Zadajte hodnotu x" << genDlzka-1 << ": ";
            cin >> genKod[0];
        }
        while (genKod[i] != 0 && genKod[i] != 1)                // iba 0 a 1
        {
        cout << "Nespravny vstup." << endl;
        cout << "Tak este raz, zadajte hodnotu pre pozicia x" << i << " (0/1): ";
        cin >> genKod[i];
        }
    }
    cout << "Vami zadany gen. polynom je: ";        // vypisanie v tvare polynomu
    pocetJed = 0;
    l = 0;
    for (i = 0; i < genDlzka; i++) {
        if (genKod[i] == 1) {
            pocetJed++;
        }
    }
    for (i = 0; i < genDlzka; i++) {
        if (genKod[i] == 1) {
            cout << "x" << genDlzka-(i+1);
            l++;
            if (l != pocetJed) {
                cout << "+";
            }
        }
    }*/
    // Gen kod - jeden gen kod, urèovanie jeho dlžky využitia podla dlžky správy
    int genDlzka;
    int gengengen[6] = {1,0,1,1,0,1};
    int genKod[genDlzka];
    switch(dlzkaPolynom) {
    case 1 ... 2:
        genDlzka = 2;
        cout << "Odporucana dlzka gen kodu by mala byt " << genDlzka << endl;
        for (i = 0; i < genDlzka; i++) {
            genKod[i] = gengengen[i];
        }
        cout << "Gen kod urceny pre danu spravu: ";
        for (i = 0; i < genDlzka; i++) {
            cout << genKod[i];
        }
        cout << endl;
        break;
    case 3 ... 4:
        genDlzka = 3;
        cout << "Odporucana dlzka gen kodu by mala byt " << genDlzka << endl;
        for (i = 0; i < genDlzka; i++) {
            genKod[i] = gengengen[i];
        }
        cout << "Gen kod urceny pre danu spravu: ";
        for (i = 0; i < genDlzka; i++) {
            cout << genKod[i];
        }
        cout << endl;
        break;
    case 5 ... 8:
        genDlzka = 4;
        cout << "Odporucana dlzka gen kodu by mala byt " << genDlzka << endl;
        for (i = 0; i < genDlzka; i++) {
            genKod[i] = gengengen[i];
        }
        cout << "Gen kod urceny pre danu spravu: ";
        for (i = 0; i < genDlzka; i++) {
            cout << genKod[i];
        }
        cout << endl;
        break;
    case 9 ... 16:
        genDlzka = 5;
        cout << "Odporucana dlzka gen kodu by mala byt " << genDlzka << endl;
        for (i = 0; i < genDlzka; i++) {
            genKod[i] = gengengen[i];
        }
        cout << "Gen kod urceny pre danu spravu: ";
        for (i = 0; i < genDlzka; i++) {
            cout << genKod[i];
        }
        cout << endl;
        break;
    case 17 ... 32:
        genDlzka = 6;
        cout << "Odporucana dlzka gen kodu by mala byt " << genDlzka << endl;
        for (i = 0; i < genDlzka; i++) {
            genKod[i] = gengengen[i];
        }
        cout << "Gen kod urceny pre danu spravu: ";
        for (i = 0; i < genDlzka; i++) {
            cout << genKod[i];
        }
        cout << endl;
        break;
    }
    cout << "Zadany gen. kod programom v tvare polynomu je: ";        // vypisanie gen kodu v tvare polynomu
    pocetJed = 0;
    l = 0;
    for (i = 0; i < genDlzka; i++) {
        if (genKod[i] == 1) {
            pocetJed++;
        }
    }
    for (i = 0; i < genDlzka; i++) {
        if (genKod[i] == 1) {
            cout << "x" << genDlzka-(i+1);
            l++;
            if (l != pocetJed) {
                cout << "+";
            }
        }
    }

    cout << endl << endl;
    // Èisto estetická úprava, aby nám zobrazilo správu a gen kod pri sebe
    pocetJed = 0;
    l = 0;
    for (i = 0; i < dlzkaPolynom; i++) {
        if (sprava[i] == 1) {
            pocetJed++;
        }
    }
    for (i = 0; i < dlzkaPolynom; i++) {
        if (sprava[i] == 1) {
            cout << "x" << dlzkaPolynom-(i+1);
            l++;
            if (l != pocetJed) {
                cout << "+";
            }
        }
    }
    cout << " : ";
    pocetJed = 0;
    l = 0;
    for (i = 0; i < genDlzka; i++) {
        if (genKod[i] == 1) {
            pocetJed++;
        }
    }
    for (i = 0; i < genDlzka; i++) {
        if (genKod[i] == 1) {
            cout << "x" << genDlzka-(i+1);
            l++;
            if (l != pocetJed) {
                cout << "+";
            }
        }
    }
    cout << endl;
    //Enkoder
    // Dodatok nul k sprave
    int nulky = genDlzka - 1;
    int fakeSprava[dlzkaPolynom+nulky];
    for (int i = dlzkaPolynom; i < dlzkaPolynom + nulky; i++) {     // posunutie spravy o potrebny pocet hodnot
        sprava[i] = 0;
    }
    for(int i = 0; i < dlzkaPolynom + nulky; i++) {     // pouzitie "medzi-premennej"
        fakeSprava[i] = sprava[i];
    }
    cout << endl;

    //Delenie
    int x,y; // pomocne premenne k deleniu
    for (int i = 0; i < dlzkaPolynom; i++) {
        x = 0;
        y = i;
        if (fakeSprava[y] >= genKod[x]) {
            for (x = 0, y = i; x < genDlzka; x++, y++) {
                if ((fakeSprava[y] == 1 && genKod[x] == 1) || (fakeSprava[y] == 0 && genKod[x] == 0)) {     // EXOR
                    fakeSprava[y] = 0;
                } else {
                fakeSprava[y] = 1;
                }
            }
        }
    }

    // CRC
    int crc[nulky];
    for (i = 0, x = dlzkaPolynom; i < nulky; i++, x++) {    // pridanie CRC/zvysku ku sprave
        crc[i] = fakeSprava[x];
    }
    cout << "CRC bity: ";
    for (i = 0; i < nulky; i++) {
        cout << crc[i];
    }
    cout << endl;
    int fakePolynom[dlzkaPolynom+nulky];
    for (i = 0; i < dlzkaPolynom; i++) {        // dalsia medzi premenna
        fakePolynom[i] = sprava[i];
    }
    for (i = dlzkaPolynom, x = 0; i < dlzkaPolynom + nulky; i++, x++) { // finalna verzia spravy
        fakePolynom[i] = crc[x];
    }
    cout << endl << "(Zakodovane) Prenesene data su:    ";
    for (i = 0; i < dlzkaPolynom + nulky; i++) {
        if (i == dlzkaPolynom)
            cout << " ";
        cout << fakePolynom[i];
    }
    cout << endl << endl << "Opacny postup: " << endl;

    //Dekoder
    cout << "Chcete ponechat spravu? Y/N: ";
    string odp;
    cin >> odp;
    while (odp != "Y" && odp != "N") {                      // odpoved ano/nie, ine sa "neda"
        cout << "Nespravny vstup, prosim o zadanie Y/N: ";
        cin >> odp;
    }
    if (odp == "Y") {
        cout << "Okidoki." << endl;
    }
    else if (odp == "N") {                                  // menenie jedneho bitu v sprave
        cout << "Zadajte spravu, prosim zmente iba jeden bit." << endl;
        for (i = 0; i < dlzkaPolynom; i++) {
        cout << "Vloz x" << dlzkaPolynom-(i+1) << ": ";
        cin >> fakePolynom[i];
        }
    }
    cout << endl << "Prijate data po spracovani su:     ";
    for (i = 0; i < dlzkaPolynom + nulky; i++) {
        if (i == dlzkaPolynom)
            cout << " ";
        cout << fakePolynom[i];
    }
    for (i = 0; i < dlzkaPolynom; i++) {
        fakeSprava[i] = fakePolynom[i];
    }
    // Delenie
    for (int i = 0; i < dlzkaPolynom; i++) {            // ten isty postup ako pri kodovani, lenze tu nam zvyšok zisti, èi tam je chyba
        x = 0;
        y = i;
        if (fakeSprava[y] >= genKod[x]) {
            for (x = 0, y = i; x < genDlzka; x++, y++) {
                if ((fakeSprava[y] == 1 && genKod[x] == 1) || (fakeSprava[y] == 0 && genKod[x] == 0)) {
                    fakeSprava[y] = 0;
                } else {
                fakeSprava[y] = 1;
                }
            }
        }
    }
    cout << endl << "Zvysok: ";
    int dek_zvysok[nulky];
    for (i = dlzkaPolynom, x = 0; i < dlzkaPolynom + nulky; i++, x++) {
        dek_zvysok[x] = fakeSprava[i];
    }
    for (i = 0; i < nulky; i++) {
        cout << dek_zvysok[i];
    }
    bool vysledok;
    for (i = 0; i < nulky; i++) {   //zistenie, ci nam ostal zvysok alebo nie
        if (dek_zvysok[i] != 0)
            vysledok = 1;
    }
    if (vysledok == 0)
        cout << endl << "Kedze zvysok je 0, tak sprava je bezchybna.";
    else cout << endl << "Kedze zvysok nie je 0, tak sprava obsahuje chybu.";
    cout << endl << endl;
    return 0;
}
