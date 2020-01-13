#include <stdio.h>

int main() {

int pvJoueur;
int pvMonstre;

pvMonstre = 10;

printf ("Monstre: %d PV \n", pvMonstre);
printf ("le joueur met un coup de point: Le Monstre perd 2 PV \n");

pvMonstre = pvMonstre - 2;

printf ("Monstre: %d PV \n", pvMonstre);

while (pvMonstre > 0){
printf("joueur attaque le monstre\n");
printf("le monstre perd 2 PV\n");
pvMonstre = pvMonstre - 2 ;
printf("PV Monstre = %d PV\n",pvMonstre);
}
return 0;
} 