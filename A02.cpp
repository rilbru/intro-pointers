#include <iostream>

using namespace std;

int getAnswer(int *c01, int *c02){
  int sum = 0;
  sum = (*c01 + *c02);
  return sum;
  //return the sum of the values that c01 and c02 are pointing at
}

int* getSecondAnswer(int *&c01, int *&c02){
  *&c01 = *&c02;
  //assign c01 to c02;
  //return c01;
  return *&c01;
}

int main(){
  int *p = nullptr; 
  int *q = nullptr; 
  int x = 5;
  int y = 6; 
  int a = 11; 
  int b = 12; 
  p=&x; 
  q=&y;
  
  int answer = getAnswer(p,q); 
  cout<<"answer = "<<answer<<endl; 
  cout<<"****************"<<endl; 
  p=&a;
  q=&b;

  int* result = getSecondAnswer(p,q); 
  cout<<"*result = "<<*result<<endl;   
  cout<<"****************"<<endl;

return 0;
}

