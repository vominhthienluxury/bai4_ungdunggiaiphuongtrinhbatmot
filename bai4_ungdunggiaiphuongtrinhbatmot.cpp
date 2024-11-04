#include <iostream>
using namespace std;
int main()
{
	int a, b;
	float x;
	cout << "UNG DUNG GIAI PHUONG BAC I\n";
	cout << "--------------------------\nnhap bieu thuc a\n \t \n \t |bieu thuc a|" << endl;  //noi dung hien thi
	cout << "Nhap a:\t   "; cin >> a;  // ham so a
	cout << "--------------------------\nnhap bieu thuc b\n \t \n \t |bieu thuc b|" << endl;  //noi dung hien thi
	cout << "Nhap b:\t   "; cin >> b;  // ham so b
	if (a == 0)
	{
		if (b == 0)
		{
			cout << "PT dung voi moi x ~ vo so nghiem\n";
		}
		else {
			cout << "PT vo nghiem\n";
		}

	}
	else {
		x = (float) - b / a;
		cout << "--------------------------\n ket qua\n \t \n \t    |  dap an  |" << endl;  //noi dung hien thi
		cout << "Ket qua x = " << x << endl;  //dap an
	}

	return 0;
}