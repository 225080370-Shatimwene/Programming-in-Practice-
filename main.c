#include <stdio.h>


int main() {
    char municipality [50];
    char mayorName [50];
    int population;

    printf("\nMunicipal Financial Management System");
  
    printf ("Enter Municipality Name: \n");
    scanf("%49s", municipality);

    printf("Enter Mayor's Name: \n");
    scanf("%49s", mayorName);

    printf("Enter Population: \n");
    scanf("%d", &population);

    printf(" \n Municipality Report");
    
    printf("\n Municipality: %s", municipality);
    printf("\n The Mayor: %s", mayorName);
    printf("\n The Population is: %d", population);

    return 0;
}