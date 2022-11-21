#include<stdio.h>
#include<stdlib.h>
#define Maksimum(s1,s2) (s1>s2) ? s1 : s2

int main() {

//Define ile buyuk sayiyi bulma makrosu
	int s1, s2;

	printf("1.Sayiyi Giriniz: ");
	scanf_s("%d", &s1);

	printf("2.Sayiyi Giriniz: ");
	scanf_s("%d", &s2);

	printf("Buyuk Sayiyi:%d", Maksimum(s1, s2));


	return 0;
}