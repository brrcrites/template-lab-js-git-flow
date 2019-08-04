#include <iostream>
using namespace std;

int main(){
    for(int i = 0; i < 100; i++)
    {
        if((i %  (4*6)) == 0){
            cout << "fizzbuzz" << endl;
        }
        else if(i % 4 == 0){
            cout << "fizz" << endl;
        }
        else if(i%6 == 0){
            cout << "buzz" << endl;
        }
        else{
            cout << i << endl;
        }
    }

    return 0;
}