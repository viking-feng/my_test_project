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
#include"Sales_item.h"
#include <cstring>
#include<assert.h>
#include<ctype.h>
//#include"constructor.h"
#include<time.h>
//extern void myswap();
using namespace std;
void print_str(const int *beg , const int *en) {
	while (beg != en)
		cout << *beg++ << endl;

}

class A
{
public:
	A(int d) :data(d) {}
	A():data(0) {}
	A operator+(A&);//成员函数
	A operator-(A&);
	A operator*(A&);
	A operator/(A&);
	A operator%(A&);
	A& operator++();   //前置++
	A& operator++(int);    //后置++
	A operator+(int);
	//friend A operator+(A&, A&);//友元函数
	//friend A operator-(A&, A&);
	//friend A operator*(A&, A&);
	//friend A operator/(A&, A&);
	//friend A operator%(A&, A&);
	friend void Aprint(A &a);
private:
	int data;
};
//成员函数的形式
A A::operator+(A &a)
{
	return A(data + a.data);
}
A A::operator-(A &a)
{
	return A(data - a.data);
}
A A::operator*(A &a)
{
	return A(data*a.data);
}
A A::operator/(A &a)
{
	return A(data / a.data);
}
A A::operator%(A &a)
{
	return A(data%a.data);
}
A A::operator+(int i)
{
	return A(data + i);
}
A& A::operator++()
{
	*this = *this + 1;
	return *this;
}
A& A::operator++(int)
{
	A a = *this;
	*this = *this + 1;
	return a;
}

//友元函数的形式
//A operator+(A &a1, A &a2)
//{
//	return A(a1.data + a2.data);
//}
//A operator-(A &a1, A &a2)
//{
//	return A(a1.data - a2.data);
//}
//A operator*(A &a1, A &a2)
//{
//	return A(a1.data*a2.data);
//}
//A operator/(A &a1, A &a2)
//{
//	return A(a1.data / a2.data);
//}
//A operator%(A &a1, A &a2)
//{
//	return A(a1.data%a2.data);
//}
 inline void Aprint( A &a) {                
	cout << a.data << endl;

}
 char * my_strcpy(char *strDest, const char *strSrc)
 {
	 assert((strDest != NULL) && (strSrc != NULL));
	 char *address = strDest;
	 while ((*strDest = *strSrc) != '\0') {
		 strDest++; strSrc++;
	 }
	 return address;
 }

 int reused = 42;  // reused has global scope

 char*getmemory(void)
 {
	 char *p = "hello word";
	return p;
 }
 int main()
 {

	// string s = "abcdefg";
	// int index = 0;
	// 
	// while (index != s.size() && !isspace(s[index])) {
	//	 s[index] = toupper(s[index]);
	//	 index++;
	// }
	// auto it = s.begin();
	// cout << typeid(it).name() << endl;
	// cout << s << endl;
	// char a[] = "123456";
	// cout << typeid(a).name() << endl;
	// int *p = &index;
	// cout << p << endl;
	// cout << (*p)++ << endl; 
	// cout << p << endl;
	 char *str = getmemory(); cout << str << endl;
 }


 