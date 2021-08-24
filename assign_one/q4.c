#include<stdio.h>


void interchange(int* a,int* b){

  int c = *b;
  *b = *a;
  *a = c; 
}
int main(){

  int arr[20];
  for(int i=0;i<20;i++){
  scanf("%d",&arr[i]);
  }
  
  for(int i=0;i<20;i++){
   for(int j=1;j<20-i;j++){
      if(arr[j-1]>arr[j]){
        interchange(&arr[j-1],&arr[j]);
      }
       
   
     
}}
  for(int i = 0;i<20;i++){
    printf("%d ",arr[i]);
   }
   printf("\n");
    
 

  return 0;
 }
