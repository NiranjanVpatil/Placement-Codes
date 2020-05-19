
#include <iostream>
using namespace std;
class stack
{
public:
        int p[100];
        int top;
        void push(int item);
        int pop();
        stack()
        {
                top=-1;
        }
};
void stack::push(int item)
{
        if(top==99)
                cout<<"you cannot insert anything in this stack\n";
        else
        {
                top++;
                p[top]=item;
        }
}
int stack::pop()
{
        if(top==-1)
        {
                cout<<"The stack is empty there is nothing to delete\n";
                return 0;
        }
        else
        {
                int d=p[top];
                top--;
                return d;
        }
}
int perform(int a,int b,char per)
{
        switch(per)
        {
        case '+': return a+b;
                                break;
        case '-': return a-b;
                                break;
        case '*': return a*b;
                                break;
        case '/': return a/b;
                                break;
        }return 0;
}
int postfix(char *post)
{
        stack s;
        int p,q,result,num;
        while(*post)
        {
                if(*post==' ')
                {
                        *post++;
                        continue;
                }
                else
                {
                        int temp = 0;
						if(isdigit(*post))
                        {
								while(isdigit(*post))
                                {
                                        num=*post-'0';
                                        temp = 10*temp + num;                            
                                        *post++;

                                }
                                s.push(temp);

                        }
                        else
                        {
                                p=s.pop();
                                q=s.pop();
                                result=perform(q,p,*post);
                                s.push(result);
                        }
                }*post++;
        }
    int final=s.pop();
        return final;
}




int main() {
        char equation[100];int solution;
        cout<<"Enter the equation that is to be evaluated in the post fix form\n";
        cin.getline(equation,100);
        solution=postfix(equation);
        cout<<"The final solution is as follows:\n";
        cout<<solution;

        return 0;
}


