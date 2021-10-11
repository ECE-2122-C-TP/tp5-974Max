//
// Created by maxim on 06/10/2021.
//
#include <stdio.h>
#include "structures.h"
#include "Mes_Fonctions.h"

NR saisirNombreRationnel() {
    NR nbR;
    printf("Veuillez entrer le numerateur et le denominateur :\n");
    scanf("%d %d",&nbR.num, &nbR.den);
    return nbR;
}

void afficherNombreRationnel(NR nbR) {
    printf("Le nombre rationnel a pour numerateur :\n %d \n et pour denominateur :\n %d", nbR.num,nbR.den);
}
NR multiplicationNombreRationnel(NR nbR1,NR nbR2) {
    NR nbR3;
    nbR3.num=nbR1.num*nbR2.num;
    nbR3.den=nbR1.den*nbR3.den;
    return simplifier(nbR3);
}
NR additionNombreRationnel(NR nbR1,NR nbR2) {
    NR nbR3;
    nbR3.num=nbR1.num*nbR2.den+nbR2.num*nbR1.den;
    nbR3.den=nbR1.den*nbR3.den;
    return simplifier(nbR3);
}

