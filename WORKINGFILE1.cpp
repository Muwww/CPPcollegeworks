#include <iostream>
#include <cmath>
using namespace std; 
int main(){
    float a = 1.;
//    float c = 1;
    int b;
    cout << "Введите количество элементов дробной цепи: ";
    cin >> b;
        for(int i=0;i<b;i++){
//        c=1/a+1
        a=1/a+1;}
    cout << "Ответ:" << a << endl;
}