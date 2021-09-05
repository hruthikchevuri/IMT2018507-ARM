#include<stdio.h>
#define queue_size 5

int queue[queue_size];
int begin = -1;
int end = -1;
  
void add_to_queue(int);
void remove_from_queue();
void print();
int main(){

 add_to_queue(10);
 add_to_queue(20);
 add_to_queue(30);
 add_to_queue(40);
  print();
 remove_from_queue();
 remove_from_queue();
  print();
  add_to_queue(50); add_to_queue(60); add_to_queue(70); add_to_queue(80);
 print();
 printf("begin value:%d, end value:%d\n",begin,end);
 
 //for(int i=0;i<5;i++){
 //printf("%d ",queue[i]);}
return 0;
}



void add_to_queue(int data){
    if((end+1) == begin){
       printf("queue is full. can't add new elements\n");
       }

   else if(begin == -1 && end == -1)  
    {  
        begin = 0;  
        end = 0;  
        queue[end] = data;  
        printf("%d is added to the queue\n",data);  
      
    }  
    else   
    {  
        end = (end+1)%queue_size;  
        queue[end] = data;  
        printf("%d is added to the queue\n",data);  
      
    }  
    
 }
 
void print(){
printf("printing the circular queue\n");
printf(" begin\n");

if(begin <end){
  for(int i = begin;i<=end;i++){
     printf("| %d |\n",queue[i]);}
 }
if(begin >=end){
for(int i = begin;i<queue_size;i++){
     printf("| %d |\n",queue[i]);}
 
 for(int i = 0;i<=end;i++){
     printf("| %d |\n",queue[i]);}
     }
 
 
    printf(" end\n");
  }
  
void remove_from_queue(){
if(begin == -1 && end == -1){
  printf("queue is empty. can't remove\n");
  }
  else if(begin == end){
    printf("%d removed from queue\n",queue[begin]);
    begin  = -1;
    end = -1;
  }
  else{
   printf("%d removed from queue\n",queue[begin]);

   begin = (begin+1)%queue_size;
   }
 }
  


