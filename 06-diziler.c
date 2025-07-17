/* BTK Akademi - C Programlama Dili Kursu*/
/** 
 * Kuvvet/üs hesaplarının C programlama dilinde yapılması*/
 
#include <stdio.h>
#include <math.h> // pow() fonksiyonunu kullanabilmek için

int main()
{
    double taban, kuvvet, sonuc;
    
    /* kullanıcıdan iki sayı al */
    printf("Taban değerini giriniz:");
    scanf("%lf", &taban);
    printf("Kuvvet değerini giriniz");
    scanf("%lf", &kuvvet);
    
    /* taban^kuvvet değerlerini hesapla */
    sonuc= pow(taban, kuvvet);
    
    printf("%.2f ^ %.2f = %.2f", taban, kuvvet , sonuc);
    
    return 0;
}
