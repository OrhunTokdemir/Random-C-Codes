#define _CRT_SECURE_NO_WARNINGS
#define pi 3.14
#include<math.h>
#include <iostream>
#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>
#include<string.h>

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
	printf("Cevre = %0.2f \n", 2 * pi * r);
	printf("Alan = %0.2f \n", pi * r * r);
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
	setlocale(LC_ALL, "turkish");
	char msg0[100];
	char msg1[100];
	char* ptrmsg = msg1;
	printf("Þifrelenecek metni giriniz:");
	gets_s(msg0, sizeof(msg0));
	system("cls");
	int i;
	for (i = 0;msg0[i]!='\0';i++) {
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
char a[100];
char* ptr = a;
void ceaserDecrypt(char str[]) {//for some reason it doesnt decrpt or maybe encrypt turkish characters properly. I can solve this problem with creating if statements for all of the turkish characters
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
	ceaserEncrypt(ptr);
	ceaserDecrypt(a);
	  
	
	
	

	printf("\n");
	system("pause");

	return 0;
}