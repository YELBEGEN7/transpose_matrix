#include <stdio.h>
#include <locale.h>
#include <string.h>



int main(void) {
	string language="Turkish"
    int row=8;
    int column=8;
    setlocale(LC_ALL, language); 
	char matris[row][column];
	char matrisT[row][column];
	int i,j;
	printf("text =");
	gets(matris);
	for(i=0; i<row; i++){
        for(j=0; j<column; j++){
            matrisT[j][i] = matris[i][j];
        }
    }
     for(i=0; i<row; i++){
        for(j=0; j<column; j++){
            printf("%c ", matrisT[i][j]);
        }
    }

	return 0;
}