#include <iostream>
#include <string>
using std::string; using std::cout; using std::cin; using std::endl;

struct NeuesAuto {
    string Automarke;
    string Fabrikat;
    string Bauart;
    string Baujahr;
    string Erstzulassung;
    string Farbe;
    int Vorbesitzer = 0;
    bool Unfallfrei = true;
};

int main() {

    NeuesAuto Ford;
    Ford.Automarke = "Ford";
    Ford.Fabrikat = "Mondeo";
    Ford.Bauart = "Kombi";
    Ford.Baujahr = "05/2019";
    Ford.Erstzulassung = "01.01.2020";
    Ford.Farbe = "blau";
    Ford.Vorbesitzer = 1;
    Ford.Unfallfrei = true;

    cout << "Automarke: " << Ford.Automarke << endl;
    cout << "Fabrikat: " << Ford.Fabrikat << endl;
    cout << "Bauart: " << Ford.Bauart << endl;
    cout << "Baujahr: " << Ford.Baujahr << endl;
    cout << "Erstzulassung: " << Ford.Erstzulassung << endl;
    cout << "Farbe: " << Ford.Farbe << endl;
    cout << "Vorbesitzer: " << Ford.Vorbesitzer << endl;
    cout << "Unfallfrei: " << Ford.Unfallfrei << endl;
    return 0;
}
