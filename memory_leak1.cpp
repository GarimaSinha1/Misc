#include<iostream>
int main(int argc, char **argv) {
  int res = array[argc + 100];  // BOOM
  delete [] array;
  return res;
}
