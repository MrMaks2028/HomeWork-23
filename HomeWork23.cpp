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
	cout << "������ 1.\n������� ��� �����:\n";
	cin >> a >> b >> c;
	threeMax(a, b, c);
	cout << a << " " << b << " " << c << "\n\n";

	cout << "������ 2.\n������:\n";
	int ar[10] = { 1,2,3,4,-5,6,7,-8,9,-10 };
	showAr(ar, 10);
	cout << fstNegative(ar, 10) << "\n\n";

	cout << "������ 3.\n1-� ������:\n";
	int a1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int a2[5] = {2,15,6,18,10};
	showAr(a1, 10);
	cout << "2-� ������:\n";
	showAr(a2, 5);
	zero2massive(a1, 10, a2, 5);
	cout << "����� 2-� ������:\n";
	showAr(a2, 5);

	return 0;
}
//������ 1
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
//������ 2
int fstNegative(int a[], int len) {
	int& aref = a[0];
	for (int i = 0; i < len; i++)
		if (a[i] < 0)
			return aref = a[i];
	return aref;
}
//������ 3
void zero2massive(int a1[], int len1, int a2[], int len2) {
	for (int i = 0; i < len1; i++)
		for(int j = 0; j < len1; j++)
			if (*(a2 + j) == *(a1 + i))
				*(a2 + j) = 0;
}