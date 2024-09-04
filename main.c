#include <stdio.h>
#include <string.h>

struct Student
{
    int number;
    char firstName[20];
    char lastName[20];
};

int printMenu();
void addStudents();

int main(void)
{
    int option = 0;

    do
    {
        option = printMenu();

        switch(option)
        {
            case 1:
                addStudents();
                break;
            default:
                break;
        }
    } while(option != 0);

    return 0;
}

int printMenu()
{
    int option = 0;

    printf("\n0. Beenden\n1. Eingabe von Schuelern\n2. Ausgabe von Schuelern\n3. Lesen der Schueler von einem File\n4. Schreiben von Schuelern auf ein File\n\nEingabe: ");
    scanf(" %i", &option);

    return option;
}

void addStudents()
{
    int amount;

    printf("Wieviele Schueler wollen Sie hinzufuegen?\nEingabe: ");
    scanf("%i", &amount);

    struct Student students[amount];

    for(int i = 0; i < amount; i++)
    {
        printf("Nummer (Schueler %i): ", i);
        scanf("%d", students[i].number);
        printf("Vorname (Schueler %i): ", i);
        scanf("%s", students[i].firstName);
        printf("Nachname (Schueler %i): ", i);
        scanf("%s", students[i].lastName);
    }
}