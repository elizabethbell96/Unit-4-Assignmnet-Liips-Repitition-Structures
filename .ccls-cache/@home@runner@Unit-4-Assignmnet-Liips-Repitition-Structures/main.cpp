#include <iostream>
using namespace std;

int main()

{
  double num; // declaring and initializing variable
  int counter = 0; //declaring and initializing counter 
  
do
  {
  cout << "\nPlease enter a number (-1 to exit): "; //prompting user to enter a number
  cin >> num;
    
  if (num != -1) // declares that this is what executes if the user does not enter -1
{
  cout << "The number you entered is: " << num << endl;
  cout << "The number entered times itslef: " << num*num << endl;
  cout << "The number entered divided by itself: " << num/num << endl;  
  cout << "The number entered plus 3 divided by 5: " << (num+3)/5 << endl;
  cout << "The number entered plus 3 divided by 5 plus the number entered plus 7 divided by 2:" << ((num+3)/5)+((num+7)/2) << endl;
    
  counter ++; //adds one to counter each time program loops
}
   
  }
  while (num != -1); // declares that this is what executes if the user enters -1
    
    cout << "This program ran " << counter << " times." << endl; //displays how many times the program ran after exiting the loop (user enters -1)    
  
  return 0;
} 
  
