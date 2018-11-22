#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
int number;
cout << "請輸入卡號:";
cin >> number;
if(number / 1000000000000000 < 1){
  cout << "輸入錯誤";
  cin >> number;
else if(number / 1000000000000000 == 4){
  cout << "Visa Card";
else if(number / 1000000000000000 == 5){
  cout << "Master Card";
else if(number / 1000000000000000 == 3){
  cout << "American Express";
else if(number / 1000000000000000 == 1){
  cout << "JCB Card";
else if(number / 1000000000000000 == 2){
  cout << "JCB Card";

}
}
