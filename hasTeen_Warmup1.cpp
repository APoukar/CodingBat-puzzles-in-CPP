//Link to Java version - http://codingbat.com/prob/p178986
//iostream header is needed for this exercise

#include <iostream>

bool hasTeen(int a, int b, int c) {
    return ((a >= 13 && a <= 19) ||
            (b >= 13 && b <= 19) ||
            (c >= 13 && c <= 19));
}

int main() {
    std::cout << hasTeen(13, 20, 10) << '\n'        //1
    << hasTeen(20, 19, 10) << '\n'                  //1
    << hasTeen(20, 10, 13) << '\n'                  //1
    << hasTeen(1, 20, 12) << '\n'                   //0
    << hasTeen(19, 20, 12) << '\n'                  //1
    << hasTeen(12, 20, 19) << '\n'                  //1
    << hasTeen(12, 9, 20) << '\n'                   //0
    << hasTeen(12, 18, 20) << '\n'                  //1
    << hasTeen(14, 2, 20) << '\n'                   //1
    << hasTeen(4, 2, 20) << '\n'                    //0
    << hasTeen(11, 22, 22);                         //0

    return 0;
}

/**
 * Only one number has to be between 13 and 19,
 * that's why there is used the OR (||) operator.
 */