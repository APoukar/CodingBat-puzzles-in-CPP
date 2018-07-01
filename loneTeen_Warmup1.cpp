//Link to Java version - http://codingbat.com/prob/p165701
//iostream header is needed for this exercise

#include <iostream>

bool loneTeen(int a, int b) {
    bool aTeen = (a >= 13 && a <= 19);
    bool bTeen = (b >= 13 && b <= 19);

    return (!aTeen && bTeen) || (aTeen && !bTeen);
}

 
int main(int argc, char const *argv[])
{
    std::cout << loneTeen(13, 99) << '\n'   //1
    << loneTeen(21, 19) << '\n'             //1
    << loneTeen(13, 13) << '\n'             //0
    << loneTeen(14, 20) << '\n'             //1
    << loneTeen(20, 15) << '\n'             //1
    << loneTeen(16, 17) << '\n'             //0
    << loneTeen(16, 9) << '\n'              //1
    << loneTeen(16, 18) << '\n'             //0
    << loneTeen(13, 19) << '\n'             //0
    << loneTeen(13, 20) << '\n'             //1
    << loneTeen(6, 18) << '\n'              //1
    << loneTeen(99, 13) << '\n'             //1
    << loneTeen(99, 99);                    //0
    return 0;
}

/**
 * This is one of the more complicated exercises
 * as it requires you to divide the solution into
 * two steps: 
 * a) find out if the particular person is a teen
 * b) compare both results and return if there is
 *    exactly one teen
 */
