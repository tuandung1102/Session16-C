#include <stdio.h>
int main(){
	int u=5;
	int *Ptr=&u;
	printf("Dia chi cua u = %d\n",&u);
	printf("Dia chi cua u = %d\n",Ptr);
	printf("Gia tri cua u = %d\n",*Ptr);
	printf("Gia tri cua u = %d\n",u);
	return 0;
}
