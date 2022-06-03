#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float nghihoc;
	int lythuyet;
	int thuchanh;
	int btl;
	
	printf("Nhap thoi gian nghi hoc ");
	scanf("%f", &nghihoc);
	
	/* mon hoc co 10 buoi */
	
	if(nghihoc <=2.5){
	
	printf("%f duoc thi\n",nghihoc);
		printf("Nhap diem ly thuyet ");
		scanf("%d", &lythuyet);
			if(lythuyet>=(20*0.4)){
			printf("vuot qua mon ly thuyet\n",lythuyet);
			}
			else
			printf("hoc lai ly thuyet\n",lythuyet);
		
		printf("Nhap diem thuc hanh ");
		scanf("%d", &thuchanh);
			if(thuchanh>=6){
				printf("vuot qua mon thuc hanh\n",thuchanh);
			}
			else
			printf("hoc lai thuc hanh\n",lythuyet);
		
		printf("Nhap diem bai tap lon ");
		scanf("%d", &btl);
			if(btl>=4){
			printf("vuot qua mon bai tap lon\n",btl);	
			}
			else
			printf("hoc lai mon bai tap lon\n",btl);
	}
	else
		printf("Khong duoc thi");	
			
	return 0;
}
