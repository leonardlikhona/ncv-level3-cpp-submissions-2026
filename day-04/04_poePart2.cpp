#include <iostream>
#include <random>

using namespace std;

void getTwoNumbers(int x, int y){

cout << "Enter the first number: " ;
cin>>x;

cout << "Enter the second number: ";
cin>>y;
}

int calcSum(int x, int y){
int sum;

return x + y;

}

int calcDiff(int x, int y){

return x-y;

}

int calcProd(int x, int y){
return x*y;

}

int calcDiv(int x, int y){
return x/y;
}

int main(){

int m = 0;
int n = 0;
int answer = 0.0;

random_device rd;

    mt19937 gen(rd());

    uniform_int_distribution<int> distrib(1, 50);

    int num1 = distrib(gen);
    int num2 = distrib(gen);

char opr = "";
int ans = 0;
switch (opr) {
  case '+':
    ans = calcSum(a,b);
    cout << "The sum is: " <<ans;
    break;
  case '-':
    ans = calcDiff(a,b);
    cout << "The Difference is: " << ans;
    break;
  case 3:
    ans = caclProd(a,b);
    cout << "The Product of Tow numbers is: " <<ans;
    break;
  case 4:
    ans = calcDiv(a,b);
    cout << "The division of two numbers is: " <<ans;;
    break;
  default: "Invalid Operator"
}

getTwoNumbers(m, n);
answer = calcSum(m, n);
answer = calcDiff(m,n);
answer = calcProd(m,n);
answer = calcDiv(m,n);
return 0;

}
