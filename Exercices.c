//
// Created by maxim on 06/10/2021.
//
#include <stdio.h>
#include "structures.h"
#include "Mes_Fonctions.h"
#define TailleMax 100
#define LargTab 3
#define LongTab 4
#define TailleTotale 12
void exercice1() {
    printf("Quel programme voulez-vous lancer ?\n");
    //Pensez à afficher les choix disponibles ici
    int choixProgramme=0;
    NR nbR;
    do{
        scanf("%d", &choixProgramme);
        switch (choixProgramme) {
            case 1 :
                afficherNombreRationnel(saisirNombreRationnel());
                break;
            case 2 :
                nbR =multiplicationNombreRationnel(saisirNombreRationnel(),saisirNombreRationnel());
                printf("Le produit des nombres rationnels entres est : %d / %d",nbR.num,nbR.den);
                break;
            case 3 :
                nbR= additionNombreRationnel(saisirNombreRationnel(),saisirNombreRationnel());
                printf("La somme des nombres rationnels entres est : %d / %d",nbR.num,nbR.den);
                break;
            case 0 :
                break;
            default : {
                printf("Choix Invalide ! Veuillez selectionner un exercice :\n");

                break;
            }
        }
    }while (choixProgramme != 0); //Si choix == 0 on arrête !

    printf("Au revoir !\n");
}

void exercice2() {
    int i=0,N=0, max=0;
    int tabEntier[TailleMax];
    do {
        printf("Combien d entier voulez-vous definir ?\n");
        scanf("%d", &N);
    }
    while (N>TailleMax);
    for (i=0; i<N; i++) {
        printf("Entrer un entier :\n");
        scanf("%d", &tabEntier[i]);
    }
    max=tabEntier[0];
    for (i=0; i<N; i++) {
        if (max<tabEntier[i]) {
            max=tabEntier[i];
        }
    }
    printf("Le plus grand entier est :\n%d", max);
}

void exercice3() {
    int i=0,j=0,k=0;
    int tab3_4[LargTab][LongTab];
    int tab12[TailleTotale];
    for (i=0; i<LargTab;i++) {
        for (j=0; j<LongTab;j++) {
            printf("Entrer un entier :\n");
            scanf("%d", &tab3_4[i][j]);
        }
    }
    for (i=0; i<LargTab; i++) {
        for (j=0; j<LongTab; j++) {
            tab12[k]=tab3_4[i][j];
            k=k+1;
        }
    }
    for (i=0; i<TailleTotale; i++) {
        printf("%d\t",tab12[i]);
    }
}