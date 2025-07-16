/* BTK Akademi - C programlama Dili Kursu */
/**
 * C programla dilinde değişken tipleri
 * arasında dönüşüm işlemi (typecasting)
 */
 #include <stdio.h>
 
 int main() {
     
     int sayi1 =17, sayi2 = 5;
     
     int tamsayi_bolme_sonucu;
     float gercek_bolme_sonucu_float;
     double gercel_bolme_sonucu_double;
     int gercel_bolme_sonucu_float_tamsayı;
     
     tamsayi_bolme_sonucu = sayi1 / sayi2;
     printf("Tamsayı Bölme Sonucu = %d\n", tamsayi_bolme_sonucu);
     
     gercek_bolme_sonucu_float= (float) sayi1 / sayi2;
     printf("Gerçek Sayı Bölme Sonucu (float) = %.20f\n", gercek_bolme_sonucu_float);
     
    gercel_bolme_sonucu_double = (double) sayi1 / sayi2;
    printf("Gerçek Sayı Bölme Sonucu (double) = %.20f\n", gercel_bolme_sonucu_double);
    
    gercel_bolme_sonucu_float_tamsayı = (int) sayi1 / sayi2;
    printf("Gerçek Sayı Bölme Sonucu (float)'un Tam Sayıya Dönüştürülmüş Hali= %d\n",
                        gercel_bolme_sonucu_float_tamsayı);
 }
