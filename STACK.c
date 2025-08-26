#include <stdio.h>
#define MAX 100
struct STACK{
    int arr[MAX];
    int top;
};
typedef struct STACK Stack;
void initStack(Stack *s){
    s->top=-1;
}
int isFull(Stack *s){
    if(s->top==MAX-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(Stack *s){
    if(s->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(Stack *s,int value){
    if(isFull(s)){
        printf("\nOverflow");
    }
    else{
        s->arr[++(s->top)]=value;
    }
}
int pop(Stack *s){
    int x;
    if(isEmpty(s)){
        printf("\nUnder flow");
        return -1;
    }
    else{
        x=s->arr[s->top];
        s->top--;
        return x;
    }
}
int peek(Stack *s){
    int d;
    if(isEmpty(s)){
        printf("\nNo top value");
        return -1;
    }
    else{
        d=s->top;
        return s->arr[d];
    }
}
void display(Stack *s){
    if(isEmpty(s)){
        printf("\nStack is empty.");
    }
    else{
        printf("\nStack Elements are: ");
        for(int i=s->top;i>=0;i--){
            printf(" %d ",s->arr[i]);
        }
        printf("\n");
    }
}
int main(){
    int x,d;
    Stack stack;
    initStack(&stack);
    push(&stack,10);
    push(&stack,20);
    push(&stack,30);
    push(&stack,40);
    push(&stack,50);
    push(&stack,60);
    display(&stack);
    x=pop(&stack);
    printf("\nElemnet popped: %d",x);
    display(&stack);
    printf("\nTop of the stack is : %d ",peek(&stack));
    return 0;
}