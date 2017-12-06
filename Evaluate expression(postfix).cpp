#include<bits/stdc++.h>
#include <iostream>
#include <stack>
#include <string>
using namespace std;
char faf[100];
int fa=0;
int eval(int op1, int op2, char operate) {
   switch (operate) {
      case '*': return op2 * op1;
      case '/': return op2 / op1;
      case '+': return op2 + op1;
      case '-': return op2 - op1;
      default : return 0;
   }
}
int evalPostfix(char postfix[], int size) {
   stack<int> s;
   int i = 0;
   char ch;
   int val;
   while (i < size) {
      ch = postfix[i];
      if (isdigit(ch)) {
         s.push(ch-'0');
      }
      else {
         int op1 = s.top();
         s.pop();
         int op2 = s.top();
         s.pop();
         val = eval(op1, op2, ch);
         s.push(val);
      }
      i++;
   }
   return val;
}

bool isOperator(char character) {
    if (character == '+' || character == '-' || character == '*' || character == '/') {
        return true;
    }
    return false;
}



bool isOperand(char character) {
    if (!isOperator(character) && character != '(' && character != ')') {
        return true;
    }
    return false;
}



int compareOperators(char op1, char op2) {
    if ((op1 == '*' || op1 == '/') && (op2 == '+' || op2 == '-')) { return -1; }
    else if ((op1 == '+' || op1 == '-') && (op2 == '*' || op2 == '/')) { return 1; }
    return 0;
}


int main()
{

    stack<char> opStack;
    string postFixString = "";

    char input[100];


    cout << "Enter an expression: ";
    cin >> input;


    char *cPtr = input;


    while (*cPtr != '\0') {

        if (isOperand(*cPtr)) { postFixString += *cPtr; }
        else if (isOperator(*cPtr)) {
            while (!opStack.empty() && opStack.top() != '(' && compareOperators(opStack.top(),*cPtr) <= 0) {
                postFixString += opStack.top();
                opStack.pop();
            }
            opStack.push(*cPtr);
        }

        else if (*cPtr == '(') { opStack.push(*cPtr); }
        else if (*cPtr == ')') {
            while (!opStack.empty()) {
                if (opStack.top() == '(') { opStack.pop(); break; }
                postFixString += opStack.top();
                opStack.pop();
            }
        }


        cPtr++;
    }

    while (!opStack.empty()) {
        postFixString += opStack.top();
        opStack.pop();
    }



   for(int i=0;postFixString[i]!='\0';++i){
    faf[fa++]=postFixString[i];
   }
   for(int i=0;i<fa;++i){
    printf("%c",faf[i]);
   }


   int size = strlen(faf);
   int val = evalPostfix(faf, size);
   cout<<"\nExpression evaluates to "<<val;
   cout<<endl;
   return 0;
}
