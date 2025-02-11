#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14
#include <math.h>
#include <iostream>
#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <locale>
#include <codecvt>
#include<conio.h>
#include <clocale>
#include<string.h>
#include<string>
#include <windows.h>

int ornek1()
{
	printf("Adinizi giriniz:");
	char ad[20];
	scanf("%s", ad);
	int dogumyili;
	printf("Dogum yilinizi giriniz: ");
	scanf("%d", &dogumyili);
	int yas = 2023 - dogumyili;
	printf("Merhaba %s, yasiniz: %d", ad, yas);
	return 0;
}
int daire() {
	float r;
	printf("yaricap giriniz: ");
	scanf("%f", &r);
	printf("Cevre = %0.2f \n", 2 * PI * r);
	printf("Alan = %0.2f \n", PI * r * r);
	return 0;
}
int condition(int a, int b, int c)
{
	int x;
	x = a < b ? 15 : c;
	printf("%d\n", x);
	return 0;
}
int ders_notu() {
	int vize, final;
	printf("Vize notunuzu giriniz:");
	scanf("%d", &vize);
	printf("Final notunuzu giriniz:");
	scanf("%d", &final);

	float ort = float(final * 0.7) + float(vize * 0.3);
	printf("%0.2f \n", ort);
	return 0;
}
int get_text() {
	char mesaj[100];
	gets_s(mesaj);
	printf("\t %s", mesaj);


	return 0;
}
int IsPrime(int num1) {
	int count = 0, x = 2;

	while (true) {
		if (x < num1 and (num1 % x == 0)) {
			printf("%d asal degildir", num1);
			break;
		}
		else if (x < num1 and (num1 % x != 0)) {
			x++;
			continue;
		}
		else {
			printf("%d asaldir", num1);
			break;
		}

	}
	return 0;
}
int factors() {
	int num1;
	scanf("%d", &num1);
	printf("Bulunenler\n%2d\n", 1);
	int asallik = 1;
	for (int i = 2;i < num1;i++) {
		if (num1 % i == 0) {
			asallik = 0;
			printf("%2d\n", i);
			continue;
		}
		else {
			continue;
		}
	}
	printf("%2d\n", num1);
	if (asallik == 1) {
		printf("sayi asaldir");
	}
	else {
		printf("sayi asal degildir");
	}
	return 0;
}
int pyramid() {
	int num1;
	scanf("%d", &num1);
	for (num1;num1 > 0;num1--) {
		for (int i = 1;i <= num1;i++) {
			printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}
int PerfectNumber() {
	int num, sum = 0;
	printf("s degeri gir:");
	scanf("%d", &num);
	for (int i = 1;i < num; i++) {
		if (num % i == 0) {
			sum += i;
			continue;
		}
		else {
			continue;
		}
	}
	if (sum == num) {
		printf("%d mukemmel sayidir", num);

	}
	else {
		printf("%d mukemmel sayi degildir", num);
	}
	return 0;
}
void bigger() {
	int num0, num1, num2;
	scanf("%d %d %d", &num0, &num1, &num2);
	int max = num0 > num1 ? (num0 > num2 ? num0 : num2) : (num1 > num2 ? num1 : num2);
	printf("max:%d", max);
}
int factorial() {
	long long a, b = 1;
	scanf("%lld", &a);
	for (long long i = 1;i <= a;i++) {
		b *= i;
	}
	printf("%lld", b);
	return 0;
}

int transform() {




	//float num1 = atof(string);
	//printf("%f\n%s\n%d",num1,string);
	return 0;
}
int pointer() {

	return 0;

}
void func2() {
	printf("Path :%s \n", getenv("PATH"));
	printf("«Temp : % s \n", getenv("TEMP"));
	printf("«OS :%s \n", getenv("OS"));
}

void ptrArith() {
	char mesaj[100] = "C Ýle programlama Dersine Hoþ geldiniz";
	char* p = mesaj;
	int s = 0;
	while (*p++) s++;
	printf("%d\n", s);

}
void ptrfunc() {
	char mesaj1[100] = "C Ýle programlama Dersine Hoþ geldiniz";
	char mesaj2[100];
	char* p1 = mesaj1;
	char* p2 = mesaj2;
	do {
		*p2 = *p1;
		p1++;
		p2++;
	} while (*(p1 - 1));
}
void uzun(const char* str1, const char* str2) {
	const char* longer = strlen(str1) > strlen(str2) ? str1 : str2;
	printf("%p %s", longer, longer);

}
int nmsay(const char* str1) {
	setlocale(LC_ALL, "turkish");
	int count = 0;
	char vowel[] = "aeýioöuüAEIÝOÖUÜ";
	const char* a = str1;

	for (str1;str1 < a + strlen(a);str1++) {
		for (int i = 0;i < 15;i++)
		{
			if (*str1 == vowel[i]) {
				count++;
			}
		}
	}

	return count;
}

void addMatrix() {
	int a[3][3], b[3][3], c[3][3];
	for (int i = 0;i < 3;i++) {
		for (int j = 0; j < 3; j++) {
			printf("a'nýn %dx%d inci deðerini giriniz:", i + 1, j + 1);
			scanf("%d", &a[i][j]);
			printf("\n");
			printf("b'nýn %dx%d inci deðerini giriniz:", i + 1, j + 1);
			scanf("%d", &b[i][j]);
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	for (int i = 0;i < 3;i++) {
		printf("|");
		for (int j = 0; j < 3; j++)
		{
			printf("%d", c[i][j]);
			if (j < 2) {
				printf(", ");
			}
		}
		printf("|\n");
	}
}
void mulMatrix() {
	int a[3][3], b[3][3], c[3][3];
	for (int i = 0;i < 3;i++) {
		for (int j = 0; j < 3; j++) {
			printf("a'nýn %dx%d inci deðerini giriniz:", i + 1, j + 1);
			scanf("%d", &a[i][j]);
			printf("\n");
			printf("b'nýn %dx%d inci deðerini giriniz:", i + 1, j + 1);
			scanf("%d", &b[i][j]);
			c[i][j] = a[i][j] * b[i][j];
		}
	}
	printf("C matrisi\n");
	for (int i = 0;i < 3;i++) {
		printf("|");
		for (int j = 0; j < 3; j++)
		{
			printf("%d", c[i][j]);
			if (j < 2) {
				printf(", ");
			}
		}
		printf("|\n");
	}


}
void ceaserEncrypt(char* point) {
	system("chcp 1254 > nul");
	setlocale(LC_ALL, "turkish");
	char msg0[100];
	char msg1[100];
	char* ptrmsg = msg1;
	printf("Þifrelenecek metni giriniz:");
	gets_s(msg0, sizeof(msg0));//gets_s doesn't register turkish characters properly. the encryption part of the code works properly if it was given an initialized character array.
	system("cls");
	int i;
	for (i = 0;msg0[i] != '\0';i++) {
		if (msg0[i] != ' ') {
			msg1[i] = msg0[i] + 5;
		}

		else {
			msg1[i] = ' ';
		}
	}
	msg1[i] = '\0';
	printf("encryption:%s", msg1);
	strcpy(point, msg1);
}
char text[100];
char* ptrtext = text;

void ceaserDecrypt(char str[]) {
	setlocale(LC_ALL, "turkish");
	char msg0[100];
	strcpy(msg0, str);
	int i;
	for (i = 0;i < strlen(msg0);i++) {
		if (msg0[i] != ' ') {
			msg0[i] = msg0[i] - 5;
		}

		else {
			msg0[i] = ' ';
		}
	}
	printf("\nDecryption:%s", msg0);


}

int cordiv[60];
int cordic[60];
char vowels[100];
char consonants[100];
int lenght;

void ayýr() /* for some reason this code works only on lowercase letters.punctuation marks and turkish characters doesnt register either*/ {
	setlocale(LC_ALL, "turkish");
	char sesli[] = "aeýioöuüAEIÝOÖUÜ";
	char sessiz[] = "bcçdfgðhjklmnprsþtxvyzqBCÇDFGÐHJKLMNPRSÞTXVYZQ.,;:'";
	char a[100];
	gets_s(a);
	lenght = (int)strlen(a);
	int i = 0, v = 0, c = 0, s = 0;
	for (i; i < lenght;i++) {
		for (int j = 0;j < strlen(sesli);j++) {
			if (a[i] == sesli[j]) {
				vowels[v] = a[i];
				cordiv[v] = i;
				v++;
				break;
			}
			else if (a[i] == sessiz[j]) {
				consonants[c] = a[i];
				cordic[c] = i;
				c++;
				break;
			}
			else if (a[i] == ' ') {
				consonants[c] = a[i];
				cordic[c] = i;
				c++;
				break;
			}
		}
	}
}
int structClass() {
	struct personel_tip {
		char isim[16];
		char soyisim[16];
		double maas;
		int baslama_yili;
		char GSM2[14];
		char il[20];
	}*ptrstru, kisi1, kisi2 = { "Hasan Ali","Duru", 12000.0,1985,"532 532 32 32","Van" };
	kisi1 = kisi2;
	ptrstru = &kisi2;
	printf("%d\n%s\n", kisi1.baslama_yili, ptrstru->il);
	kisi1.baslama_yili = 1234;
	printf("%d", kisi1.baslama_yili);
	return 0;
}

typedef struct KarmasikSayi {
	int gercel;
	int sanal;
}KS;

KS Topla(KS a, KS b) {
	KS toplam = { a.gercel + b.gercel,a.sanal + b.sanal };
	return toplam;
}
int whats_in_memory() {
	int a = 5;
	int b = 6;
	int* ptra = &a;
	for (int i = 0;i < 100;i++) {
		printf("%3d. satýr:%d\n", i + 1, *(ptra++));
	}
	return 0;
}
//code from this line to line 658 is borrowed from my C programming classes notes and are coded by my instructors in Trakya university faculty of engineering
//int func10() {
//	setlocale(LC_ALL, "Turkish");
//	 int x = 10;
//	printf("Kaca adet :");
//	scanf("%d", &x);
//	int A[x]; // x in sabit olmasý gerektiðinden derlenmedi, olabilir
//
//
//	system("pause");
//}



int func9() {
	setlocale(LC_ALL, "Turkish");
	int* p, i;
	//p = (int*)malloc(10 * sizeof(int));  //int p[10]; gibi
	p = (int*)calloc(10, sizeof(int));
	for (i = 0; i < 10; ++i) {
		printf("%lu   %d\n", (unsigned long)p, *p);
		p++;
	}


	system("pause");
	return 0;
}



int func8() {
	setlocale(LC_ALL, "Turkish");
	char* p, i;
	p = (char*)calloc(10, sizeof(char));
	for (i = 0; i < 10; ++i) {
		printf("%lu   %c\n", (unsigned long)p, *p);
		p++;
	}


	system("pause");
	return 0;
}


struct yenitip {
	char ad[21];
	int dogum_yili;
	float maas;
};
int func7() {
	setlocale(LC_ALL, "Turkish");
	struct yenitip* p;
	int i, n;
	printf("Kaç adet : ");
	scanf("%d", &n);
	p = (yenitip*)calloc(n, sizeof(yenitip));
	for (i = 0; i < n; ++i) {
		printf("%lu   %20s    %d   %f\n", (unsigned long)p, p->ad, p->dogum_yili, p->maas);
		p++;
	}


	system("pause");
	return 0;
}


struct yenitip1 {
	char ad[21];
	int dogum_yili;
	float maas;
};

int func6() {
	setlocale(LC_ALL, "Turkish");
	struct yenitip1* p;
	unsigned long int n;
	printf("Kaç adet : ");
	scanf("%lu", &n);
	p = (yenitip1*)calloc(n, sizeof(yenitip1));
	if (p == NULL) {
		printf("Yer tahsisatý yapýlamadý\n");
	}
	else {
		printf("Yer tahsisatý yapýldý\n");
	}

	system("pause");
	return 0;
}



int func5() {
	setlocale(LC_ALL, "Turkish");
	int* p, * pyedek;
	int i;
	unsigned long int n;
	printf("Kaç adet : ");
	scanf("%lu", &n);
	p = (int*)calloc(n, sizeof(int));
	pyedek = p;
	if (p == NULL) {
		printf("Yer tahsisatý yapýlamadý\n");
	}
	else {
		printf("Yer tahsisatý yapýldý\n");
	}

	for (i = 0; i < n; ++i) {
		p[i] = i;  // A[i]= Ba+i*e
		//p++;
	}
	p = pyedek;
	for (i = 0; i < n; ++i) {
		printf("%d\n", p[i]);
	}
	printf("Bellek alaný serbest býrakýldý\n");
	free(p);
	system("pause");
	return 0;
}



int func4() {
	setlocale(LC_ALL, "Turkish");
	int* p, * pyedek;
	int i;
	unsigned long int n;
	printf("Kaç adet : ");
	scanf("%lu", &n);
	p = (int*)calloc(n, sizeof(int));
	pyedek = p;
	if (p == NULL) {
		printf("Yer tahsisatý yapýlamadý\n");
	}
	else {
		printf("Yer tahsisatý yapýldý\n");
	}

	for (i = 0; i < n; ++i) {
		*p = i;  // A[i]= Ba+i*e
		p++;
	}
	p = pyedek;
	for (i = 0; i < n; ++i) {
		printf("%d\n", *p);
		p++;
	}
	printf("Bellek alaný serbest býrakýldý\n");
	p = pyedek;
	free(p);
	system("pause");
	return 0;
}


struct tip {
	char ad[21];
	float maas;
};

int func3() {
	setlocale(LC_ALL, "Turkish");
	struct tip* p, * pyedek;
	int i;
	unsigned long int n;
	printf("Kaç adet : ");
	scanf("%lu", &n);
	for (i = 0; i < n; ++i) {
		p = (tip*)calloc(1, sizeof(tip));
		if (p == NULL) {
			printf("1 adet yer tahsisatý yapýlamadý\n");
		}
		else {
			printf("1 adet yer tahsisatý yapýldý\n");
		}
		printf("Ad gir :");
		scanf("%s", p->ad);
		printf("Maaþ gir :");
		scanf("%f", &p->maas);

	}

	system("pause");
	return 0;
}

struct tip1 {
	char ad[21];
	float maas;
	struct tip1* next;
};

int func_2() {
	setlocale(LC_ALL, "turkish");
	struct tip1* yeni, * ilk = NULL, * son = NULL, * ptr, * gec;
	int i;
	unsigned long int n;
	while (1) {
		yeni = (tip1*)calloc(1, sizeof(tip1));
		if (yeni == NULL) {
			printf("1 adet yer tahsisatý yapýlamadý\n");
		}
		else {
			printf("1 adet yer tahsisatý yapýldý\n");
		}
		printf("Ad gir :");
		scanf("%s", yeni->ad);
		printf("Maaþ gir :");
		scanf("%f", &yeni->maas);
		if (yeni->maas == 0) {
			free(yeni);
			break;
		}
		if (ilk == NULL) {
			ilk = son = yeni;
		}
		else {
			son->next = yeni;
			son = yeni;
		}

	}
	ptr = ilk;
	while (ptr != NULL) {
		printf("%p    %20s   %f    %p\n", ptr, ptr->ad, ptr->maas, ptr->next);
		ptr = ptr->next;
	}

	ptr = ilk;
	while (ptr != NULL) {
		gec = ptr;
		ptr = ptr->next;
		printf("%p düðümü serbest býrakýldý\n", gec);
		free(gec);

	}


	system("pause");
	return 0;
}


int func1(void) {
	setlocale(LC_ALL, "turkish");
	int n, m, i, j;
	int* matris;
	/* Bellek tahsisi */
	printf("n x m matrisi için boyutunu giriniz :");
	int r = scanf("%d %d", &n, &m);
	matris = (int*)malloc(n * m * sizeof(int));
	if (matris != NULL) {
		printf("Bellek tahsisi yapýlmýþtýr.\n\n");
		/* Bellek alanýna 2 boyutlu dizi olarak kullanýlacak þekilde
			iþaretçi ile eriþip deðer atamasý*/
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				*(matris + i * m + j) = (i + 1) * (j + 1);
				// m[i][j] gibi bir kullaným oldu
			}
		}
		/* Ekrana göster */
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				printf("%d  ", *(matris + i * m + j));
			}
			printf("\n");
		}
		/* Bellek iade etme */
		system("pause");
		free(matris);
		printf("Tahsis edilen belleðin iadesi yapýlmýþtýr.\n\n");
		system("pause");
	}
	else {
		printf("Bellek tahsisi yapýlamadý ..\n");
		system("pause");
	}
	return 0;
}

int main() {
	setlocale(LC_ALL, "turkish");
	//ornek1();
	//daire();
	//condition(8, 5, 7);
	//printf("%d\n", sizeof(3.0));
	//ders_notu();
	//get_text();
	//IsPrime(2);
	//factors();
	//pyramid();
	//bigger();
	//PerfectNumber();
	//factorial();
	//printf("%d", system("dir F:"));
	//transform();
	//func2();
	//ptrArith();
	//ptrfunc();
	/*const char* mesaj1 = "merhaba herkese";
	const char* mesaj2 = "merhaba herkese selamlar";
	uzun(mesaj1, mesaj2);*/
	/*const char* a = "Rokanonun Dünyasý";
	printf("Number of vowels in this sentence: %d",nmsay(a));
	*/
	//addMatrix();
	//const char* ptr = "hello";
	//printf("%c", ptr[1]);
	//char a = 'b';
	//char b = a + 1;
	//printf("%c", b);
	//char a[100];
	//char* ptr = a;
	//ceaserEncrypt(ptr);
	//ceaserDecrypt(a);
	//for (int q = 0;q < 60;q++) {
	//	cordiv[q] = -1;
	//	cordic[q] = -1;
	//}
	//ayýr();
	//printf("%s\n%s", consonants, vowels);
	//structClass();
	//KS k1, k2;
	//k1.gercel = 1; k1.sanal = 2;k2.gercel = 3; k2.sanal = 4;
	//KS sonuc = Topla(k1, k2);
	//printf("Sonuc: %d + %di", sonuc.gercel, sonuc.sanal);
	//func7();
	//func1();
	//int *p;
	//p = (int*)malloc(1 * sizeof(int));
	//*p = 3;
	//printf("%d\n", *p);
	//free(p);
	//printf("%d", *p);
	ceaserEncrypt(ptrtext);
	ceaserDecrypt(text);
	printf("\n");
	system("pause");
	return 0;
}