#include <stdio.h>
int main(){
	int a,b;
	printf("---------------打印99乘法表---------------\n");
	for (a=1;a<=9;a++){
			for(b=1;b<=a;b++){
				printf("%dx%d=%d\t",a,b,a*b);
}	
	printf("\n");
}
	return 0;
}
