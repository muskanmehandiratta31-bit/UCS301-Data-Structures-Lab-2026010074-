#include<iostream>
using namespace std;

int stack[100];
int top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

int main()
{
    string exp;

    cout << "Enter Postfix Expression: ";
    cin >> exp;

    for(int i = 0; i < exp.length(); i++)
    {
        char x = exp[i];

        if(isdigit(x))
        {
            push(x - '0');
        }

        else
        {
            int b = pop();
            int a = pop();

            if(x == '+')
                push(a + b);

            else if(x == '-')
                push(a - b);

            else if(x == '*')
                push(a * b);

            else if(x == '/')
                push(a / b);
        }
    }

    cout << "Result = " << pop();

    return 0;
}