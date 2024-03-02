#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void displayClocks(int hours, int minutes, int seconds) {
  char amPm = 'A';
  if (hours >= 12) {
    amPm = 'P';
  }
  cout << "*************************     *************************" << endl;
  cout << "*     12-Hour Clock     *" << "     *     24-Hour Clock     *" << endl;
  cout << "*      " << setw(2) << setfill('0') << hours % 12 << ":" << minutes << ":" << seconds << " " << amPm << "M      *" << "     *       " << hours << ":" << minutes << ":" << seconds <<  "        *" << endl;
  cout << "*************************     *************************" << endl;
}

void clockMenu() {
  cout << "********************" << endl;
  cout << "* 1-Add One Hour   *" << endl;
  cout << "* 2-Add One Minute *" << endl;
  cout << "* 3-Add One Second *" << endl;
  cout << "* 4-Exit Program   *" << endl;
  cout << "********************" << endl;
}

int main() {
  int hours = 13;
  int minutes = 58;
  int seconds = 58;

  displayClocks(hours, minutes, seconds);
}
