#define _CRT_SECURE_NO_WARNINGS
#define pi 3.14
#include<math.h>
#include <iostream>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

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
void uzun()
int main() {
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
	ptrfunc();

	printf("\n");
	system("pause");

	return 0;
}