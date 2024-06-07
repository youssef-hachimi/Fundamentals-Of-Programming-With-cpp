#include <iostream>
#include <string>
using namespace std;

class Document{
    public:
    int numEnrg;// numero d'enregistrement
    string titre;
    Document(int numEnrg,string titre){
        this->numEnrg = numEnrg;
        this->titre = titre;
    }
    ecrire(){}
};
class Livre : public Document{
    public:
    string Auteur;
    int numPages;
    Livre(string Auteur,int numPages){
        this->Auteur = Auteur;
        this->numPages = numPages;
    }
    ecrire(){}
};
class Dictionnaire : public Livre{
    public:
    string lang;
    int numTomes;
    Dictionnaire(string lang,int numTomes){
        this->lang = lang;
        this->numTomes = numTomes;        
    }
    ecrire(){
        Dictionnaire dic1;
    }
};
class ListeDeDocument{
    ajoutDocum(){

    }
    tousLesAuteurs(){}
    tousLesDocuments(){}
};








int main(){

}