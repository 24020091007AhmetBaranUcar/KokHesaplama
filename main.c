#include <stdio.h>
#include <math.h>



int main(int argc, char *argv[]) {

    float a, b, c;
    float kok1, kok2, diskriminant, imajiner;

    printf("(ax^2+bx+c) formatinda a, b ve c sayilarini giriniz: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("a=0 olamaz! -b/2a isleminde bolme kuralina aykiri. lutfen a degerini tekrar giriniz: ");
        scanf("%f", &a);
    }

    diskriminant = b * b - (4*a*c);

    switch (diskriminant > 0) {
        /*Diskriminant 0'dan büyükse bu değer bir döner. bool gibi düşün. iki reel kök vardır demek.*/
        case 1:
            kok1 = ( -b + sqrt(diskriminant) ) / (2*a);
            kok2 = ( -b - sqrt(diskriminant) ) / (2*a);

            printf("Denklemin iki ayri reel koku vardir.\nKok1: %.2f\nKok2: %.2f", kok1, kok2);
            break;

        case 0:
            //diskriminant pozitif değilse
            switch(diskriminant < 0) {
            case 0:
                    //diskriminant 0'a eşitse
                    kok1 = kok2 = -b / (2 * a);
                    printf("Cift katli kok. Kok1 = Kok 2 = %.2f", kok1);
                    break;

            case 1:
                    //diskriminant negatifse
                    imajiner =sqrt(-diskriminant) / (2 * a);
                    printf("Kok1: %.2f + (%.2f)i\n", (-b/(2*a)), imajiner);
                    printf("Kok2: %.2f - (%.2f)i\n", (-b/(2*a)), imajiner);
                    break;

            }

    }

    return 0;
}