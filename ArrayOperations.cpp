#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int sum = 0;

    cout << "Enter 5 numbers:\n";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    float average = sum / 5.0;

    cout << "Largest number = " << max << endl;
    cout << "Smallest number = " << min << endl;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average;

    return 0;
}