#include <iostream>
using namespace std;
class test {
	int i;
	 int j;
public:
	test();
	~test();
};
test::test() {
	cin >> i >> j;
	cout << "constructor for i = " << i << endl;
	cout << "constructor for j = " << j << endl;
	
};
test::~test() {
	cout << "destructor for i = " << i<< endl; 
		cout << "destructor for j = " << j << endl; 

};

int main()
{
	test x;

	exit(3);
}

/*1
2
constructor for i = 1
constructor for j = 2*/
// as you can see destructor dosenot function while exit() is inside the main body of programm !!
