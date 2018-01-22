#include <iostream>

using namespace std;

int main () {

  /* เขียนโปรแกรมตารางแม่สูตรคูณที่แสดงผลดังนี้

  Base    Mul   Result
  2       1     2
  2       2     4
  2       3     6
  2       4     8
  2       5     10
  2       6     12
  2       7     14
  2       8     16
  2       9     18
  2       10    20
  2       11    22
  2       12    24

  */


  cout << "Base\tMult\tResult\t"<< endl;
  int y;

  for (y=1; y<12; y++)
    {
    cout << "2\t" << y << "\t" << 2*y<<endl;
    }


}
