#include <iostream>

using namespace std;

int main () {

  // เขียนโปรแกรมเพื่อรับค่าตัวเลข 5 จำนวน และหาค่าเฉลี่ย
  int y;
  int sum=0;
  float avg;

  for (int i=0; i<=5;){

  cin >> y;
  sum += y;
  }

  avg = (float)sum / 5;
  cout <<avg <<endl;

  return 0;
}
