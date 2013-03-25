#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>

using namespase std;
class LongNumbers
{
      protected:
char * number;
int len;// length може бути функцією

      public:
        LongNumbers();// constructors
        LongNumbers(int newlen, char * newnum);// чому double? Може char? Там же цифри треба зберігати?
        LongNumbers(const LongNumbers &x);
        ~LongNumbers();// destructor
       
}

LongNumbers::LongNumbers(int newlen, char * newnum)
{
len=strlen(numb);
number=new char[len];
strncpy(number,numb,len);//??
} 

LongNumbers::LongNumbers()// constructors
        {
          number=new char [100];
        }
      
