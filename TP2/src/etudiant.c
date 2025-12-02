#include <stdio.h>

int main() {

    char noms[5][30] = {
        "Loripo", "Martin", "Koloyu", "Parchi", "Marie"
    };

    char prenoms[5][30] = {
        "Yohan", "Pierre", "Louis", "Lucas", "Salim"
    };

    char adresses[5][50] = {
        "12 rue des Fleurs",
        "5 avenue de Paris",
        "18 boulevard Victor",
        "3 impasse des Ecoles",
        "27 rue de la Mairie"
    };

    float note_progC[5] = { 14.5, 12.0, 16.5, 10.0, 18.0 };
    float note_sys[5]   = { 13.0, 11.0, 15.5, 9.5, 17.0 };

    printf("===== Informations des étudiant.e.s =====\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom        : %s\n", noms[i]);
        printf("Prénom     : %s\n", prenoms[i]);
        printf("Adresse    : %s\n", adresses[i]);
        printf("Prog en C  : %.2f\n", note_progC[i]);
        printf("Système    : %.2f\n", note_sys[i]);
        printf("-----------------------------\n");
    }

    return 0;
}
