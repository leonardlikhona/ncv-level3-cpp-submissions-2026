#include <iostream>

using namespace std;

int main(){

char gName;
string description = " ";
cout << "Enter your Gender (f for Female, m for Male)" << endl;
cin>>gName;

switch (gName){

case 'f':;

cout<< "Female Gender"<<endl;
break;

case 'm':;
cout<< "Male Gender"<<endl;
break;

default:
cout<<"Invalid Name!" <<endl;
    }

}
