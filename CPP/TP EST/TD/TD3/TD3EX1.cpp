// is not complete yet
#include <iostream>
#include <string>
using namespace std;

class Medicament{
    public:
    int code;
    char nom[20];
    float prix;
    char type[10];
    char pat[20];
    int quan;

    // constructor "Medicament" :
    Medicament(int code,char* nom,float prix,char* type,char* pat,int quan){
        this->code = code;
        // this->nom[20] = nom;
        this->prix = prix;
        // this->type[10] = type;
        // this->pat[20] = pat;
        this->quan = quan;


    }
    void affichage(){
        cout << "affichage : \n";
        cout << "Nom  : " << nom << endl;
        cout << "Code : " << code << endl;
        cout << "Prix : " << prix << endl;
        cout << "Type : " << type << endl;
        cout << "Patenté  : " << pat << endl;
        cout << "Quantité : " << quan << endl;
    }
};
class Pharmacie{
    public:
    int max;
    Medicament *table;
    int nbe;

    Pharmacie(int max,const int *table,int nbe){
        this->max = max;
        this->nbe = nbe;
        this->table = 10;
    }
    ~Pharmacie() {
            delete[] max;
            delete[] nbe;
            delete[] table;
        }
// tableau « table », la méthode renvoie true si l’ajout s’est correctement effectué, false
// sinon. Dans le cas où le médicament existe dans le tableau « table », il faut faire une
// mise à jour dans la quantité et le prix (en cas de changement du prix, il faut retenir le
// nouveau prix). 

    boolean ajouteMedicament(Medicament m){
        if(){
            return true;
        }
        else if(){
            return false;
        }
    }
    public:
    void afficher(){
        Pharmacie Pharmacie1;
        Pharmacie1.afficher();
    }
    void total_prix(){

    }
    void supprime_Medicaments(char sup[20]){
        if(nom == "sub")
        delete[] table;
    }
};


// Medicament(int code,char* nom,float prix,char* type,char* pat,int quan)
int main()
{
    Medicament medicament1(1,"OKI",20,"puder","patx",100);
    cout << medicament1.nom;
    return 0;
}


