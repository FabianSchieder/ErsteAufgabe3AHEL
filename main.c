#include <stdio.h>
#include <string.h>

int printMenu();
void newStudents(int number, char* firstName, char* lastName);

struct Student
{
    int number;
    char* firstName;
    char* lastName;
};

int main(void)
{
    int option = 0;

    do
    {
        option = printMenu();

    } while(option != 0);

    printf("\nProgramm wird beendet!");
    return 0;
}

int printMenu()
{
    int option = 0;

    printf("\n0. Beenden\n1. Eingabe von Schuelern\n2. Ausgabe von Schuelern\n3. Lesen der Schueler von einem File\n4. Schreiben von Schuelern auf ein File\n\nEingabe: ");
    scanf("%i", &option);

    return option;
}
