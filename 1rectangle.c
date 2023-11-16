// #include<stdio.h>
// int main(){
// int n;
// scanf("%d",&n);
// for(int i=n;i>0;i--){
// for(int j=1;j<=i;j++){
// printf("*");}printf("\n");}return 0;}
// #include<stdio.h>
// int main(){
// int N;
// scanf("%d",&N);
// int temp,a;
// temp=N;
// a=0;
// while(temp%2!=1){
// if(temp%2!=0){
// a=1;
// break;}temp=temp/2;
// }
// if(a==0)
// printf("divisible of two");
// else
// printf("cannot the power of 2");
// }
#include <stdio.h>
int main()
{
    int matrix[20][20]; // matrix_B[20][20], matrix_C[20][20];
    int i, j, r;
    scanf("%d", &r);
    // scanf("%d", &col);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
            // matrix_C[i][j] = matrix_A[i][j] - matrix_B[i][j];
            scanf("%d", &matrix[i][j]);
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
        {
            if (i < j)
                printf("0");
            else
                printf("%d", matrix[i][j]);
            // printf(" ");
        }
        printf("\n");
    }
    // printf("\nThe Subtraction Result is:\n");
    // for (i = 0; i < row; i++)
    // {
    //     for (j = 0; j < col; j++)
    //         printf("%d ", matrix_C[i][j]);printf("\n");  }
}