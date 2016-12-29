#ifndef MYHEAD_H_INCLUDED
#define MYHEAD_H_INCLUDED


extern void myswap(int &a ,int &b);
extern int lengthOfLongestSubstring(string s);
namespace ABC {
	void myprint(string &str) {
		std::cout <<"ABC  "<< str << std::endl;
	}
}

namespace XYZ {
	void myprint(string &str) {
		std::cout <<"XYZ  "<< str << std::endl;
	}
}

#endif // TEST_H_INCLUDED
