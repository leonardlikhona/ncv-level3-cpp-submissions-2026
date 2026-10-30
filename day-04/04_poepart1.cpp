#include <iostream>

using namespace std;

void getTwoNumbers(double &num1, double num2){

cout << "Enter the first number: " ;
cin>>num1;

cout << "Enter the second number: ";
cin>>num2;
}

double calcSum(double a, double b){
int sum;

return a + b;

}

double calcDiff(double c, double d){

return c-d;

}

double calcProd(double e, double f){
return e*f;

}

double calcDiv(double g, double f){
return g/f;
}

int main(){

double a = 0.0;
double b = 0.0;
double answer = 0.0;

getTwoNumbers(a, b);
answer = calcSum(a, b);
answer = calcDiff(a,b);
answer = calcProd(a,b);
answer = calcDiv(a,b);
return 0;

}
