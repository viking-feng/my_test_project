#include <iostream>
#include<stdio.h>
#include <stdlib.h>
#include<ctime>
#include<cmath>
#include<string>
#include<set>
#include<vector>
#include<map>
#include<cmath>
#include<algorithm>
#include<climits>
#include"complex.h"
#include<string>
#include<stack>
#include<set>
#include"myhead.h"
//#include<time.h>
//extern void myswap();
using namespace std;

int n = 10;
class A {
private:
	int n1;
	int n2;
public:
	A() : n2(n1+2), n1(2) {
		cout << "construct without arguement" << endl;
		myPrint();
	}   //成员变量的初始化顺序与变量在类型中的声明顺序相同，而与它们在构造函数的初始化列表中的顺序无关
	A(int x, int y) : n1(x),n2(y) {
		cout << "construct with arguement" << endl;
		myPrint();
	}
	A(const A &a) {   
		this->n1 = a.n1;
		this->n2 = a.n2;
		cout << "copy constructor" << endl;
	}
	A& operator =(const A &a) {
		cout << "assignment operator" << endl;
		n1 = a.n1;
		n2 = a.n2;
		return *this;
	
	}
	A(int a) {
		cout << "type transform constructor" << endl;
		this->n1 = a;
		this->n2 = 0;
		myPrint();
	}

	void myPrint(){
		cout << "n1=" << n1 << "    n2=" << n2 << endl;
	}
};



int main()
{
	
    n=n+1;
    complex c1(2.0, 3.0), c2(4.0, -2.0), c3;
    c3 = c1 + c2;
    cout<<"c1+c2=";
    print(c3);

    cout<<endl;
	cout << 256%(-1) << endl;
	cout << (long long)pow(2, 32) << endl;
	unsigned int m1 = -1;
	signed int m2 = pow(2,32);
	cout << m1 << "  " << m2 << endl;










}
