/*	Fichier : transfert.h

	Fait par :  Cedrik Bienvenue (1894296)
				Mohamed Khairallah Gharbi (1837067)
	Date de derniere modification :21 Octobre 2018

*/
/********************************************
* Titre: Travail pratique #2 - transfert.h
* Date: 16 septembre 2018
* Auteur: Wassim Khene
*******************************************/

#ifndef TRANSFERT_H
#define TRANSFERT_H
#include "utilisateur.h"
#include <iostream>

#include <stdio.h>

class Transfert {
public:

	// Constructeurs
	Transfert();
	Transfert(double montant, Utilisateur* expediteur, Utilisateur* receveur_);

	// M�thodes d'acc�s
	Utilisateur* getExpediteur() const;
	Utilisateur* getReceveur() const;
	double getMontant() const;


	// M�thodes d'affichage
	void setMontant(double montant);
	void setExpediteur(Utilisateur* expediteur);
	void setReceveur(Utilisateur* receveur);

	friend ostream& operator<<(ostream& os, const Transfert& transfert);

private:
	double montant_;
	Utilisateur* expediteur_;
	Utilisateur* receveur_;


};

#endif