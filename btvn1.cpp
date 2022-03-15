#include <iostream>
#include <math.h>
#include <iomanip.h>
using namespace std; 

//I. if else 
// bai 1 cach 1
/*int main()
{
	int thu;
     cout << " Nhap vao thu trong tuan : ";
     cin >> thu;
	if (thu == 1)
	{
		cout << " Sunday !!! \n";
	}
	else if (thu == 2)
	{
		cout << " Monday !!! \n";
	}
	else if (thu == 3)
	{
		cout << " Tuesday !!! \n";
	}
	else if (thu == 4)
	{
		cout << " Wednesday !!! \n";
	}
	else if (thu == 5)
	{
		cout << " Thursday !!! \n";
	}
	else if (thu == 6)
	{
		cout << " Friday !!! \n";
	}
	else if (thu == 7)
	{
		cout << " Saturday !!! \n";
	}
	else 
	{
		cout << " thu khong hop le -- Moi ban nhap lai !!! \n";
	}
	return 0;
}*/

// bai 1 cach 2
int main()
{
	int thu;
	cout << " Nhap vao thu trong tuan : ";
	cin >> thu;
	switch(thu)
	{
		case 1: 
			cout << " 1.Sunday !!! \n";
			break;
		case 2: 
			cout << " 2.Monday !!! \n";
			break;
		case 3: 
			cout << " 3.Tuesday !!! \n";
			break;
		case 4: 
			cout << " 4.Wednesday !!! \n";
			break;
		case 5: 
			cout << " 5.Thursday !!! \n";
			break;
		case 6: 
			cout << " 6.Friday !!! \n";
			break;
		case 7: 
			cout << " 7.Saturday !!! \n";
			break;
		default: 
			cout << " thu khong hop le -- Moi ban nhap la !!! \n";
			break;
	}
	return 0;
}

// bai 2
/*int main()
{
	int n;
	int tongtien = 1;
	cout << " Nhap so KW dien tieu thu : ";
	cin >> n;
	if (n >= 0 && n <= 100)
	{
		tongtien = n*2000;
	}
	else if (n >= 101 && n <= 200)
	{
		tongtien = n*2500;
	}
	else if (n >= 201 && n <= 300)
	{
		tongtien = n*3000;
	}
	else
	{
		tongtien = n*5000;
	}
	cout << " --->Tong so tien dien la : "<< tongtien << endl;
	return 0;
}*/

// II. Vong lap for
// bai 1
/*int main()
{
    int n; 
	int s = 1;
	cout << " Nhap n : ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
	    s = s * 2 * i;
	}
	cout<< " Tich 2 * 4 * 6 * ... *2n la : " << s << endl;
	return 0;
}*/

//bai2
/*int main()
{
	int n; 
	cout << " Nhap so dong : ";
	cin >> n;
	for(int i=n; i>=1; i--)
	{
		cout << setw(5);
		for (int j=1; j<=i; j++)
		{
	     	cout << "*";
		}
	cout << endl;
	}
	return 0;
}*/