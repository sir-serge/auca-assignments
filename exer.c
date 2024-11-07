#include<stdio.h>
int main(){
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a%4==0 && a%100!=0){
    printf("%d",a);
    }
    else{
        printf("not leap year");

    }
    return 0;
}
