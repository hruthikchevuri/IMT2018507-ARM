#include<stdio.h>
#define stack_size 5

int* stack_pointer;
int* bottom;
int stack[stack_size];

void push(int);
void pop();
void print();


int main(){

printf("--------INITIALIZED A FULL ASCENDING STACK---------\n");

bottom = stack;

stack_pointer = &stack[0]-1;


push(10);
push(20);
printf("the stack pointer is pointing to top value in stack:-%p\n",stack_pointer);
push(30);
push(40);
push(50);
push(60);

print();

pop();
pop();
pop();
pop();

print();
return 0;
}

void push(int input){
  if(stack_pointer == bottom+stack_size-1){
    printf("stack is full. can't insert\n");
  }
  else{
    stack_pointer++;
    *stack_pointer = input; 
    printf("pushed %d to the stack at address %p\n",input,stack_pointer);
    
  }

}

void pop(){

 if(stack_pointer == bottom-1){
   printf("stack is empty. can't pop\n");
  }
 else{ 
 printf("deleted %d from top of the stack\n",*(stack_pointer));
 stack_pointer--;
 }
 

}


void print(){
printf("printing the stack here\n");

for(int* i =stack_pointer;i>=bottom;i--){
      printf(" |%d|\n",*i);
  }
  printf(" ‾‾‾‾\n");
}

