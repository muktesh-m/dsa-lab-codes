/* This program is for evaluation of postfix expression
 * This program assume that there are only four operators
 * (*, /, +, -) in an expression and operand is single digit only
 * Further this program does not do any error handling e.g.
 * it does not check that entered postfix expression is valid
 * or not.
 * */

#include <stdio.h>
#include <ctype.h>

#define MAXSTACK 100
#define POSTFIXSIZE 100

int stack[MAXSTACK];
int top = -1;

/* define push operation */
void push(int item)
{

    if (top >= MAXSTACK - 1)
    {
        printf("stack over flow");
        return;
    }
    else
    {
        top = top + 1;
        stack[top] = item;
    }
}

/* define pop operation */
int pop()
{
    int item;
    if (top < 0)
    {
        printf("stack under flow");
    }
    else
    {
        item = stack[top];
        top = top - 1;
        return item;
    }
}

/* define function that is used to input postfix expression and to evaluate it */
void EvalPostfix(char postfix[])
{

    int i;
    char ch;
    int val;
    int A, B;

    /* evaluate postfix expression */
    for (i = 0; postfix[i] != ')'; i++)
    {
        ch = postfix[i];
        if (isdigit(ch))
        {

            push(ch - '0');
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {

            A = pop();
            B = pop();

            switch (ch) /* ch is an operator */
            {
            case '*':
                val = B * A;
                break;

            case '/':
                val = B / A;
                break;

            case '+':
                val = B + A;
                break;

            case '-':
                val = B - A;
                break;
            }

            push(val);
        }
    }
    printf(" \n Result of expression evaluation : %d \n", pop());
}

int main()
{

    int i;

    char postfix[POSTFIXSIZE];

    printf(" \nEnter postfix expression,\npress right parenthesis ')' for end expression : ");

    /* take input of postfix expression from user */

    for (i = 0; i <= POSTFIXSIZE - 1; i++)
    {
        scanf("%c", &postfix[i]);

        if (postfix[i] == ')') /* is there any way to eliminate this if */
        {
            break;
        } /* and break statement */
    }

    /* call function to evaluate postfix expression */

    EvalPostfix(postfix);

    return 0;
}
