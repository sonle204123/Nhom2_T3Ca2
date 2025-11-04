#include <iostream>

using namespace std;


int hieu(int a, int b)
{
	return a-b;
}

int tong(int a, int b)
{
	int tong = a + b;
	return tong;
}

int tich(int a, int b)
{
	return a * b;
}

float thuong(int a, int b);
int main()
{
		int a, b;
	cout << "Nhap so a:";
	cin >> a;
	cout << "Nhap so b:";
	cin >> b;
	cout << "Tong =" << tong(a, b);
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << "Sinh viên B thực hiện" << endl;
	cout<<"Hieu =" << hieu(a,b);
	cout << "Tich =" << tich(a,b);


	system("pause");
	return 0;
}