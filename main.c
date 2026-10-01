#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
# define SIZE 20
struct stack
{
    int top;
    char data[SIZE];
};
typedef struct stack stack;
void push(STACK *s, char item)
{
    s->data[++(s->top)=item;
}
char pop(STACK *s)
{
    return s->data[(s->top)--];
}
int precedence(char symbol)
{
    switch(Symbol)
    {
    case '^':
        return 5;
    case '*':
        return 3;
    case '/':
        return 3;
    case '+':
        return 1;
    case '-':
        return 1;
    }
}
void infixtopostfix(STACK *s, char infix[20])
{
    int 1=0,j=0;
    char symbol,postfix[20],temp;
    for(i=0;infix[i]!=0;i++){
        symbol=infix[i];
        if(isalnum(symbol))
            postfix[j++]=symbol;
        else{
            switch(symbol)
            {
            case '(':
                push(&s,symbol);
                break;
            case ')':
                temp=pop(&s);
                while(temp!='c')
                {
                    postfix[j++]=temp;
                    temp=pop(&s);
                }
                break;
            case '+':
                if(s->top==-1 ::s->data[s->top]=='c' )
                    push(&s,symbol);
                else{
                    while(precendence)
                }
            }
        }
    }
}
