//Link to Java version - http://codingbat.com/prob/p100905
//iostream & string headers are needed for this exercise

#include <iostream>
#include <string>

std::string delDel(std::string str) {
    if(str.length() > 3 && str.substr(1,3) == "del") {
        return str.at(0) + str.substr(4);
    }
    return str;
}

int main() {
    std::cout << delDel("adelbc") << '\n'       //abc
    << delDel("adelHello") << '\n'              //aHello
    << delDel("adedbc") << '\n'                 //adedbc
    << delDel("abcdel") << '\n'                 //abcdel
    << delDel("add") << '\n'                    //add
    << delDel("ad") << '\n'                     //ad
    << delDel("a") << '\n'                      //a
    << delDel("") << '\n'                       //
    << delDel("del") << '\n'                    //del
    << delDel("adel") << '\n'                   //a
    << delDel("aadelbb");                       //aadelbb

    return 0;
}

/**
 * The function is checking the length of the string first,
 * because trying to get substr(1,3) from shorter string
 * would lead to an error
 */
