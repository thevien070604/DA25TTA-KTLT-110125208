#include<stdio.h>

int main()
{
	int a, b;
	int tong, hieu, tich;
	float thuong;
	
	printf("Nhap vao so nguyen a=");
	scanf("%d", &a);
	printf("Nhap vao so nguyen b=");
	scanf("%d", &b);
	
	printf("\nGia tri a= %d", a);
	printf("\nGia tri b= %d", b);
	
	//Tinh tong
	tong=a+b;
	printf("\nTong a+b = %d", tong);
	
	//Tinh hieu
	hieu=a-b;
	printf("\nHieu a-b =%d", hieu);
	
	//Tinh tich
	tich=a*b;
	printf("\nTich a*b =%d", tich);
	
	//Tinh thuong
	thuong=1.0*a/b;
	printf("\nThuong a/b =%5.2f", thuong);
	
	return 0;
}

