/* BTK Akademi - C Programlama Dili Kursu */
/** 
 * karakter giridi ve çıktı işlemlerinin
 * getchar() ve putchar() fonksiyonları 
 * ile gerçşeleştirilmesi  */
 
 #include <stdio.h>
 
 int main()
 { 
    char ogrencı_notu;
    printf("Öğrenci notu giriniz:");
    
    /* getchar() komutu ile notu al ve ogrencı_notu değişkeninde sakla*/
    ogrencı_notu = getchar();
    
    /* putchar() komutu ile notu çıktı olarak ver*/
    putchar(ogrencı_notu);
    
    return 0;
}
    
