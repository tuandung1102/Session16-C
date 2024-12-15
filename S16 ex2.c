#include <stdio.h>
void swap(int *input1, int *input2){
	int temp=*input1;
	*input1=*input2;
	*input2=temp;
}
int main(){
	int x=10;
	int y=20;
	printf("Bien x ban dau: %d\n",x);
	printf("Bien y ban dau: %d\n",y);
	swap(&x,&y);
	printf("Bien x sau khi doi cho: %d\n",x);
	printf("Bien y sau khi doi cho: %d\n",y);
	return 0;
	
}

