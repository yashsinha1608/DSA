#include<stdio.h>
void compare(int x,int y ){
    if(x>y){
        return printf("%d is greater ",x);
    }
        else{
        return printf("%d is greater ",y);
    }
    
}
int main(){
    int a,b;
    printf("enter 2 numbers");
    scanf("%d %d",&a,&b);
    compare(a,b);
}