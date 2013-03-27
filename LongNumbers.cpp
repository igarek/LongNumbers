#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>

using namespase std;
class LongNumbers
{
      protected:
char * num;//number
int len;// length 

      public:
        LongNumbers();// constructors
        LongNumbers(int newlen, char * newnum);// 
        LongNumbers(const LongNumbers &x);
        ~LongNumbers();// destructor
        
        LongNumbers &operator=(const LongNumbers &Object); // Перегрузка =
        LongNumbers operator+(LongNumbers &); // Додавання цілих довгих чисел
        LongNumbers operator-(LongNumbers &); // Віднімання довгих цілих чисел
        LongNumbers operator*(LongNumbers &); // Множення довгого цілого числа на коротке
        LongNumbers operator**(LongNumbers &); // Множення довгого цілого числа на довге
        LongNumbers operator%(LongNumbers &); // Ділення довгого цілого числа на коротке
        LongNumbers operator%%(LongNumbers &); // Ділення довгого цілого числа на довге
         
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
      
