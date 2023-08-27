//By: SHENYAN CAO
//HW0 - Hello World (Revised - not use math library)

#include <iostream>
using namespace std;

double computePower(int base, int power){
    double result = 1.0;

    int sign = 0;
    if(power < 0) {
        sign = -1;
        power = - power;
    }

    while(power != 0){ 
        result *= base;
        power--;
    }

    if(sign == -1) result = 1/result;

    return result;
}


int main() {
    double base;            //handle double as base, negative and positive
    int baseInt;            //will convert base to integer
    double power;           //handle double as power, negative, positive and zero
    int powerInt;           //will convert power to integer
    double result;

    while(true) {

       cout << "\n" << "Let's calculate the power of a number! (base number 0 to exit)" << endl;
       cout << "Base number? ";
       cin >> base;             //input as base

       if(base >= numeric_limits<int>::max() || base <= numeric_limits<int>::min() ) {            //limit base input to prevent overflow
           cout << "potential overflow, base input too large or too small" << endl;
           continue;
       }
       
       baseInt = (int) base; //convert base to integer
       
       if(baseInt == 0) break;         //to exit the program when entered 0

       cout << "To the power of? ";
       cin >> power;            //input as power

       if(power >= numeric_limits<int>::max() || power <= numeric_limits<int>::min() ) {            //limit power input to prevent overflow
           cout << "potential overflow, base input too large or too small" << endl;
           continue;
       }
       
       powerInt = (int) power;

       result = computePower(baseInt,powerInt);

       cout << baseInt << " ^ " << powerInt << " = " << result << endl;
       }
   
   return 0;
}
