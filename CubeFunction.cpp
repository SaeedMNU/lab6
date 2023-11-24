#include <iostream>
using namespace std;

long cube_of_num(long num) {
  long cubed;
  cubed = num * num * num;
  return cubed;
}

int main ()
{
  long x;
  cout << "Enter a number to find the cube: ";
  cin >> x;
  
  cout << cube_of_num(x);
  
}

