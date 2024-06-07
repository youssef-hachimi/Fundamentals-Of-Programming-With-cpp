#include <iostream>
#include <cstring>
#define max 100
using namespace std;
//-----------------------Classe Document
class Document
{
public:
    int enreg;
    char titre[50];

public:
    Document();
    Document(int, char *);
    virtual void ecrire();
};
Document::Document(int en, char *ti)
{
    enreg = en;
    strcpy(titre, ti);
}
Document::Document()
{
}
void Document::ecrire()
{
    cout << " Document -> Numero_Enregistrement: " << enreg << " - titre: " << titre << endl;
}
//---------------------Classe Livre
class Livre : public Document
{
public:
    char auteur[50];
    int pages;

public:
    Livre(char *, int, int, char *);
    Livre();
    Livre(Livre &);
    void ecrire();
};
Livre::Livre()
{
}
Livre::Livre(char *aut, int pag, int en, char *ti) : Document(en, ti)
{
    strcpy(auteur, aut);
    pages = pag;
}
Livre::Livre(Livre &liv)
{
    strcpy(auteur, liv.auteur);
    pages = liv.pages;
    enreg = liv.enreg;
    strcpy(titre, liv.titre);
}
void Livre::ecrire()
{
    Document::ecrire();
    cout << " Livre-> Auteur: " << auteur << " - Nombre de pages: " << pages << endl;
}
//-------------------Classe Dictionnaire
class Dictionnaire : public Document
{
public:
    char langue[30];
    int tomes;

public:
    Dictionnaire();
    Dictionnaire(char *, int, int, char *);
    void ecrire();
};
Dictionnaire::Dictionnaire(char *lang, int tom, int en, char *ti) : Document(en, ti)
{
    strcpy(langue, lang);
    tomes = tom;
}
Dictionnaire::Dictionnaire()
{
}
void Dictionnaire::ecrire()
{
    Document::ecrire();
    cout << " Dictionnaire -> Langue: " << langue << " - Nombre de tomes: " << tomes << endl;
}
//----------------Classe ListeDocuments
class ListeDocuments
{
public:
    static int nbl; // nombre de livres
    static int nbd; // nombre de dictionnaires
    Livre livres[max];
    Dictionnaire dictionnaires[max];

public:
    ListeDocuments();
    int ajoutLivre();
    void afficheLivre();
    int ajoutDict();
    void afficheDict();
    void tousLesDocuments();
};
int ListeDocuments::nbl = 0;
int ListeDocuments::nbd = 0;
ListeDocuments::ListeDocuments()
{
}
int ListeDocuments::ajoutLivre()
{
    int res = 0, pges, enr;
    char aut[30], tit[30];
    if (nbl < max)
    {
        cout << " Ajouter un livre : " << endl;
        cout << " Titre : ";
        cin >> tit;
        cout << endl;
        cout << " Num. Enregistrement : ";
        cin >> enr;
        cout << endl;
        cout << " Auteur : ";
        cin >> aut;
        cout << endl;
        cout << " Nombre de pages : ";
        cin >> pges;
        cout << endl;
        Livre livre(aut, pges, enr, tit);
        livres[nbl] = livre;
        nbl++;
        res = 1;
    }
    else
        cout << " Depacament de capacite !" << endl;
    return res;
}
void ListeDocuments::afficheLivre()
{
    int i;
    cout << " Liste des livres : " << endl;
    for (i = 0; i < nbl; i++)
        livres[i].ecrire();
}
int ListeDocuments::ajoutDict()
{
    int res = 0, tmes, enr;
    char lang[30], tit[30];
    if (nbl < max)
    {
        cout << " Ajouter un dictionnaire : " << endl;
        cout << " Titre : ";
        cin >> tit;
        cout << endl;
        cout << " Num. Enregistrement : ";
        cin >> enr;
        cout << endl;
        cout << " Langue : ";
        cin >> lang;
        cout << endl;
        cout << " Nombre de tomes : ";
        cin >> tmes;
        cout << endl;
        Dictionnaire dic(lang, tmes, enr, tit);
        dictionnaires[nbd] = dic;
        nbd++;
        res = 1;
    }
    else
        cout << " Depacament de capacite !" << endl;
    return res;
}
void ListeDocuments::afficheDict()
{
    int i;
    cout << " Liste des dictionnaires : " << endl;
    for (i = 0; i < nbd; i++)
        dictionnaires[i].ecrire();
}
void ListeDocuments::tousLesDocuments()
{
    afficheLivre();
    afficheDict();
}
int main()
{
    int nbliv, nbdic;
    ListeDocuments liste;
    cout << " Entrer le nombre de livres à saisir: ";
    cin >> nbliv;
    cout << endl;
    for (int i = 0; i < nbliv; i++)
        liste.ajoutLivre();
    cout << " Entrer le nombre de dictionnaires à saisir: ";
    cin >> nbdic;
    cout << endl;
    for (int i = 0; i < nbdic; i++)
        liste.ajoutDict();
    liste.tousLesDocuments();
    return 0;
}
