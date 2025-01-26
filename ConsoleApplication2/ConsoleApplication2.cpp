#include <iostream>
#include <stdlib.h>
#include <locale.h>
int func() {
    const char* deger = "3324650;1375212;3688990";
    char* kalan;
    unsigned long int sayi1, sayi2, sayi3;
    printf("Dizge : %s\n", deger);
    sayi1 = strtoul(deger, &kalan, 10);
    printf("Dönüþtürülmüþ deðer = %lu\n", sayi1);
    printf("Kalan = %s\n", kalan);
    deger = ++kalan;
    sayi2 = strtoul(deger, &kalan, 10);
    printf("Dönüþtürülmüþ deðer = %lu\n", sayi2);
    printf("Kalan = %s\n", kalan);
    deger = ++kalan;
    sayi3 = strtoul(deger, &kalan, 10);
    printf("Dönüþtürülmüþ deðer = %lu\n", sayi3);
    printf("Kalan = %s\n", kalan);
    system("pause");
    return 0;
}
int func1() {
    char a[] = "selam";
    char *ptr = a;
    printf("%s %s %s\n", a, ptr+1, *(ptr));
    return 0;
}
//int i = 3;
//int* ptr = &i;
void func4(int* a) {
    *a = 5;
    printf("%d", *a);

}

int main() {
    setlocale(LC_ALL, "turkish");
    //func();
    char a[] = "asd";
    printf("%d", (int)strlen(a));
    printf("\n");
    system("pause");
    return 0;
}