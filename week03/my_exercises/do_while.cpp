#include <iostream>
using namespace std;  //  这一段必须有 cout 和 endl  
int main()
{
int num = 0; // the condition is false
do
{ //but the body will be execuated in the 1st iteration
    cout << "num = " << num << endl;
    num--;
}while (num > 0);
}