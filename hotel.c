#include <stdio.h>
#include <stdlib.h>

#define MAX 100
struct SClient {
    int id_cl;
    char nom[MAX];
    char prenom[MAX];
    char email[MAX];
    char telephone[MAX];
}SClient ;


typedef struct SChambre {
    int numero ;
    char type[MAX]; 
    float prix;
    int disponible;  
}SChambre ;
typedef struct Date
{
    int Jour;
    int Mois;
    int Annee;
}Date;


typedef struct SReservation {
    int id_res;
    int id_cl;
    int numero ;
    struct Date d_deb;
    struct Date d_fin ;
    float factures ;
    
}SReservation;
SClient clients[MAX];
SReservation reservations[MAX];
SChambre chambres[MAX];
