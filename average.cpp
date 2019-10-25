#include<iostream>
using namespace std;
int main()
{
  float num1, num2, num3;
  float sum, average;

  cout << "Enter three Numbers:";
  cin >> num1 >> num2 >> num3;

  sum = num1 + num2 + num3;
  average = sum / 3;

  cout << "Sum = " << sum << " Average = " << average << endl;

  return 0;
}
