#include <iostream>
using namespace std;
void countNumbers(int arr[], int &positive, int &negative, int &zero)
{
    positive = negative = zero = 0;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }
}
int positiveSum(int arr[])
{
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > 0)
            sum += arr[i];
    }

    return sum;
}
int negativeSum(int arr[])
{
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < 0)
            sum += arr[i];
    }

    return sum;
}
double average(int arr[])
{
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
 return sum / 5.0;
}
void display(int positive, int negative, int zero,
             int posSum, int negSum, double avg)
{
    cout << "\nPositive numbers: " << positive << endl;
    cout << "Negative numbers: " << negative << endl;
    cout << "Zero values: " << zero << endl;
    cout << "Sum of positive numbers: " << posSum << endl;
    cout << "Sum of negative numbers: " << negSum << endl;
    cout << "Average: " << avg << endl;
}

int main()
{
    int numbers[5];

    cout << "Enter 5 integer numbers:\n";

    for (int i = 0; i < 5; i++)
    {
        cin >> numbers[i];
    }

    int positive, negative, zero;

    countNumbers(numbers, positive, negative, zero);

    int posSum = positiveSum(numbers);
    int negSum = negativeSum(numbers);
    double avg = average(numbers);

    display(positive, negative, zero, posSum, negSum, avg);

    return 0;
}