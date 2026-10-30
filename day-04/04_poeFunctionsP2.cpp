#include <iostream>
using namespace std;

int countEvenNumbers(int arr[], int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }

    return count;
}

#include <iostream>
using namespace std;

void displayOddNumbers(int arr[], int size)
{
    cout << "Odd numbers: ";

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << " ";
        }
    }
}

//Sort Values in ascending order

void sortAscending(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                // Swap the values
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Display the sorted Values in array

void displaySortedValues(int arr[], int size)
{
    cout << "Sorted values: ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}


int main()
{
    int numbers[] = {10, 15, 22, 7, 8, 13, 20};
    int size = 7;

    displayOddNumbers(numbers, size);

    return 0;
}

int main()
{
    int numbers[] = {10, 15, 22, 7, 8, 13, 20};
    int size = 7;

    int result = countEvenNumbers(numbers, size);

    cout << "Number of even numbers: " << result << endl;

    return 0;
}