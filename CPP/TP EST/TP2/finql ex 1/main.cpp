#include <iostream>
#include <joursemain.h>
using namespace std;

int  m1,a1,ns,as,f;
joursemain::joursemain(int j,int m,int a){
	jour=j;
	mois=m;
	annee=a;
}
int joursemain::calcule(){
	if(mois>=3){
		m1=mois-2;
		a1 = annee;
	}else{
		m1 = mois +10;
		a1 = annee -1;
	}
	ns = a1 / 100;
	as = a1 % 100;
	// fonction
	f = jour+as + (as/4) -(2*ns) +(ns /4) +(((26*m1)-2)/10);
	
	while(f<0){
		f=f+7;
	}
	jour = f%7;
	
	
	return jour;

}
void joursemain::affichage(int jour){
	switch(jour){
		case 0:cout <<"demanche";break;
		case 1:cout <<"lundi";break;
		case 2:cout <<"mardi";break;
		case 3:cout <<"mercredi";break;
		case 4:cout <<"jeudi";break;
		case 5:cout <<"vendredi";break;
		case 6:cout <<"samdi";break;
	}
}
int main(){
	int j , m ,a ;
	cout <<"============================\n";
	cout <<"========  welcome  =========\n";
	cout <<"============================\n";
	cout << "enter le jour\n"; 
		cin  >> j;
	cout << "enter le mois\n"; 
		cin  >> m;
	cout << "enter le annee\n"; 
		cin  >> a;
	joursemain jour(j,m,a);
	jour.affichage(jour.calcule());
	return 0;	
	
	
}
