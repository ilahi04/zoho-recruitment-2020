#include <stdio.h>

int main() {
    int i,j,k,rows;
    int l=1;
    printf("enter the value of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows; ++i){
        for(j=rows-1;j>=i;--j){
            printf(" ");
        }
        for(k=1;k<=i;++k){
            printf("%d",l++);
        }
        printf("\n");
    }
    
    return 0;
}
