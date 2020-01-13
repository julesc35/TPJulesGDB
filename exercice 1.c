#include <stdio.h>

int main() {

int pvJoueur;
int pvMonstre;

pvMonstre = 10;

printf ("Monstre: %d PV \n", pvMonstre);
printf ("le joueur met un coup de point: Le Monstre perd 2 PV");
pvMonstre = pvMonstre - 2;
printf ("Monstre: %d PV \n", pvMonstre);
return 0;
} 