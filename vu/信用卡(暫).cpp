#include <iostream>
using namespace std;

int main(){
  int number;

  cout << "請輸入卡號:";
  cin >> number;

  int i(number / 1000000000);
  
  //被除數太大會莫名算錯

  cout << "卡號:" << i << "\n";

if(i < 1)
  cout << "輸入錯誤";

  else if(i >= 6)
  cout << "輸入錯誤";

else if(i == 4)
  cout << "Visa Card";
  
else if(i == 5)
  cout << "Master Card";
  
else if(i == 3)
  cout << "American Express";
  
else if(i == 1)
  cout << "JCB Card<< endl";
  
else if(i == 2)
  cout << "JCB Card";

  return 0;
}
