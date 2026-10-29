#include <stdio.h>

int main(){
	int n;
	printf("Digite um número: ");
	scanf("%d",&n);
	printf ("%s", (n%2==0) ? "Par": "Impar");
	
	return 0;
}