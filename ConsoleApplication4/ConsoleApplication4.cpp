#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int side() {
	struct ders {
		char ders_adi[30];
		int ders_notu;
	};

	struct ders* ptr;
	int kayit_sayisi;
	printf("kac kayit:");
	scanf("%d", &kayit_sayisi);

	ptr = (struct ders*)calloc(kayit_sayisi, sizeof(struct ders));

	for (int i = 0; i < kayit_sayisi; ++i) {
		printf("%d. ders adi gir:", i + 1);

		scanf("%s", ptr[i].ders_adi);
		printf("%d. ders notu gir:", i + 1);

		scanf("%d", &(ptr + i)->ders_notu);

	}
	for (int i = 0; i < kayit_sayisi; i++) {
		printf("%s dersinin notu: %d\n", (ptr + i)->ders_adi, ptr[i].ders_notu);
	}
	free(ptr);
	return 0;
}
struct dgm {
	int no;
	struct dgm* sonraki;
};
typedef struct dgm dugum;

//dugum* liste_olustur()
//{
//	int i, n;
//
//	printf("kac adet sayi girilecek?");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++);
//	{
//		if (i == 0) {
//			ilk = (dugum*)malloc(sizeof(dugum));
//			p = ilk;
//		}
//		else {
//			p->sonraki = (dugum*)malloc(sizeof(dugum));
//			p = p->sonraki;
//
//		}
//		scanf("%d", &p->no);
//	}
//	p->sonraki = NULL;
//	return (ilk);
//}
dugum* ilk = NULL;
dugum* liste_olustur()
{
	dugum* p=NULL;
	ilk=(dugum*)malloc(sizeof(dugum));
	int i, n;
	
	printf("\n Kaç adet kayýt girilecek?");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		if (i == 0) {
			p = ilk;
		}
		else {
			p->sonraki = (dugum*)malloc(sizeof(dugum));
			p = p->sonraki;
		}
		printf("deðer gir:");
		scanf("%d", &p->no);
	}
	p->sonraki = NULL;
	return (ilk);
}
void goster(dugum* ilk)
{
	int adet = 1;
	dugum* p;
	p = ilk;
	while (p != NULL) {
		printf("%d\n", p->no);
		adet++;
		p = p->sonraki;
	}
}
void ekle(dugum** ilk) {
	int k=0, yno;
	dugum* p = NULL, * onceki, * yeni;
	yeni = (dugum*)malloc(sizeof(dugum));
	printf("eklenecek düðüm gir");
	scanf("%d", &yeni->no);
	yno = yeni->no;
	p = *ilk;
	if (p->no > yno) {
		yeni->sonraki = p;
		*ilk = yeni;

	}
	else
}
int main() {
	liste_olustur();
	ekle(&ilk);
	goster(ilk);
	return 0;
}