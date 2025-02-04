#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

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
//code from this line to line 450 is borrowed from my C programming classes notes and are coded by my instructors in Trakya university faculty of engineering
/* struct node {
    int sayi;
    struct node* sonraki;
};
node* ilk=NULL;
int mevcut = 0;
void menu(void);
void ekle();
void sirali_ekle();
void liste(void);
void ara(void);
void guncelle(void);
void sil(void);
int main(){
    setlocale(LC_ALL, "Turkish");
    do {
        menu();
    } while (1);
    system("pause");
    return(0);
}
void menu(void) {
    char secim;
    system("cls");
    printf("Baðlý Liste MENU                            Düðüm adet : %d\n", mevcut);
    printf("  1-Kayýt Ekle\n");
    printf("  2-Kayýt Ara\n");
    printf("  3-Kayýt Listele\n");
    printf("  4-Kayýt Güncelle\n");
    printf("  5-Kayýt Sil\n");
    printf("  6-Çýkýþ\n");
    printf("Seçiminiz(1/2/3/4/5/6)");
    do {
        secim = _getch();
    } while (!(secim > 48 && secim < 55));
    printf("\n");
    switch (secim) {
    case 49:sirali_ekle(); break;
    case 50:ara(); break;
    case 51:liste(); break;
    case 52:guncelle(); break;
    case 53:sil(); break;
    case 54: {printf("\nÇýktýnýz.\n"); system("pause"); exit(-1);  }
    }
}
void ekle() {
    int data;
    printf("\nEklenecek Sayý :");
    scanf("%d", &data);
    struct node* temp = (node*)malloc(sizeof(node));
    mevcut++;
    if (temp != NULL) {
        temp->sayi = data;
        temp->sonraki = NULL;
        struct node* ptr = ilk;
        if (ilk == NULL) ilk = temp;
        else {
            while (ptr->sonraki != NULL) {
                ptr = ptr->sonraki;
            }
            ptr->sonraki = temp;
        }
    }
    else {
        printf("Yer tahsis edilemedi.\n");
    }
}
void sirali_ekle() {
    int data;
    printf("\nEklenecek Sayý :");
    scanf("%d", &data);
    struct node* temp = (node*)malloc(sizeof(node));
    mevcut++;
    if (temp != NULL) {
        temp->sayi = data;
        temp->sonraki = NULL;
        struct node* ptr = ilk,*onceki=NULL;
        if (ilk == NULL) ilk = temp;
        else {
            onceki = NULL;
            while (ptr->sonraki != NULL && ptr->sayi<data) {
                onceki = ptr;
                ptr = ptr->sonraki;
            }
            if (ptr->sayi < data) {
                ptr->sonraki = temp;
            }
            else {
                if (onceki == NULL) {
                    temp->sonraki = ilk;
                    ilk = temp;
                }
                else {
                    onceki->sonraki = temp;
                    temp->sonraki = ptr;
                }
            }
          
        }
    }
    else {
        printf("Yer tahsis edilemedi.\n");
    }
}
void liste() {
    struct node* temp = (node*)malloc(sizeof(node));
    struct node* ptr = ilk;
    system("cls");
    while (ptr != NULL) {
        if(ptr->sonraki!=NULL) printf("[%d ]%d --> ", ptr,ptr->sayi);
        else printf("[%d ]%d", ptr,ptr->sayi);
        ptr = ptr->sonraki;
    }
    printf("\n");
    system("pause");
}
void ara() {
    int ara_sayi;
    printf("\nAranan Sayý :");
    scanf("%d",&ara_sayi);
    struct node* ptr = ilk;
    system("cls");
    bool durum = false;
    while (ptr != NULL) {
        if (ptr->sayi == ara_sayi) {
            printf("Buldum  adresi : %p\n", ptr);
            durum = true;
        }
        ptr = ptr->sonraki;
    }
    if (durum == false) {
        printf("Aranan sayý bulunamadý.\n");
    }
    system("pause");
 }
void guncelle() {
    int gun_sayi;
    printf("Sýrasýz ekle ile kullanýnýz,\nverileriniz listede sýralý olarak tutuluyor ise bu veriyi güncellemeniz bu yapýyý bozabilir\n");
    printf("\nGüncellenecek Sayý :");
    scanf("%d", &gun_sayi);
    struct node* ptr = ilk;
    system("cls");
    bool durum = false;
    while (ptr != NULL) {
        if (ptr->sayi == gun_sayi) {
            printf("Buldum  adresi : %p\n", ptr);
            printf("Yeni sayi gir: ");
            scanf("%d", &ptr->sayi);
            durum = true;
        }
        ptr = ptr->sonraki;
    }
    if (durum == false) {
        printf("Aranan sayý bulunamadý.\n");
    }
}
void sil(void) {
    int ara_sayi;
    printf("\nSilinecek Sayý :");
    scanf("%d", &ara_sayi);
    struct node* ptr = ilk, * onceki = NULL;
    bool durum = false;
    while (ptr->sonraki != NULL) {
        if (ptr->sayi == ara_sayi) {
            if (onceki == NULL) ilk = ilk->sonraki;
            else {
                onceki->sonraki = ptr->sonraki;
                free(ptr);
            }
            durum = true;
            mevcut--;
            break;
        }
        onceki = ptr;
        ptr = ptr->sonraki;
    }

    if (ptr->sayi == ara_sayi && durum==false ) {
        if (onceki != NULL) {
            onceki->sonraki = NULL;   

        }
        else {
            free(ilk);
            ilk = NULL;

        }
        mevcut--;
    }
}
struct node {
    int sayi;
    struct node* sonraki;
};
node* ilk = NULL;
int mevcut = 0;
void menu(void);
void ekle();
void sirali_ekle();
void liste(void);
void ara(void);
void guncelle(void);
void sil(void);
int main() {
    setlocale(LC_ALL, "Turkish");
    do {
        menu();
    } while (1);
    system("pause");
    return(0);
}
void menu(void) {
    char secim;
    system("cls");
    printf("Baðlý Liste MENU                            Düðüm adet : %d\n", mevcut);
    printf("  1-Kayýt Ekle\n");
    printf("  2-Kayýt Ara\n");
    printf("  3-Kayýt Listele\n");
    printf("  4-Kayýt Güncelle\n");
    printf("  5-Kayýt Sil\n");
    printf("  6-Çýkýþ\n");
    printf("Seçiminiz(1/2/3/4/5/6)");
    do {
        secim = _getch();
    } while (!(secim > 48 && secim < 55));
    printf("\n");
    switch (secim) {
    case 49:sirali_ekle(); break;
    case 50:ara(); break;
    case 51:liste(); break;
    case 52:guncelle(); break;
    case 53:sil(); break;
    case 54: { printf("\nÇýktýnýz.\n"); system("pause"); exit(-1); }
    }
}
void ekle() {
    int data;
    printf("\nEklenecek Sayý :");
    scanf("%d", &data);
    struct node* temp = (node*)malloc(sizeof(node));
    mevcut++;
    if (temp != NULL) {
        temp->sayi = data;
        temp->sonraki = NULL;
        struct node* ptr = ilk;
        if (ilk == NULL) ilk = temp;
        else {
            while (ptr->sonraki != NULL) {
                ptr = ptr->sonraki;
            }
            ptr->sonraki = temp;
        }
    }
    else {
        printf("Yer tahsis edilemedi.\n");
    }
}
void sirali_ekle() {
    int data;
    printf("\nEklenecek Sayý :");
    scanf("%d", &data);
    struct node* temp = (node*)malloc(sizeof(node));
    mevcut++;
    if (temp != NULL) {
        temp->sayi = data;
        temp->sonraki = NULL;
        struct node* ptr = ilk, * onceki = NULL;
        if (ilk == NULL) ilk = temp;
        else {
            onceki = NULL;
            while (ptr->sonraki != NULL && ptr->sayi < data) {
                onceki = ptr;
                ptr = ptr->sonraki;
            }
            if (ptr->sayi < data) {
                ptr->sonraki = temp;
            }
            else {
                if (onceki == NULL) {
                    temp->sonraki = ilk;
                    ilk = temp;
                }
                else {
                    onceki->sonraki = temp;
                    temp->sonraki = ptr;
                }
            }

        }
    }
    else {
        printf("Yer tahsis edilemedi.\n");
    }
}
void liste() {
    struct node* temp = (node*)malloc(sizeof(node));
    struct node* ptr = ilk;
    system("cls");
    while (ptr != NULL) {
        if (ptr->sonraki != NULL) printf("[%d ]%d --> ", ptr, ptr->sayi);
        else printf("[%d ]%d", ptr, ptr->sayi);
        ptr = ptr->sonraki;
    }
    printf("\n");
    system("pause");
}
void ara() {
    int ara_sayi;
    printf("\nAranan Sayý :");
    scanf("%d", &ara_sayi);
    struct node* ptr = ilk;
    system("cls");
    bool durum = false;
    while (ptr != NULL) {
        if (ptr->sayi == ara_sayi) {
            printf("Buldum  adresi : %p\n", ptr);
            durum = true;
        }
        ptr = ptr->sonraki;
    }
    if (durum == false) {
        printf("Aranan sayý bulunamadý.\n");
    }
    system("pause");
}
void guncelle() {
    int gun_sayi;
    printf("Sýrasýz ekle ile kullanýnýz,\nverileriniz listede sýralý olarak tutuluyor ise bu veriyi güncellemeniz bu yapýyý bozabilir\n");
    printf("\nGüncellenecek Sayý :");
    scanf("%d", &gun_sayi);
    struct node* ptr = ilk;
    system("cls");
    bool durum = false;
    while (ptr != NULL) {
        if (ptr->sayi == gun_sayi) {
            printf("Buldum  adresi : %p\n", ptr);
            printf("Yeni sayi gir: ");
            scanf("%d", &ptr->sayi);
            durum = true;
        }
        ptr = ptr->sonraki;
    }
    if (durum == false) {
        printf("Aranan sayý bulunamadý.\n");
    }
}
void sil(void) {
    int ara_sayi;
    printf("\nSilinecek Sayý :");
    scanf("%d", &ara_sayi);
    struct node* ptr = ilk, * onceki = NULL;
    bool durum = false;
    while (ptr->sonraki != NULL) {
        if (ptr->sayi == ara_sayi) {
            if (onceki == NULL) ilk = ilk->sonraki;
            else {
                onceki->sonraki = ptr->sonraki;
                free(ptr);
            }
            durum = true;
            mevcut--;
            break;
        }
        onceki = ptr;
        ptr = ptr->sonraki;
    }

    if (ptr->sayi == ara_sayi && durum == false) {
        if (onceki != NULL) {
            onceki->sonraki = NULL;

        }
        else {
            free(ilk);
            ilk = NULL;

        }
        mevcut--;
    }
}*/
int main() {
    setlocale(LC_ALL, "turkish");
    //func();
    printf("rjwmfgf mjwpj?j");
    char a[] = "asd";
    printf("%d", (int)strlen(a));
    printf("\n");
    system("pause");
    return 0;
}