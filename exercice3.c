#include <stdio.h>

int main() {

int pvJoueur;
int pvMonstre;

pvMonstre = 10;
pvJoueur = 10;

printf ("Joueur: %d PV \n", pvJoueur);
printf ("Monstre: %d PV \n", pvMonstre);
printf("\n");
printf ("le joueur met un coup de poing: Le Monstre perd 2 PV \n");

pvMonstre = pvMonstre - 2;

printf ("Monstre: %d PV \n", pvMonstre);

while (pvMonstre > 0){
printf("joueur attaque le monstre\n");
printf("le monstre perd 2 PV\n");
pvMonstre = pvMonstre - 2 ;
printf("PV Monstre = %d PV\n",pvMonstre);
printf("\n");
if (pvMonstre < 6){
printf("le monstre contre-attaque\n");
printf("le monstre inflige 2 degats\n");
pvJoueur = pvJoueur - 2;
printf("PV joueur = %d\n", pvJoueur);
printf("\n");
}}
if (pvMonstre <= 0){
printf("Le Monstre est mort\n");
}
return 0;
} 