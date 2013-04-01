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
        double t();
        
        LongNumbers &operator=(const LongNumbers &Object); // Перегрузка =
        LongNumbers operator+(LongNumbers &); // Додавання цілих довгих чисел
        LongNumbers operator-(LongNumbers &); // Віднімання довгих цілих чисел
        LongNumbers operator*(LongNumbers &); // Множення довгого цілого числа на коротке
        LongNumbers operator*0(LongNumbers &); // Множення довгого цілого числа на довге
        LongNumbers operator%(LongNumbers &); // Ділення довгого цілого числа на коротке
        LongNumbers operator%0(LongNumbers &); // Ділення довгого цілого числа на довге
        
          // Перегрузка оператора << для вивода
        friend ostream &operator<<(ostream &, LongNumbers &);//дружні оператори
        // Перегрузка оператора >> для ввода масиву
        friend istream &operator>>(istream &, LongNumbers &);//дружні оператори
         
}

LongNumbers::LongNumbers(int newlen, char * newnum)
{
len=strlen(num);
number=new char[len];
strncpy(numb,len);//??

    unsigned char i;///////// розбирааааааааю, сделаю
    len=newlen;
    num=new char[n+1];
    for(i=0;i<=n;x[i++]=xx[i]);
}
 
polynom::polynom()
{
    double x[1]={0};
    polynom::polynom(0,x);
}
 
polynom::~polynom()
{
    delete []x;
}
 
double polynom::t()
{
    return x[0];
}

LongNumbers::LongNumbers()// constructors
        {
          num=new char [100];
        }
      
