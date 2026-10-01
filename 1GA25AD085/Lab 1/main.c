#include <stdio.h>
#include <stdlib.h>
# define SIZE 5
struct stack
{
     int top;
     int data[SIZE];
};
typedef struct stack STACK;
void push(STACK *s,int item)
{
   if(s->top==SIZE-1)
    printf("\n stack overflow");
   else{
    s->top=s->top+1;
    s->data[s->top]=item;
   }
}
void pop(STACK *s){
         if(s->top==-1)
            printf("\n stack underflow");
         else{
            printf("\n the element poped is %i",s->data[s->top]);
            s->top=s->top-1;
         }
         }
void display(STACK s){
int i;
if(s.top==-1)
    printf("\n the stack is empty");
else{
    printf("\n stack contents are \n");
    for(i=s.top;i>=0;i--)
        printf("\n %i",s.data[i]);
}
}
int main()
{

    int ch,item;
    STACK s;
    s.top=-1;
    for(;;)
    {
        printf("\n 1.push\n");
        printf("\n 2.pop\n");
        printf("\n 3.display\n");
        printf("\n 4.exit\n");
        scanf("%i",&ch);
        switch(ch)
        {
        case 1:
            printf("read element to be pushed:");
            scanf("%i",&item);
            push(&s,item);
            break;
        case 2:
            pop(&s);
            break;
        case 3:
            display(s);
            break;
        default:
            exit(0);

        }
    }
   return 0;
}
