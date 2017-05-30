#include<stdio.h>

int main(){
	int i;
	int num=0;
        printf("a)\n"); 
	for(i=0; i<10; i++){
                num=i;
		while(num>=0){	
		    printf("*");
		    num--;
		}
                printf("\n");
	}
        num=0;
	printf("b)\n");
        for(i=10; i>0; i--){
		num=i;
		while(num>0){
			printf("*");
			num--;
		}
		printf("\n");
	}
        for(i=10; i>0; i--){
		num=i;
		while(num>0){
			printf(" ");
			num--;
		}
		num=i;
                while(num>0){
			printf("*");
			num--;
		}
		printf("\n");
	}
	return 0;

}
