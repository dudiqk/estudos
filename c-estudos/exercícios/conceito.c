#include <stdio.h>

int main(){
	float m;
	int faltas;
	
	printf("Digite a sua media: ");
	scanf("%f", &m);
	
	printf("Digite o numero de faltas: ");
	scanf("%d", &faltas);

	if (faltas > 5) {
		printf("\nConceito F");
	} else {
		if (m < 6)
	    	printf("\nConceito C");
		if  (6 <= m && m < 7.5)
	    	printf("\nConceito B");
		if  (7.5<= m && m <9)
    		printf("\nConceito A");
		if (m >= 9)
    		printf("\nConceito E");
	}

	return 0;
}