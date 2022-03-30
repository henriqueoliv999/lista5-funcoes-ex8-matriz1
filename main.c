#include <stdio.h>

void transposta(double mat1[30][30], double matRes[30][30], int n);

int main(void) {
  int n;
	printf("Dimensão das matrizes (max. 30): ");
	scanf("%d", &n);
	double mat1[n][n];
	double matRes[n][n];
	transposta(mat1, matRes, n);
}

void transposta(double mat1[30][30], double matRes[30][30], int n){
	int i, j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("linha:%d coluna:%d Valor:", i+1, j+1);
			scanf("%lf", &mat1[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			matRes[i][j] = mat1[j][i];
		}
	}
	for(i=0;i<n;i++){
		printf("\n");
		for(j=0;j<n;j++){
			printf("%lf\t", mat1[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<n;i++){
		printf("\n");
		for(j=0;j<n;j++){
			printf("%lf\t", matRes[i][j]);
		}
	}
}