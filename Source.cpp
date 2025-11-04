#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b)
{
	return a-b;
}
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	int a=10;
	int b=5;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << "Sinh viên B thực hiện" << endl;
	cout<<"Hieu =" << hieu(a,b);
	system("pause");
	return 0;
}