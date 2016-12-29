#ifndef  CONSTRATOR_TEST_H
#define  CONSTRATOR_TEST_H
#include <iostream>
class A {
private:
	int n1;
	int n2;
public:
	A() : n2(n1 + 2), n1(2) {
		std::cout << "construct without arguement" << std::endl;
		myPrint();
	}   //成员变量的初始化顺序与变量在类型中的声明顺序相同，而与它们在构造函数的初始化列表中的顺序无关
	A(int x, int y) : n1(x), n2(y) {
		std::cout << "construct with arguement" << std::endl;
		myPrint();
	}
	A(const A &a) {
		this->n1 = a.n1;
		this->n2 = a.n2;
		std::cout << "copy constructor" << std::endl;
	}
	A& operator =(const A &a) {
		std::cout << "assignment operator" << std::endl;
		n1 = a.n1;
		n2 = a.n2;
		return *this;

	}
	A(int a) {
		std::cout << "type transform constructor" << std::endl;
		this->n1 = a;
		this->n2 = 0;
		myPrint();
	}

	void myPrint() {
		std::cout << "n1=" << n1 << "    n2=" << n2 << std::endl;
	}
};
#endif // ! CONSTRATOR_TEST.H

