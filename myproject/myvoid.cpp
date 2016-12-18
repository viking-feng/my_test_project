

#include<iostream>
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
#include<string>
#include<stack>
#include<set>
#include"complex.h"
#include"myhead.h"
using namespace std;
extern int n;

 void myswap( int &a , int &b){
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<"  "<<b<<endl;
    cout<<n<<endl;

}
int lengthOfLongestSubstring(string s) {
          int n = s.length();
          int i = 0, j = 0;
          int maxLen = 0;
          bool exist[256] = { false };
          while (j < n) {
            if (exist[s[j]]) {
              maxLen = max(maxLen, j-i);
              while (s[i] != s[j]) {
                exist[s[i]] = false;
                i++;
              }
              i++;
              j++;
            } else {
              exist[s[j]] = true;
              j++;
            }
          }
          maxLen = max(maxLen, n-i);
          return maxLen;
    }
string lengthofstring(string s){   //最长回文传
     const int len=s.length();
     int maxlen=0,start=0;
     for(int i=0;i<len;i++){
        int low=i-1,high=i;
        while(low>=0 && high<len&& s[low]==s[high]){
            low--;
            high++;
        }
        if(high-low-1>maxlen){
            maxlen=high-low-1;
            start=low+1;
        }

         low=i-1;high=i+1;
        while(low>=0 && high<len&& s[low]==s[high]){
            low--;
            high++;
        }
        if(high-low-1>maxlen){
            maxlen=high-low-1;
            start=low+1;
        }

     }
     return s.substr(start,maxlen);
}

int reverse_int(int x) {
        int flag=0; int y=0;
        if(x<0){
            flag=-1;
            x=-x;
        }else
            flag=1;
        while(x>0){
            y=10*y+(x%10);
            x=x/10;

        }
        return flag*y;

}

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};

int maxArea(vector<int>& height) {
        int i=0;
        int j=(int)height.size()-1;
        int maxsum=0;
        while(i<j){
            int temp_sum=(j-i)*(min(height[i],height[j]));
            maxsum=(maxsum<temp_sum?temp_sum:maxsum);
            if(height[i]<height[j])
                i++;
            else
                j++;

        }
        return maxsum;
    }

string longestCommonPrefix(vector<string>& strs) {  //最长公共前缀
       if(strs.size()==0) return 0;
       int len=0;
       for(int i=0;i<strs[0].length();++i){   //表示第几位
            for(int j=0;j<strs.size();j++){  //表示第几个string
                if(strs[0][i]!=strs[j][i] || i>strs[j].length())
                    return strs[0].substr(0,len);
            }
            len++;
       }
       return strs[0].substr(0,len);
    }


bool isValid(string s) {
        stack<char> st;
        string::iterator it=s.begin();
        while(it!=s.end()){
            if(*it=='(' || *it=='[' || *it=='{')
                st.push(*it);
            else{

            if(st.empty())
                return false;

            else if( (st.top()=='(' && *it==')') || (st.top()=='[' && *it==']') || (st.top()=='{' && *it=='}'))
                st.pop();
            else
                return false;

            }
            it++;
        }
        if(st.empty())
            return true;
        else
            return false;
}


int myAtoi(string str) {
    int len=str.length();
    int sign=1;
    long long res=0; int i=0;
    for( i=0;i<len;i++){
        if(str[i]==' ')
            continue;
        else
            break;
    }
    if(str[i]=='-')
        sign=-1;
    else if(str[i]=='+')
        sign=1;
    else if (str[i]>='0' && str[i]<='9')
        res=res*10+(str[i]-'0');
    else
        return 0;
    for(i=i+1;i<len;i++){
        if(str[i]>='0' && str[i]<='9')
            res=res*10+(str[i]-'0');
        else
            break;
        if(sign*res>INT_MAX )
            return INT_MAX;
        else if(sign*res<INT_MIN )
            return INT_MIN;
    }
    return sign*res;
}

int strStr(string haystack, string needle)
{
    int len1=haystack.length();
    int len2=needle.length();
    if(len1<len2) return -1;
    for(int i=0; i<=len1-len2; i++)
    {
        int j;
        for( j=0; j<len2; j++)
        {
            if(haystack[i+j]!=needle[j])
                break;
        }
        if(j==len2)
            return i;
        }
    return -1;
}

int divide(int dividend, int divisor) { //被除数 除数
        int sign=1;
        if(dividend<0){dividend=-dividend;sign=-sign;}
        if(divisor<0){divisor=-divisor;sign=-sign;}
        int res=0;
        while(dividend>divisor){
            dividend=dividend-divisor;
            res++;
        }
        return sign*res;
    }

 string addBinary(string a, string b) {
    int sizea = a.size();
    int sizeb = b.size();
    if(sizea < sizeb)
        return addBinary(b, a);
    //sizea >= sizeb
    string zeros(sizea-sizeb, '0'); //都对齐
    b = zeros + b;
    //int i=0;
    string str(sizea+1,' ');
    int carr=0;
   for(int i=sizea-1;i>=0;i--)
    {
        int sum=(a[i]-'0')+(b[i]-'0')+carr;
        if(sum==0)
        {
            str[i]='0';
            carr=0;
        }
        else if(sum==1)
        {
            str[i]='1';
            carr=0;
        }
        else if(sum==2)
        {
            str[i]='0';
            carr=1;
        }
        else
        {
            str[i]='1';
            carr=1;
        }
    }
    if(carr==1)
        str="1"+str;
    return str;
}

