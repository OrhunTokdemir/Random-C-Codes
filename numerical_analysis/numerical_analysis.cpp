#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<locale.h>
#include <math.h>
#include "numerical_analysis.h"
//#define E 2.71828f

double func(double x) {
	return pow(x, 3) - 4 * x*x - 4;//kök analizi yapýlacak fonksiyon burdan elle deðiþtiriliyor
	//ilerleyen sürümlerde fonksiyonu string olarak konsoldan alma özelliði eklemeyi planlýyorum.
}

int BisectionMethod(bool& retFlag)
{
	retFlag = true;
	setlocale(LC_ALL, "turkish");
	double a, b;
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
		printf("a=%8lf, f(a)=%8lf | p=%8lf, f(p)=%8lf | b=%8lf, f(b)=%8lf | mutlak hata: %8lf\n", a, func(a), p, func(p), b, func(b), abs(p - p0));
		
		if (abs(p-p0) < hata || ((p!=0 && abs(p-p0)/abs(p) <hata) && abs(func(p))<hata)) {
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
	retFlag = false;
	return 0;
}


int main() {
	setlocale(LC_ALL, "turkish");
	bool retFlag;
	int retVal = BisectionMethod(retFlag);
	if (retFlag) return retVal;


	printf("\n");
	system("pause");
	return 0;
}