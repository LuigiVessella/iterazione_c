#include<stdio.h>

int main(){
	int riga, colo, num, numb=0, esp=128, es=16, ott, i=0;//tutte le variabili usate

	printf("%5s%4s%4s%3s\n", "Dec:", "Bin:", "Hex:", "Oct:");
	for(riga=0; riga<=255; riga++){
		for(colo=0; colo<1; colo++){
			esp=128;
			num=riga;
			printf("num:%3d    ", num);
			//binario
			while(esp>=1){
				if(num-esp>=0){
					num=num-esp;
					printf("1");
				}
				else
					printf("0");

				esp=esp/2;

			}
			num=riga;
			printf("    ");
			//esadecimale
			printf("%X", num/16);       
		     	printf("%X", num-(16*(num/16)));
			printf("    ");
	
			ott=64;
			//ottale
			int numott=0;
			for(i=3; i>0; i--){
				numott=num/ott;
				num=num%ott;
				printf("%d", numott);
				ott=ott/8;
			}
			num=riga;
			
			printf("\n");
		}
	}

	return 0;
}
