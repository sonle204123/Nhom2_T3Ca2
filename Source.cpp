#include <iostream>

using namespace std;

int tong(int a, int b)
{
	int tong = a + b;
	return tong;
}
int hieu(int a, int b);
int tich(int a, int b)
{
	return a * b;
}
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int a, b;
	cout << "Nhap so a:";
	cin >> a;
	cout << "Nhap so b:";
	cin >> b;
	cout << "Tong =" << tong(a, b);
	system("pause");
	return 0;
}