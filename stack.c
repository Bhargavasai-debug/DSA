#include <stdio.h>
#include <ctype.h>

char stack[50];
int top = -1;

int priority(char c)
{
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;
}

int main()
{
    char infix[50], postfix[50], c;
    int i, j = 0;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    for (i = 0; infix[i] != '\0'; i++)
    {
        c = infix[i];

        if (isalnum(c))
            postfix[j++] = c;

        else if (c == '(')
            stack[++top] = c;

        else if (c == ')')
        {
            while (stack[top] != '(')
                postfix[j++] = stack[top--];
            top--;
        }

        else
        {
            while (top != -1 && priority(stack[top]) >= priority(c))
                postfix[j++] = stack[top--];

            stack[++top] = c;
        }
    }

    while (top != -1)
        postfix[j++] = stack[top--];

    postfix[j] = '\0';

    printf("Postfix expression: %s", postfix);

    return 0;
}