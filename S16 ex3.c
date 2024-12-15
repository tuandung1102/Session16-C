#include <stdio.h>
void sum(int *x,int *y,int *result){
	*result=*x+*y;
}
int main(){
	int x=1102;
	int y=2006;
	int result;
	sum(&x,&y,&result);
	printf("Tong cua 2 so nguyen la: %d\n",result);
	return 0;
}
