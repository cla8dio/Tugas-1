#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int level1 () {

    int panjang;
    int i, j;

    printf("Masukkan panjang : ");
    scanf("%d", &panjang);

    for(int i = 0; i <= panjang+1; i++) {

        for(int j = 0; j < i; j++) {
            printf("%d  ",i-1+j);
        }


        printf("\n");
    }
}


int level2 () {
    int i, j, panjang;

    printf("Masukkan panjang : ");
    scanf("%d", &panjang);


    for(int i = 1; i <= panjang; i++) {

        for(int j = 1; j <= i; j++) {
            printf("%d  ", j*i);
        }


        printf("\n");

    }

}



int level3 () {

    int i, j, panjang;

    printf("Masukkan panjang (max 9) : ");
    scanf("%d", &panjang);

     for(int i = 0; i < panjang; i++) {

        for(int j = i; j < panjang-1; j++) {
            printf(" ");
        }

        for(int j = 0; j <= i; j++) {
            printf("%d", j+1);
        }

        for(int j = i; j > 0; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    //bawah============

    for(int i = panjang-1; i > 0; i--) {

        for(int j = i; j <= panjang -1; j++) {
            printf(" ");
        }

        for(int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        for(int j = i-1; j >=1; j--) {
            printf("%d", j);
        }


        printf("\n");
    }

}


int main() {

    int pilihanUser;

    printf("PILIH LEVEL : \n");
    printf("1. LEVEL 1\n");
    printf("2. LEVEL 2\n");
    printf("3. LEVEL 3\n\n");
    printf("Level : ");
    scanf("%d", &pilihanUser);

    if(pilihanUser == 1) {

        system("cls");
        level1();
        getch();
        system("cls");
        main();

    } else if (pilihanUser == 2) {
        system("cls");
        level2();
        getch();
        system("cls");
        main();
    } else if (pilihanUser == 3) {
        system("cls");
        level3();
        getch();
        system("cls");
        main();
    } else {
        printf("");
    }







    }
