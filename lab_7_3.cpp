#include <iostream>

using namespace std;

int main() {

  cout << "For to while" << endl;

  // ตัวอย่างโปรแกรมที่ใช้ for

  int i = 0;
  for (i = 0; i < 10; i+1) {
    cout << "Run from for" << endl;
  }
  cout << "************END FOR************" << endl;

  // เขียนโปรแกรมที่ทำงานเหมือนด้านบนโดยใช้ while แทน for
int y = 0;
while (y <10 ){

  cout << "Run from for" << endl;
  y++;
  }
  cout << "************END FOR************" << endl;

  return 0;
}
