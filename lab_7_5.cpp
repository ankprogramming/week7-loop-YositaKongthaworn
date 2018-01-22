#include <iostream>

using namespace std;

int main () {

  int num = 36;
  // การหาเลขคู่ และแสดงเฉพาะเลขคู่
  for (num =0; num <= 65535;num ++){
    if ((num % 2)==0){
        cout << num << endl;
    }
  }

  return 0;
}
