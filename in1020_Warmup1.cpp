//Link to Java version - http://codingbat.com/prob/p144535
//iostream header is needed for this exercise

#include <iostream>

bool in1020(int a, int b) {
    return ((a >= 10 && a <= 20) || (b >= 10 && b <= 20));
}

int main() {
    std::cout << in1020(12, 99) << '\n'    //1
    << in1020(-21, 12) << '\n'              //1
    << in1020(8, 99) << '\n'               //0
    << in1020(99, 10) << '\n'              //1
    << in1020(20, 20) << '\n'               //1
    << in1020(21, 21) << '\n'               //0
    << in1020(9, 9);                       //0

    return 0;
}

/**
 * Another good exercise for practising logical operators AND (&&)
 * and OR (||).
 */