#include <iostream>
using namespace std;

int main (){
  cout << "This program converts minutes to seconds. Simply input the number of minutes to see how many seconds it equals to.";
  int minutes;
  int seconds;
  cout << "\nNumber of minutes: ";
  cin >> minutes;

  seconds = minutes * 60;

  cout << "There are " << seconds << " seconds in " << minutes << " minute(s).";

return 0;
}

