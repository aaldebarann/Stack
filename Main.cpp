
#include <iostream>
#include "Stack.h"

int main()
{
  Stack<int> stack;
  cout << "New stack is empty: " << stack.empty() << endl;
  stack.push(5);
  stack.push(4);
  stack.push(3);
  cout << "Now stack is empty: " << stack.empty() << endl;
  cout << stack.top() << endl;
  stack.pop();
  cout << stack.top() << endl;
  stack.pop();
  cout << stack.top() << endl;
  stack.pop();

  double arr[] = { 0.92, 1.1, 4.4, 6.6, 7.8 };
  Stack<double> sd(5, arr);
  Stack<double> sd_copy(sd);
  while (!sd_copy.empty()) {
    cout << sd_copy.top() << endl;
    sd_copy.pop();
  }
}