#include <stdio.h>

int main() {

int pvJoueur;
int pvMonstre;
int choix;

choix = 0;
pvMonstre = 10;
pvJoueur = 10;

printf ("Joueur: %d PV \n", pvJoueur);
printf ("Monstre: %d PV \n", pvMonstre);
printf("\n");

printf("que voulez-vous faire ?\n");
printf("attaque: 1\n");
printf("se defendre: 2\n");
scanf ("%d", &choix);

if (choix = 1){
printf("le joueur attaque le Monstre: -2PV\n");
pvMonstre = pvMonstre - 2;
printf("PV Monstre: %d PV\n", pvMonstre);
printf("\n");
else
printf("le joeur esquive l'attaque: -0.5PV\n");
pvJoueur = pvJoueur - (2/4);
printf("pvJoueur: %d\n", pvJoueur);
printf("\n");
return 0;
}
return 0;
} 