#include <iostream>
// using namespace std;  //  这一段必须有 cout 和 endl  
int main()
{
// if.cpp
int num  = 2;
// some operations may change num's value
if (num == 5)
{  std::cout << "The number is less than 5." << std::endl;

}
else
{
    std::cout << "The number is not 5.\n";
    std::cout << "the number is " <<  num << std::endl;
}

}