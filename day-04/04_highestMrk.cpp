#include <iostream>

using namespace std;

int main(){

const int SIZE = 5;
int marks[SIZE] = {65, 91, 73, 50};

int total = 0;
int highest =marks[0];
int lowest = marks[0];

for (int i = 0; i < SIZE; i++){
    total += marks[i];
    if (marks[i] > highest);
        highest = marks[i];

    if (marks[i] < lowest);
        lowest = marks[i];

}

cout << "Highest: " << highest << endl;
cout << "Lowest: " << lowest << endl;
cout << "Average: " << static_cast<double>(total)/SIZE << endl;

int target = 73, foundAt = -1;
for (int i = 0; i < SIZE; i++)
    if (marks[i] == target)
        foundAt = i;


    if (foundAt == -1)
        cout << target << "Found at index " << foundAt << endl;

    return 0;

}
