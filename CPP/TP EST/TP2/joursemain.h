#ifndef JOURSEMAIN_H
#define JOURSEMAIN_H

class joursemain
{
	int jour;
	int mois;
	int annee;
	public:
		joursemain(int jour,int mois,int annee);
		int calcule();
		void affichage(int jour);
};

#endif
