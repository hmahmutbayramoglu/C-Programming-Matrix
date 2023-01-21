#include <stdio.h>
#include <stdlib.h>

 
int main(int argc, char *argv[]) {
	
	
	
		int array4[10]={1,2,3,4,5,6,7,8,9};
		
		int array5[7]={11,12,13,14};
			
			int a;
			
			for(a=0; a<5; a++){
			array5[2+a] = array4[3+a];
				printf("%d \n",array5[a]);
			}
	
	
	printf("\n");

	
	int matris1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int matris2[3][3] = {{10,11,12},{13,14,15},{16,17,18}};
	int matris3[3][3] = {{},{},{}};
	int matris3Transpoz[3][3] = {{},{},{}};

	int i,j;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			
			//1. matrisin elemanlarının karesinin alınması
			matris1[i][j] = (matris1[i][j]*matris1[i][j]);
			
			//2. matrisin elemanlarının iki katının alınması
			matris2[i][j] = (matris2[i][j]*2);
			
			//3. matrisin elemanları 1. matris ve 2. matrisin çarpımının yapılması
			matris3[i][j] = (matris1[i][j]*matris2[i][j]);
		}
	}
	
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			
				//3. matrisin transpozunun alınması
			matris3Transpoz[j][i] =matris3[i][j];
		}
	}
 
 	printf("--- 1. matrisin karesi alinmis hali ---\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			//1. matrisin karesi
		printf("%d \t",matris1[i][j]);
		}
		printf("\n");
	}
	
	printf("--- 2. matrisin iki kati alinmis hali ---\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			//1. matrisin karesi
		printf("%d \t",matris1[i][j]);
		}
		printf("\n");
	}
	
	printf("--- 3. matrisin 1. ve 2. matrisin carpimi ---\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			//1. matrisin karesi
		printf("%d \t",matris3[i][j]);
		}
		printf("\n");
	}

	

	printf("--- 3. matrisin transpozu ---\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			//3. matrisin transpozu 
			printf("%d \t", matris3Transpoz[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	return 0;
}
