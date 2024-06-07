#include <iostream>
#include <cstring>
usnig namespace std;
class Medicament {
private:
    int code;
    char nom[20];
    float prix;
    char type[10];
    char pat[20];
    int quan;

public:
    // Constructor
    Medicament(int c, const char* n, float p, const char* t, const char* pa, int q) {
        code = c;
        strncpy(nom, n, 20);
        prix = p;
        strncpy(type, t, 10);
        strncpy(pat, pa, 20);
        quan = q;
    }

    // Method to display medication information
    void affichage() const {
        cout << "Code: " << code << "\n"
                  << "Nom: " << nom << "\n"
                  << "Prix unitaire: " << prix << "\n"
                  << "Type: " << type << "\n"
                  << "Patient: " << pat << "\n"
                  << "Quantité: " << quan << "\n";
    }

    // Getters for accessing private members in Pharmacie class
    int getCode() const { return code; }
    const char* getNom() const { return nom; }
    float getPrix() const { return prix; }
    void setPrix(float p) { prix = p; }
    int getQuan() const { return quan; }
    void setQuan(int q) { quan = q; }
};
#include <iostream>

class Pharmacie {
private:
    int max;
    Medicament** table;
    int nbe;

public:
    Pharmacie(int m) : max(m), nbe(0) {
        table = new Medicament*[max];
    }

    ~Pharmacie() {
        for (int i = 0; i < nbe; ++i) {
            delete table[i];
        }
        delete[] table;
    }

    bool ajouteMedicament(const Medicament& m) {
        for (int i = 0; i < nbe; ++i) {
            if (strcmp(table[i]->getNom(), m.getNom()) == 0) {
                table[i]->setQuan(table[i]->getQuan() + m.getQuan());
                table[i]->setPrix(m.getPrix());
                return true;
            }
        }
        if (nbe < max) {
            table[nbe++] = new Medicament(m);
            return true;
        }
        return false;
    }

    void afficher() const {
        for (int i = 0; i < nbe; ++i) {
            table[i]->affichage();
            cout << "-------------------" << endl;
        }
    }

    void total_prix() const {
        float total = 0;
        for (int i = 0; i < nbe; ++i) {
            total += table[i]->getPrix() * table[i]->getQuan();
        }
        cout << "Total prix des médicaments: " << total << endl;
    }

    void supprime_Medicament(const char* sup) {
        for (int i = 0; i < nbe; ++i) {
            if (strcmp(table[i]->getNom(), sup) == 0) {
                delete table[i];
                for (int j = i; j < nbe - 1; ++j) {
                    table[j] = table[j + 1];
                }
                --nbe;
                break;
            }
        }
    }
};

int main() {
    Pharmacie pharmacie(100);

    Medicament med1(1, "Doliprane", 1.5, "Comprimé", "Adulte", 50);
    Medicament med2(2, "Efferalgan", 2.0, "Comprimé", "Adulte", 30);
    Medicament med3(3, "Paracetamol", 1.0, "Comprimé", "Enfant", 20);

    pharmacie.ajouteMedicament(med1);
    pharmacie.ajouteMedicament(med2);
    pharmacie.ajouteMedicament(med3);

    cout << "Affichage des médicaments enregistrés:" << endl;
    pharmacie.afficher();

    pharmacie.total_prix();

    pharmacie.supprime_Medicament("Efferalgan");
    cout << "Après suppression d'Efferalgan:" << endl;
    pharmacie.afficher();

    return 0;
}
