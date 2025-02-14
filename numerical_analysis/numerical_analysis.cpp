#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<locale.h>

#include <math.h>
//#define E 2.71828f

double func(double x) {
	return pow(x, 2) - 4 * x - 4;
}

int main() {
	setlocale(LC_ALL, "turkish");
	double a, b;
	double p = 0;
	double hata=0;
	printf("Hata payýný giriniz: ");
	scanf("%lf", &hata);
get_cor:
	printf("sýrayla a ve b apsislerini giriniz: ");
	scanf("%lf %lf", &a, &b);
here:
	double sign = func(a) * func(b);
	if (sign < 0) {
		p = double((a + b) / 2);
		printf("a=%4lf, f(a)=%4lf | p=%4lf, f(p)=%4lf | b=%4lf, f(b)=%4lf | mutlak hata: %4lf\n", a, func(a), p, func(p), b, func(b),abs(b-a));
		if ((abs(b - a) < hata)) {
			printf("\ndenklemin kökü [%0.10lf, %0.10lf] aralýðýndadýr", a, b);
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
	else if(sign>=0){
		printf("yeniden tanýmlayýn\n");
		goto get_cor;
	}


	printf("\n");
	system("pause");
	return 0;
}