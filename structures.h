//
// Created by maxim on 06/10/2021.
//

#ifndef TP05_DUBARD_MAXIME_STRUCTURES_H
#define TP05_DUBARD_MAXIME_STRUCTURES_H
typedef struct {
    int num, den;
} NombreRationnel, NR;

NR saisirNombreRationnel();
void afficherNombreRationnel(NR nbR);
NR multiplicationNombreRationnel(NR nbR1,NR nbR2);
NR additionNombreRationnel(NR nbR1,NR nbR2);

#endif //TP05_DUBARD_MAXIME_STRUCTURES_H
