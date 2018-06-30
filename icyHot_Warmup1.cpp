//Link to Java version - http://codingbat.com/prob/p192082
//iostream header is needed for this exercise

#include <iostream>

bool icyHot(int temp1, int temp2) {
    return ((temp1 < 0 && temp2 > 100) || (temp2 < 0 && temp1 > 100));
}

int main() {
    std::cout << icyHot(120, -1) << '\n'    //1
    << icyHot(-1, 120) << '\n'              //1
    << icyHot(2, 120) << '\n'               //0
    << icyHot(-1, 100) << '\n'              //0
    << icyHot(-2, -2) << '\n'               //0
    << icyHot(120, 120);                    //0

    return 0;
}

/**
 * Good exercise for practising logical operators AND (&&)
 * and OR (||). My solution is a bit shorter than the one
 * at CodingBat, because it evaluates the condition in the
 * return statement and based on the result it returns either
 * true or false. The if/else statement is redundant.
 */