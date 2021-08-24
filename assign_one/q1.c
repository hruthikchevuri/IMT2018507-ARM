#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("Integer %d is largest among them\n",a);
        }
        else{
            printf("Integer %d is largest among them\n",c);
        }
    }
    else{
        if(b>c){
            printf("Integer %d is largest among them\n",b);
        }
        else{
            printf("Integer %d is largest among them\n",c);
          }
        }
        return 0;
    
}

