#include<stdio.h>
#include<stdlib.h>

int main(){
	int dizi[7][7], tut[7], i, j, k, temp;
	
	for(i=0; i<7; i++){
		for(j=0; j<7; j++){
			dizi[i][j]=rand()%10;
		}
	}
	
	printf("Sirasiz Dizi:\n");
	for(i=0; i<7; i++){
		for(j=0; j<7; j++){
			printf("%d ",dizi[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<7; i++) {
		for(j=0; j<7;j++) {
			tut[j]=dizi[i][j];
		}
		
		if(i%2==0) {
			for(k=0; k<7; k++) {
				for(j=0; j<7;j++){
					if(tut[j]>tut[j+1]) {
						temp=tut[j];
						tut[j]=tut[j+1];
						tut[j+1]=temp;
					}
				}
			}
		} else {
			for(k=0; k<7; k++) {
				for(j=0; j<7;j++){
					if(tut[j]<tut[j+1]) {
						temp=tut[j];
						tut[j]=tut[j+1];
						tut[j+1]=temp;
					}
				}
			}
		}
		
		for(j=0; j<7; j++){
			dizi[i][j]=tut[j];
		}
	}
	
	printf("\nSirali Dizi:\n");
	for(i=0; i<7; i++){
		for(j=0; j<7; j++){
			printf("%d ",dizi[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
