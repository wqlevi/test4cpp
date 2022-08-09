#include <iostream>
/*
 * A simple upper/lower case to lower/upper case converter
 */
int main(){
char in,out;
std::cout << "\nPlease enter char:"<<std::endl;
std::cin >> in;
if ((in>65) && (in<91)){
std::cout << "lower case is:" << char(in+32) <<std::endl;
}
else if ((in>96) && (in<123)){
std::cout << "upper case is:" << char(in-32) <<std::endl;
}
else return -1;
return 0;
}
