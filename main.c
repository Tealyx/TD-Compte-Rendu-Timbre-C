#include <stdio.h>

int main(void) 
{
    const double prix_timbre = 1.39;   // Prix d'un timbre en euros
    const int poids_env = 5;           // Poids de l'enveloppe vide en grammes
    int nb_page, poids, nb_timbre = 0; // Variables : nombre de pages, poids total, nombre de timbres
    double prix;                       // Variable pour le prix total

    // On demande à l'utilisateur le nombre de pages
    printf("Donnez le nombre de page(s) à envoyer :\n");
    scanf("%d", &nb_page);

    poids = poids_env + nb_page * 5; // Calcul du poids total (enveloppe + 5g par page)
    
    // Détermination du nombre de timbres selon le poids
    if (poids < 20) 
    {
        nb_timbre = 1; // Moins de 20g → 1 timbre
    }
    else if (poids >= 20 && poids <= 100)
    {
        nb_timbre = 2; // Entre 20g et 100g → 2 timbres
    }
    else if (poids >= 101 && poids <= 250)
    {
        nb_timbre = 4; // Entre 101g et 250g → 4 timbres
    }
    else if (poids >= 251 && poids <= 500)
    {
        nb_timbre = 6; // Entre 251g et 500g → 6 timbres
    }
    else if (poids >= 501 && poids <= 2000)
    {
        nb_timbre = 8; // Entre 501g et 2000g → 8 timbres
    }
    
    // Calcul du prix total
    prix = nb_timbre * prix_timbre;
    
    // Affichage du résultat
    printf("\nLe poids de %d feuille(s) A4 est de %d g, ce qui représente un nombre total de %d timbre(s) pour un coût de %.2f euros !\n\n",
           nb_page, poids, nb_timbre, prix);

    return 0; // Fin du programme
}
