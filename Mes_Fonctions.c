//
// Created by maxim on 06/10/2021.
#include <stdio.h>
#include "structures.h"

int pgcd(NR nbR) {
    int i=2, divisCom=0;
    while (i<=nbR.num && i<=nbR.den) {
        if (nbR.num%i==0 && nbR.den%i==0) {
            divisCom=i;
        }
        i=i+1;
    }
    return divisCom;
}
NR simplifier(NR nbR) {
    NR nbrSimplifier;
    nbrSimplifier.num=nbR.num/pgcd(nbR);
    nbrSimplifier.den=nbR.den/pgcd(nbR);
    return nbrSimplifier;
}
