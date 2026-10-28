#include <iostream>
#include <string>

using namespace std;

int main(){

string gender = " ";
cout << "input your Gender Code (M = Male and F = Female" <<endl;
cin>>gender;

if(gender == "f" || gender == "F"){
    cout <<"You are a FEMALE" <<endl;
}else
if(gender == "m" || gender == "M"){
    cout<<"You are a MALE" << endl;
}else
    cout<<"InVALID code!" << endl;

    return 0;
    }


