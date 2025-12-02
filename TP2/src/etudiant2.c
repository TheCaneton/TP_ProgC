#include <stdio.h>
#include <string.h>   

struct Etudiant {
    char nom[30];
    char prenom[30];
    char adresse[100];
    float note1;       
    float note2;       
};

int main() {

    struct Etudiant etu[5];
   
    strcpy(etu[0].nom, "Dupont");
    strcpy(etu[0].prenom, "Marie");
    strcpy(etu[0].adresse, "20 Boulevard Niels Bohr, Lyon");
    etu[0].note1 = 16.5;
    etu[0].note2 = 12.1;

    strcpy(etu[1].nom, "Martin");
    strcpy(etu[1].prenom, "Pierre");
    strcpy(etu[1].adresse, "22 Boulevard Niels Bohr, Lyon");
    etu[1].note1 = 14.0;
    etu[1].note2 = 14.1;

    strcpy(etu[2].nom, "Leroy");
    strcpy(etu[2].prenom, "Sophie");
    strcpy(etu[2].adresse, "3 Rue des Fleurs, Paris");
    etu[2].note1 = 15.5;
    etu[2].note2 = 13.3;

    strcpy(etu[3].nom, "Durand");
    strcpy(etu[3].prenom, "Lucas");
    strcpy(etu[3].adresse, "7 Avenue du Port, Marseille");
    etu[3].note1 = 10.0;
    etu[3].note2 = 11.0;

    strcpy(etu[4].nom, "Bernard");
    strcpy(etu[4].prenom, "Alice");
    strcpy(etu[4].adresse, "18 Rue Lafayette, Toulouse");
    etu[4].note1 = 18.2;
    etu[4].note2 = 17.4;

    printf("===== Informations des étudiant.e.s =====\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom      : %s\n", etu[i].nom);
        printf("Prénom   : %s\n", etu[i].prenom);
        printf("Adresse  : %s\n", etu[i].adresse);
        printf("Note 1   : %.2f\n", etu[i].note1);
        printf("Note 2   : %.2f\n", etu[i].note2);
        printf("--------------------------------------\n");
    }

    return 0;
}
