#include <stdlib.h>
#include <stdio.h>
#include "empan.h"
#include "tester_empan.h"

void afficher_grille(unsigned char grille[][TAILLE]) {
  int l, c;
  
  for(l=0; l<TAILLE; l++) {
    printf("     ");
    for(c=0; c<TAILLE; c++)
      printf("\33[%hhum  \33[0m", 46-(grille[l][c]<<1));
    putchar('\n');
  }
}

int tester_empan(unsigned char entree[][TAILLE], unsigned sortie) {
  unsigned resultat;
  resultat = empan(entree);
  afficher_grille(entree);
  if (resultat == sortie) {
    printf("\33[32m[OK]\33[0m empan = %u\n", resultat);
    return 1;
  } else {
    printf("\33[31m[KO]\33[0m empan= %u (au lieu de %u)\n", resultat, sortie);
    return 0;
  }
}

int main(void) {
  int ok = 1;
  
  /* test 1 : empan en fin de ligne */
  unsigned char grille1[TAILLE][TAILLE] = {{1, 0, 1, 0},
                                           {0, 1, 0, 0},
                                           {0, 0, 1, 1},
                                           {1, 0, 0, 0}};
  
  /* test 2 : empan en début de ligne */
  unsigned char grille2[TAILLE][TAILLE] = {{1, 0, 1, 0},
                                           {0, 1, 0, 0},
                                           {1, 0, 1, 1},
                                           {0, 0, 0, 1}};
  
  /* test 3 : empan en fin de colonne */
  unsigned char grille3[TAILLE][TAILLE] = {{1, 0, 1, 0},
                                           {0, 1, 0, 0},
                                           {0, 0, 1, 1},
                                           {0, 1, 0, 1}};
  
  /* test 4 : empan en début de colonne */
  unsigned char grille4[TAILLE][TAILLE] = {{0, 0, 1, 0},
                                           {0, 1, 0, 0},
                                           {0, 0, 1, 1},
                                           {1, 0, 0, 1}};
  
  /* test 5 : empan en milieu de ligne */
  unsigned char grille5[TAILLE][TAILLE] = {{1, 0, 1, 0},
                                           {0, 1, 0, 1},
                                           {1, 1, 1, 0},
                                           {1, 0, 0, 1}};
  
  /* test 6 : empan en milieu de colonne */
  unsigned char grille6[TAILLE][TAILLE] = {{1, 1, 0, 1},
                                           {0, 1, 1, 0},
                                           {0, 1, 0, 1},
                                           {1, 0, 1, 0}};
  
  /* test 7 : grille vide */
  unsigned char grille7[TAILLE][TAILLE] = {{0, 0, 0, 0},
                                           {0, 0, 0, 0},
                                           {0, 0, 0, 0},
                                           {0, 0, 0, 0}};
  
  /* test 8 : grille pleine */
  unsigned char grille8[TAILLE][TAILLE] = {{1, 1, 1, 1},
                                           {1, 1, 1, 1},
                                           {1, 1, 1, 1},
                                           {1, 1, 1, 1}};
  
  ok = ok && tester_empan(grille1, 3U);
  ok = ok && tester_empan(grille2, 3U);
  ok = ok && tester_empan(grille3, 3U);
  ok = ok && tester_empan(grille4, 3U);
  ok = ok && tester_empan(grille5, 2U);
  ok = ok && tester_empan(grille6, 2U);
  ok = ok && tester_empan(grille7, 4U);
  ok = ok && tester_empan(grille8, 0U);

  return ok?EXIT_SUCCESS:EXIT_FAILURE;
}
