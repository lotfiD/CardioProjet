#include<stdio.h>
#include<stdlib.h>

int remove_directory(const char *path);


int main ()
{
    FILE* fichier = NULL; /* C'est ce qui va permettre de generer un fichier */
    int n; /* On initialise la variable n pour pouvoir entrer des chiffres   */


    printf("Tapez 1 pour chenille\n");
    printf("Tapez 2 pour allumer 1 led sur 2\n");
    printf ("Tapez 3 pour allumer 1 led sur 3\n");
    printf("Tapez 4 pour allumer toutes les leds en meme temps\n");
    printf("Tapez 5 pour allumer une led au choix \n");
    scanf("%d", &n);

    if (n ==1)
    {

        system("rd /s allumage_des_led"); /*C'est ce qui va permettre de supprimer le fichier geré*/


        fichier = fopen("allumage_des_led.ino", "w"); /*Le "fopen" va permettre de créer un fichier nommé "Allumage de led "  */

        if (fichier != NULL)
            /* Ce qui suit est le code qui va permettre d'allumer les lampes en chenilles */

        {
            fputs("int  pinLed[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9,  10};",fichier);
            fputs("\n", fichier);
            fputs("int i;", fichier);
            fputs("\n", fichier);
            fputs("void setup()",fichier);
            fputs("\n", fichier);
            fputs("{",fichier);
            fputs("\n", fichier);
            fputs("\n", fichier);

            fputs("for (int i = 0; i < 10; i++)",fichier);
            fputs("\n", fichier);
            fputs("pinMode(pinLed[i], OUTPUT);",fichier);
            fputs("\n", fichier);
            fputs("digitalWrite(pinLed[i], LOW);",fichier);
            fputs("\n", fichier);
            fputs("}",fichier);
            fputs("\n", fichier);
            fputs("\n", fichier);

            fputs("void loop()",fichier);
            fputs("\n", fichier);
            fputs("{",fichier);
            fputs("\n", fichier);
            fputs("for (int i = 0; i < 10; i++)",fichier);
            fputs("\n", fichier);
            fputs("{",fichier);
            fputs("\n", fichier);
            fputs("digitalWrite(pinLed[i], HIGH);",fichier);
            fputs("\n", fichier);
            fputs("delay(250);",fichier);
            fputs("digitalWrite(pinLed[i], LOW);",fichier);
            fputs("\n", fichier);
            fputs("delay(250);",fichier);
            fputs("\n", fichier);
            fputs("}",fichier);
            fputs("\n", fichier);
            fputs("}",fichier);
                    }

    }
    else if (n==2) /* On met une autre condition qui contiendra l'alummage de une led sur deux */

    {
        system("rd /s allumage_des_led");

        fichier = fopen ("allumage_des_led.ino", "w");
        if (fichier != NULL)
        { /* Le fait de choisir ces numeros montre bien que nous allumons une led sur deux  */
            fputs("int  pinLed[10] = {1, 3, 5, 7, 9};", fichier); /*i va nous servir pour parcourir le tableau*/
            fputs("\n", fichier);
            fputs("void setup()", fichier);
            fputs("\n", fichier);
            fputs("{", fichier);
            fputs("\n", fichier);
            fputs("\n", fichier);

            fputs("for (int i = 0; i < 10; i++)", fichier); /*Boucle d'initialisation des modes et mise à 0V*/
            fputs("\n", fichier);
            fputs("{", fichier);
            fputs("\n", fichier);
            fputs ("pinMode(pinLed[i], OUTPUT);", fichier); //on utilise les valeurs du tableau
            fputs("\n", fichier);
            fputs("digitalWrite(pinLed[i], LOW);", fichier); // l'une après l'autre
            fputs("\n", fichier);
            fputs("}", fichier);
            fputs("\n", fichier);
            fputs("\n", fichier);

            fputs("}", fichier);
            fputs("\n", fichier);
            fputs( "void loop()", fichier);
            fputs("\n", fichier);
            fputs("{", fichier);
            fputs("\n", fichier);
            fputs("for (int i = 0; i < 10; i++)", fichier);
            fputs("\n", fichier);
            fputs("{", fichier);
            fputs("\n", fichier);
            fputs("digitalWrite(pinLed[i], HIGH);", fichier);
            fputs("\n", fichier);
            fputs("delay(200);", fichier );
            fputs("\n", fichier);
            fputs("digitalWrite(pinLed[i], LOW);",fichier);
            fputs("\n", fichier);
            fputs("\n", fichier);

            fputs("delay(200);", fichier);
            fputs("\n", fichier);
            fputs("}", fichier);
            fputs("\n", fichier);

            fputs("}", fichier);
            fclose (fichier);
        }
    }
    else if (n==3)
    {
        system("rd /s allumage_des_led");

        fichier = fopen ("allumage_des_led.ino", "w");
        if (fichier != NULL)
        {
            fputs("int  pinLed[10] = {1, 4, 7, 10};", fichier);
            fputs("\n", fichier);
            fputs("void setup()", fichier);
            fputs("\n", fichier);
            fputs("{", fichier);
            fputs("\n", fichier);
            fputs("\n", fichier);

            fputs("for (int i = 0; i < 10; i++)", fichier);
            fputs("\n", fichier);
            fputs("{", fichier);
            fputs("\n", fichier);
            fputs("pinMode(pinLed[i], OUTPUT);", fichier);
            fputs("\n", fichier);
            fputs("digitalWrite(pinLed[i], LOW);",fichier);
            fputs("\n", fichier);
            fputs("}", fichier);
            fputs("\n", fichier);
            fputs("}", fichier);
            fputs("\n", fichier);
            fputs("\n", fichier);

            fputs("void loop()", fichier);
            fputs("\n", fichier);
            fputs("{", fichier);
            fputs("\n", fichier);


            fputs("for (int i = 0; i < 10; i++)",fichier);
            fputs("\n", fichier);
            fputs("{", fichier);
            fputs("\n", fichier);
            fputs("digitalWrite(pinLed[i], HIGH);", fichier );
            fputs("delay(200);",fichier);
            fputs("\n", fichier);
            fputs("digitalWrite(pinLed[i], LOW);", fichier);
            fputs("\n", fichier);
            fputs("delay(200);", fichier);
            fputs("\n", fichier);

            fputs("}", fichier);
            fputs("\n", fichier);
            fputs("}", fichier);

            fclose(fichier);
        }
    }
    else if (n==4)
    {
        system("rd /s allumage_des_led");

        fichier = fopen ("allumage_des_led.ino", "w");
        if (fichier != NULL)
        {
            fputs("int  pinLed[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9,  10};",fichier);
            fputs("\n", fichier);
            fputs("void setup()",fichier);
            fputs("\n", fichier);
            fputs("{",fichier);
            fputs("\n", fichier);
            fputs("for (int i = 0; i < 10; i++)",fichier);
            fputs("\n", fichier);
            fputs("{",fichier);
            fputs("\n", fichier);
            fputs("pinMode(pinLed[i], OUTPUT);",fichier);
            fputs("\n", fichier);
            fputs("}",fichier);
            fputs("\n", fichier);
            fputs("\n", fichier);

            fputs("}",fichier);
            fputs("\n", fichier);
            fputs("void loop()",fichier);
            fputs("\n", fichier);
            fputs("{",fichier);
            fputs("\n", fichier);
            fputs("\n", fichier);

            fputs("for (int i = 0; i < 10; i++)",fichier);
            fputs("\n", fichier);
            fputs("{",fichier);
            fputs("\n", fichier);
            fputs("digitalWrite(pinLed[i], HIGH);",fichier);
            fputs("\n", fichier);
            fputs("}",fichier);
            fputs("\n", fichier);
            fputs("delay(200);",fichier);
            fputs("\n", fichier);
            fputs("\n", fichier);

            fputs("for (int i = 0; i < 10; i++)",fichier);
            fputs("\n", fichier);
            fputs("{",fichier);
            fputs("\n", fichier);
            fputs("digitalWrite(pinLed[i], LOW);",fichier);
            fputs("\n", fichier);
            fputs("}",fichier);
            fputs("\n", fichier);
            fputs("delay(200);",fichier);
            fputs("\n", fichier);
            fputs("}",fichier);

}
    }
     else if (n==5)
    {
        system("rd /s allumage_des_led");

        fichier = fopen ("allumage_des_led.ino", "w");
        if (fichier != NULL)
        {
            printf("Entrez le numero de la led que vous voulez allumer apres le int n = \n");
            fputs("int pinLed1, pinLed2, pinLed3, pinLed4, pinLed5, pinLed6, pinLed7, pinLed8,pinLed9, pinLed10;",fichier);
            fputs("\n", fichier);
            fputs("int n=;",fichier);
            fputs("\n", fichier);
            fputs("void setup()",fichier);
            fputs("\n", fichier);
            fputs("{",fichier);
            fputs("pinLed1 = 1;",fichier);
            fputs("\n", fichier);
            fputs("pinLed2 = 2;",fichier);
            fputs("\n", fichier);
            fputs("pinLed3 = 3;",fichier);
            fputs("\n", fichier);
            fputs("pinLed4 = 4;",fichier);
            fputs("\n", fichier);
            fputs("pinLed5 = 5;",fichier);
            fputs("\n", fichier);
            fputs("pinLed6 = 6;",fichier);
            fputs("\n", fichier);
            fputs("pinLed7 = 7;",fichier);
            fputs("\n", fichier);
            fputs("pinLed8 = 8;",fichier);
            fputs("\n", fichier);
            fputs("pinLed9 = 9;",fichier);
            fputs("\n", fichier);
            fputs("pinLed10 = 10;",fichier);

            fputs("pinMode(pinLed1, OUTPUT);",fichier);
            fputs("\n", fichier);
            fputs("pinMode(pinLed2, OUTPUT);",fichier);
            fputs("\n", fichier);
            fputs("pinMode(pinLed3, OUTPUT);",fichier);
            fputs("\n", fichier);
            fputs("pinMode(pinLed4, OUTPUT);",fichier);
            fputs("\n", fichier);
            fputs("pinMode(pinLed5, OUTPUT);",fichier);
            fputs("\n", fichier);
            fputs("pinMode(pinLed6, OUTPUT);",fichier);
            fputs("\n", fichier);
            fputs("pinMode(pinLed7, OUTPUT);",fichier);
            fputs("\n", fichier);
            fputs("pinMode(pinLed8, OUTPUT);",fichier);
            fputs("\n", fichier);
            fputs("pinMode(pinLed9, OUTPUT);",fichier);
            fputs("\n", fichier);
            fputs("pinMode(pinLed10, OUTPUT);",fichier);
            fputs("\n", fichier);
            fputs("\n", fichier);


            fputs("digitalWrite(n, LOW);",fichier);
            fputs("\n", fichier);


            fputs("}",fichier);
            fputs("\n", fichier);
            fputs("void loop()",fichier);
            fputs("\n", fichier);
            fputs("{",fichier);
            fputs("\n", fichier);
            fputs("\n", fichier);

            fputs("digitalWrite(n, HIGH);",fichier);
            fputs("\n", fichier);
            fputs("delay(300);",fichier);
            fputs("\n", fichier);
            fputs("digitalWrite(n, LOW);",fichier);
            fputs("\n", fichier);
            fputs("delay(300);",fichier);
            fputs("\n", fichier);
            fputs("}",fichier);

        }

    return 0;
    }
}


