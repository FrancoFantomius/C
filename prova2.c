#include <stdio.h>
#include <stdin.h>

int mia(void){
	int ciao;
	printf("Scegli un numero: ");
	scanf("%d",&ciao);
	printf("Ecco il numero da te scelto: %d", ciao);
}
/* #include <stdio.h>


main(){
	int ch, i = 0;
	printf("%d %d \n",ch,i);
	while((ch = getchar()) != EOF) i++;
		printf("%d \n", i);
} */