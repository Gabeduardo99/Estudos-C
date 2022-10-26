#include <stdio.h>
#include <stdlib.h>

int main() {

    int varn, varm, num,i;

        printf("Digite um valor n: ");
        scanf("%d", &varn);
        
        printf("Digite um valor m: ");
        scanf("%d", &varm);
          
		num = varn;
		
	if (varn>varm) {
		printf ("Digite um valor N menor do que M");
		}
	      
    while(num<=varm){
    	
    while(i<=10) {
    		
    	 printf("%d * %d = %d\n", num, i, num * i);
			i=i+1;
		}
			
		i = 0;
    	num = num + 1; 
    	printf ("\n");
    	
	}
}


