#include <iostream>
using namespace std;

void showAr(int a[], int len) {
	cout << "[";
	for (int i = 0; i < len; i++) 
		cout << a[i] << ", ";
	cout << "\b\b]\n";
}
void threeMax(int &aref, int &bref, int &cref);
int fstNegative(int a[], int len);
void zero2massive(int a[], int len1, int a2[],int len2);

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Задача 1.\nВведите три числа:\n";
	cin >> a >> b >> c;
	threeMax(a, b, c);
	cout << a << " " << b << " " << c << "\n\n";

	cout << "Задача 2.\nМассив:\n";
	int ar[10] = { 1,2,3,4,-5,6,7,-8,9,-10 };
	showAr(ar, 10);
	cout << fstNegative(ar, 10) << "\n\n";

	cout << "Задача 3.\n1-й массив:\n";
	int a1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int a2[5] = {2,15,6,18,10};
	showAr(a1, 10);
	cout << "2-й массив:\n";
	showAr(a2, 5);
	zero2massive(a1, 10, a2, 5);
	cout << "Новый 2-й массив:\n";
	showAr(a2, 5);

	return 0;
}
//Задача 1
void threeMax(int& aref, int &bref, int &cref) {
	int max = aref;
	if (aref > bref && aref > cref){
		max = aref;
		bref = max, cref = max;
	}
	else
		if (bref > aref && bref > cref) {
			max = bref;
			aref = max, cref = max;
		}
		else
			if (cref > aref && cref > bref) {
				max = cref;
				aref = max, bref = max;
			}
}
//Задача 2
int fstNegative(int a[], int len) {
	int& aref = a[0];
	for (int i = 0; i < len; i++)
		if (a[i] < 0)
			return aref = a[i];
	return aref;
}
//Задача 3
void zero2massive(int a1[], int len1, int a2[], int len2) {
	for (int i = 0; i < len1; i++)
		for(int j = 0; j < len1; j++)
			if (*(a2 + j) == *(a1 + i))
				*(a2 + j) = 0;
}