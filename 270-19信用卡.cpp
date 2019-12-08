#include <iostream>
using namespace std ;
int main() {
 long long num;
 cout << "number"; 
 cin >> num;
 if(num / 1000000000000 == 34 || num / 10000000000000 == 35 || num / 10000000000000 == 36 || num / 10000000000000 == 37){
    cout<<"American Express";
 }else if (num / 100000000000000 == 51 || num / 100000000000000 == 52 || num / 100000000000000 == 53 || num / 100000000000000==54 || num / 100000000000000 == 55) {
    cout<<"MasterCard";
 }else if (num / 1000000000000 == 4 || num / 10000000000000 == 4 || num / 100000000000000 == 4 || num / 1000000000000000 == 4){
    cout<<"Visa";
 }else{
    cout<<"無效卡號";
 }
}
