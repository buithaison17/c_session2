#include<stdio.h>

int main(){
	const float PI = 3.14;
	int banKinh = 3;
	float chuVi = 2 * PI * banKinh;
	float dienTich = PI * banKinh * banKinh;
	printf("ban kinh cua hinh tron la: %d \n", banKinh);
	printf("chu vi cua hinh tron la: %.2f \n", chuVi);
	printf("dien tich cua hinh tron la: %.2f \n", dienTich);
	return 0;
}
