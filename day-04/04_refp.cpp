#include <iostream>

using namespace std;

int main(){

int f1 (int x)
x = x + 5;
return x * 2;

}

void f2(int &x){

x = x + 5;}

void f3(int x) {

x = 100;}

int square (int n) {
return n * n;
}

int a = 3;
int b = f1;
cout << a <, " " << b; //1
int c = 3;
f2(c); cout << c;  //2
int d = 7;
f3(d);
cout << d; //3
cout << square (square(2)); //4
cout << square(3) + square(4); //5

