#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>

using namespase std;
class LongNumbers
{
      protected:
char * num;//number- кількість числ в числі
int len;// length -довжина 

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
        
        
        
         int n;
        double *x;
        
        
        
}

LongNumbers::LongNumbers(int newlen, char * newnum)
{
       unsigned char i;
len=newlen;
number=new char[len+1];
for(i=0;i<=n;num[i++]=newnam[i]);

 
}
 
LongNumbers::LongNumbers()
{
    char num[1]={0};
    LongNumbers::LongNumbers(0,num);
}
 
LongNumbers::LongNumbers
{
    delete [] num;
}
 
LongNumbers::LongNumbers::t()
{
    return num[0];
}
 
 
// Перегрузка  оператора =
LongNumbers&:LongNumbers ::operator=(const LongNumbers &Object)
{
    len = Object.lenn;
          delete []num;
    num=new char * [len+1];
    for(int i=0;i<=len;)num[i++]=Object.num[i];
    return *this;
}
