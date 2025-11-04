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
{
	return a/b;
}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int a, b;
	cout << "Nhap so a:";
	cin >> a;
	cout << "Nhap so b:";
	cin >> b;
	cout << "Tong =" << tong(a, b)<<endl;
	
	cout<<"Hieu =" << hieu(a,b)<<endl;
	cout << "Tich =" << tich(a,b)<<endl;
	cout << "Thuong =" <<thuong(a,b)<<endl;

	system("pause");
	return 0;
}