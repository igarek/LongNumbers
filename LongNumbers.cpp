#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
#include <math.h>
#include <malloc.h>
using namespace  std;
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
        //LongNumbers operator*0(LongNumbers &); // Множення довгого цілого числа на довге
        LongNumbers operator%(LongNumbers &); // Ділення довгого цілого числа на коротке
        //LongNumbers operator%0(LongNumbers &); // Ділення довгого цілого числа на довге
        
          // Перегрузка оператора << для вивода
        friend ostream &operator<<(ostream &, LongNumbers &);//дружні оператори
        // Перегрузка оператора >> для ввода масиву
        friend istream &operator>>(istream &, LongNumbers &);//дружні оператори
  
};

LongNumbers::LongNumbers(int newlen, char *newnum)
{
unsigned char i;
len=newlen;
num=new char[len+1];
for(i=0;i<=len;num[i++]=newnum[i]);

 
}
 
LongNumbers::LongNumbers()
{
    char num[1]={0};
    LongNumbers::LongNumbers(0,num);
};
 
LongNumbers::~LongNumbers()
{
    delete [] num;
};
 
double LongNumbers::t()
{
    return num[0];
}
 
 
// Перегрузка оператора =
LongNumbers& LongNumbers ::operator=(const LongNumbers &Object)
{
    len = Object.len;
          delete []num;
    num=new char[len+1];
    for(int i=0;i<=len;)num[i++]=Object.num[i];
    return *this;
}
LongNumbers LongNumbers::operator+(LongNumbers &fp1)//перегрузка оператора +
{
    LongNumbers ret;
    ret=(len>fp1.len)?*this:fp1;
    int minind=(len>fp1.len)?fp1.len:len;
 
    for(int i=0;i<=minind;ret.num[i++]+=num[i]);
 
    return ret;
}
int main(int argc, char *argv[])
{
    
    int num1[]={6,3,8};
    int num2[]={9,4,1};
    LongNumbers m1(3,num1);
    cout<<"Pershe chislo:"<<endl;
    cout<<m1<<endl;
     LongNumbers m2(3,num2);
    cout<<"Druge chislo:"<<endl;
    cout<<m2<<endl;
    m3=m1+m2;
    cout<<endl<<"Suma m1 and m2:"<< endl<<m3<<endl;
 getch();
    m1.~ LongNumbers ();
    m2.~ LongNumbers ();
    m3.~ LongNumbers ();
}
