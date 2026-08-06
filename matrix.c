#include<stdio.h>
void main(){
    int a[10][10],b[10][10],c[10][10],i,j,m,n;
    printf("enter matrix size: \n");
    scanf("%d %d",&m,&n);
    printf("enter first matrix: \n");
    for(i=0;i<m;i++){
        for(i=0;j<n;j++){
            scanf("%d",&a[i][j]);
            
        }
        printf("\n");
    }
    printf("enter second matrix: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("\n the addition of matrix: \n");
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
          c[i][j]=a[i][j]+b[i][j];
          printf("%d",c[i][j]);
    }
      printf("\n");
}
printf("\n the subtraction of matrix is: \n");
for(i=0;i<m;i++){
for(j=0;j<n;j++){
c[i][j]=a[i][j]+b[i][j];
printf("%d ",c[i][j]);
}
printf("\n");
}
}
