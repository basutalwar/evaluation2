#include <stdio.h>
int main(){
	int a,b;
	char op;
	printf("Enter a and b: \n");
	scanf("%d %d", &a, &b);
	printf("Enter operand");
	scanf("%c", &op);
	switch (op){
		case'+';
			printf("%d + %d = %d",a,b,a+b);
			break;
		case'-';
			printf("%d - %d = %d",a,b,a-b);
			break;
		case'*';
			printf("%d * %d = %d",a,b,a*b);
			break;
		case'/';
			printf("%d / %d = %d",a,b,a/b);
			break;
	}
	return 0;
}
