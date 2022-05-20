#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by CPlusPlus (https://www.cplusplus.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    FILE* pFile;
    char mystring[100];

    pFile = fopen("myfile.txt", "r");

    if (pFile == NULL) {
        perror("Error opening file");
    } else {
        if (fgets(mystring, 100, pFile) != NULL) {
            puts(mystring);
        }

        fclose(pFile);
    }

    _getch();
    return 0;
}