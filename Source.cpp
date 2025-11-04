#include <iostream>

using namespace std;
<<<<<<< HEAD
int tong(int a, int b);
int hieu(int a, int b)
{
	return a-b;
}
int tich(int a, int b);
=======

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
>>>>>>> 7887558e8bd032b3939dd8d64108f9fd07694379
float thuong(int a, int b);
int main()
{
	int a=10;
	int b=5;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
<<<<<<< HEAD
	cout << "Sinh viên B thực hiện" << endl;
	cout<<"Hieu =" << hieu(a,b);
=======
	int a, b;
	cout << "Nhap so a:";
	cin >> a;
	cout << "Nhap so b:";
	cin >> b;
	cout << "Tong =" << tong(a, b);
>>>>>>> 7887558e8bd032b3939dd8d64108f9fd07694379
	system("pause");
	return 0;
}