#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<locale.h>
#include <math.h>
#include "numerical_analysis.h"
#define E 2.71828f

double func(double x) {
	return pow(x,3) + 4*pow(x,2)-10 ;//kök analizi yapýlacak fonksiyon burdan elle deðiþtiriliyor
	//ilerleyen sürümlerde fonksiyonu string olarak konsoldan alma özelliði eklemeyi planlýyorum.
}

int BisectionMethod(bool& retFlag)
{
	retFlag = true;
	setlocale(LC_ALL, "turkish");
	double a, b;
	int n = 1;
	double p = 0;
	double p0 = 0;
	double hata = 0;
	printf("Hata payýný giriniz: ");
	scanf("%lf", &hata);
get_cor:
	printf("sýrayla a ve b apsislerini giriniz: ");
	scanf("%lf %lf", &a, &b);
here:
	double sign = func(a) * func(b);
	if (sign < 0) {
		p0 = p;
		p = double((a + b) / 2);
		printf("a=%8lf, f(a)=%8lf | p=%8lf, f(p)=%8lf | b=%8lf, f(b)=%8lf | mutlak hata: %8lf | %d. islem\n", a, func(a), p, func(p), b, func(b), abs(p - p0), n++);

		if (abs(p - p0) < hata || ((p != 0 && abs(p - p0) / abs(p) < hata) && abs(func(p)) < hata)) {
			printf("\ndenklemin kökü [%0.10lf, %0.10lf] aralýðýndadýr\nmutlak hata= %0.10lf", a, b, abs(p - p0));
			printf("\n");
			system("pause");
			return 0;
		}
		if (func(a) * func(p) < 0) {
			b = p;
			goto here;
		}
		else if (func(b) * func(p) < 0) {
			a = p;
			goto here;
		}

	}
	else if (sign >= 0) {
		printf("yeniden tanýmlayýn\n");
		goto get_cor;
	}
	return 0;
}

//int RegulaFalsiMethod()
//{
//	setlocale(LC_ALL, "turkish");
//	double a, b;
//	int n = 1;
//	double p;
//	double fp = 0;
//	double hata = 0;
//	printf("Hata payýný giriniz: ");
//	scanf("%lf", &hata);
//get_cor:
//	printf("sýrayla [a,b] aralýðýný tanýmlayýnýz(b, a'dan büyük olmalý):  ");
//	scanf("%lf %lf", &a, &b);
//here:
//	double fa = func(a);
//	double fb = func(b);
//	double sign = fa * fb;
//	if (sign < 0 && a<b) {
//		p = double(fb*a-fa*b)/(fb-fa);
//		fp = func(p);
//		printf("a=%8lf, f(a)=%8lf | p=%8lf, f(p)=%8lf | b=%8lf, f(b)=%8lf | hata: %8lf | %d. islem\n", a, fa, p, fp, b, fb, abs(a - b), n++);
//
//		if (abs(a-b) < hata) {
//			printf("\ndenklemin kökü [%0.10lf, %0.10lf] aralýðýndadýr\nhata= %0.10lf", a, b, abs(a-b));
//			printf("\n");
//			system("pause");
//			return 0;
//		}
//		if (fa * fp < 0) {
//			b = p;
//			goto here;
//		}
//		else if (fb * fp < 0) {
//			a = p;
//			goto here;
//		}
//
//	}
//	else if (sign >= 0) {
//		printf("aralýðý yeniden tanýmlayýn\n");
//		goto get_cor;
//	}
//	return 0;
//}

int RegulaFalsiMethod(bool& retFlag)
{
	retFlag = true;
	setlocale(LC_ALL, "turkish");
	double a, b;
	int n = 1;
	double p = 0;
	double fp = 0;
	double hata = 0;
	printf("Hata payýný giriniz: ");
	scanf("%lf", &hata);
get_cor:
	printf("sýrayla [a,b] aralýðýný tanýmlayýnýz(b, a'dan büyük olmalý):  ");
	scanf("%lf %lf", &a, &b);

here:
	double fa = func(a);
	double fb = func(b);
	double sign = fa * fb;
	if (sign < 0) {
		p = double(fb * a - fa * b) / (fb - fa);
		fp = func(p);
		printf("a=%8.10lf, f(a)=%8.10lf | p=%8.10lf, f(p)=%8.10lf | b=%8.10lf, f(b)=%8.10lf | hata: %8.10lf | %d. islem\n", a, fa, p, fp, b, fb, abs(a - b), n++);

		if (fa * fp < 0) {
			b = p;
		}
		else if (fb * fp < 0) {
			a = p;
		}
		if (abs(a - b) <= hata || p == 0) {
			printf("\ndenklemin kökü [%0.10lf, %0.10lf] aralýðýndadýr\nhata= %0.10lf", a, b, abs(a - b));
			printf("\n");
			system("pause");
			return 0;
		}
		else {
			goto here;
		}
	}
	else if (sign >= 0 || a < b) {
		printf("aralýðý yeniden tanýmlayýn\n");
		goto get_cor;
	}
	retFlag = false;
	return {};
}


int main() {
	setlocale(LC_ALL, "turkish");
	//bool retFlag;
	//int retVal = BisectionMethod(retFlag);
	
	unsigned char a = 'ö';
	char b = 'a';
	printf("%u %c %u %c", a, a, b, b);

	printf("\n");
	system("pause");
	return 0;
}