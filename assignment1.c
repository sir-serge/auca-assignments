#include<stdio.h>
int main(){
    /*
    expected output



    */
int n=5;
for(int i=0;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf("%d",j);
    }
    printf("\n");
}
printf("\n");
    /*
    expected output



    */
int v=5;
for(int i=1;i<=v;i++){
    for(int j=i;j<=5;j++){
        printf("%d",j);
    }
    printf("\n");
}
printf("\n");
    /*
    expected output



    */
int z=0;
for(int i=5;i>=z;i--){
    for(int j=i;j<=j;j--){
        printf("%d",j);
    }
    printf("\n");
}
printf("\n");
    /*
    expected output

    54321
    5432
    543
    54
    5

    */
   int k=5;
for(int i=1;i<=k;i++){
    for(int j=5;j>=i;j--){
        printf("%d",j);
    }
    printf("\n");
}
printf("\n");

    return 0;

}
