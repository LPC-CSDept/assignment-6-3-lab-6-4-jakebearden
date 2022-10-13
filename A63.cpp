//lab 6-4

#include <iostream>
using namespace std;

int getsum(int n);
int findmin(int n);
int findmax(int n);

void printsum(int sum);

int main()
{
    int number, amount, n, sum;

    sum = getsum (n);
    cout << sum << endl;
}

int getsum(int n)
{
    int amount, number, i,sum;
    cout << "enter number of inputs" << endl;
    cin >> n;
    cout << "Enter all " << n << " numbers" << endl;
    sum = 0;
    for (i = 0; i < n; i++)
    {
        cin >> number;
        sum +=number;

    }
    return sum;
}
