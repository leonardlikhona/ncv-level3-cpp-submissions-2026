#include <iostream>

using namespace std;

int main(){

int sum = 0;
int num;


for(int cnum = 1; cnum <= 5; cnum++){
cout << "Enter the number" << cnum << ":\t";
cin >> num;

sum = sum + num;
cout<< "The sum total is : " << sum << "\t" << endl;

}

return 0;
}
