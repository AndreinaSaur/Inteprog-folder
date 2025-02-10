#include <iostream>
using namespace std;

int main ()
{
    int number1, number2, operation, answer=0;

cout<<"Enter first number: ";
cin>>number1;
cout<<"Enter second number: ";
cin>>number2;
cout<<"Enter your chosen operation: 1-addition 2-subtraction 3-multiplication 4-division: ";
cin>>operation;

switch (operation)
{
case 1:
answer = number1 + number2;
 break;

case 2:
 answer = number1 - number2;
 break;

case 3:
 answer = number1 / number2;
 break;

case 4:
answer = number1 * number2;
break;
}
{
    cout<<"The answer is: "<<answer;
}
return 0;
}