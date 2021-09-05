#include<stdio.h>
#define queue_size 5

int queue[queue_size];
int* queue_start = queue;
int* begin = &queue[0]-1;
int* end = &queue[0]-1;
  
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
 add_to_queue(50);
 add_to_queue(60);
  print();
 
 
return 0;
}




void add_to_queue(int data){
    if(end == queue_start+queue_size-1){
       printf("queue is full. can't add new elements\n");
       }

   else if(begin == &queue[0]-1 && end == &queue[0]-1)  
    {  
        begin = queue;  
        end = queue;  
        *end = data;  
        printf("%d is added to the queue\n",data);  
      
    }  
    else   
    {  
        end++;  
        *end = data;  
        printf("%d is added to the queue\n",data);  
      
    }  
    
 }
 
void print(){
 
printf("printing the queue\n");
printf(" begin\n");
    if(end == &queue[0]-1){
      printf("|   |\n");
      }
      for(int* i = begin;i<=end;i++){
      
      printf("| %d |\n",*i);
      }
      
      printf(" end\n");
  }
  

void remove_from_queue(){
 if(begin == &queue[0]-1 || begin > end){
  printf("queue is empty. can't remove\n");
  }
  else{
   printf("%d removed from queue\n",*begin);
   begin++;
   }
}

