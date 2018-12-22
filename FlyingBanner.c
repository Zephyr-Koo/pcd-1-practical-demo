#include <stdio.h>
#include <stdlib.h>

void printSpace(int noOfSpace);

int main()
{
    int counter = 0;
    int noOfSpace = 0;

    double speedCoefficient = 3;

    while (1)
    {
        noOfSpace = (counter / speedCoefficient);
        noOfSpace %= 50;

        printSpace(noOfSpace);
        puts(" _   _ _ ");
        printSpace(noOfSpace);
        puts("| | | (_)");
        printSpace(noOfSpace);
        puts("| |_| | |");
        printSpace(noOfSpace);
        puts("|  _  | |");
        printSpace(noOfSpace);
        puts("|_| |_|_|");

        counter++;
        system("cls");
    }

    puts("\n");
    system("pause");
    return 0;
}

void printSpace(int noOfSpace)
{
    for (int i = 0; i < noOfSpace; ++i)
    {
        printf(" ");
    }
}
