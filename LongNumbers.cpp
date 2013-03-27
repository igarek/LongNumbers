#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>

using namespase std;
class LongNumbers
{
      protected:
char * num;
int len;// length 

      public:
        LongNumbers();// constructors
        LongNumbers(int newlen, char * newnum);// 
        LongNumbers(const LongNumbers &x);
        ~LongNumbers();// destructor
       
}

LongNumbers::LongNumbers(int newlen, char * newnum)
{
len=strlen(num);
number=new char[len];
strncpy(numb,len);//??
} 

LongNumbers::LongNumbers()// constructors
        {
          num=new char [100];
        }
      
