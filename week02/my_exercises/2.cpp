#include<iostream>
using namespace std;
int main()
{       
	long int a = 5678900;

        long int b = 56789;
        long int c =  a * b ;//bad: uninitialized variable
	cout<< c << endl;
        cout<< "size of long int is " << sizeof(long int) << endl;
	cout<< "size of a is " << sizeof(a) << endl;
	cout<< "size of int is " << sizeof(int) << endl;
	cout<< "size of float is " << sizeof(float) << endl;
	cout<< "size of long long int is " << sizeof(long long int) << endl;
}			
						      //
