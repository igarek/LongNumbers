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
char * num;//number- кылькысть чисел
int len;// length - довжина 

      public:
        LongNumbers();// constructors
        LongNumbers(int newlen, char * newnum);// 
        LongNumbers(const LongNumbers &x);
        ~LongNumbers();// destructor
        double t();
        
        LongNumbers &operator=(const LongNumbers &Object); // Перегрузка оператора =
        LongNumbers operator+(LongNumbers &); // Додавання довгих чисел 
        LongNumbers operator-(LongNumbers &); // Віднімання довгих чисел 
        LongNumbers operator*(LongNumbers &); // Множення цілого довгого числа на коротке
        //LongNumbers operator*0(LongNumbers &); // Множення цілого довгого числа на довге
        LongNumbers operator%(LongNumbers &); // Ділення цілого довгого числа на коротке
        //LongNumbers operator%0(LongNumbers &); // Ділення цілого довгого числа на довге
        
          // Перегрузка оператора << для виводу
        friend ostream &operator<<(ostream &, LongNumbers &);//дружні оператори
        // Перегрузка оператора >> для вводу масиву
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
LongNumbers LongNumbers::operator+(LongNumbers &fp1)//Перегрузка оператора +
{
    LongNumbers ret;
    ret=(len>fp1.len)?*this:fp1;
    int minind=(len>fp1.len)?fp1.len:len;
 
    for(int i=0;i<=minind;ret.num[i++]+=num[i]);
 
    return ret;
}

// Перегрузка оператора >>
istream &operator>>(istream &fi,LongNumbers &fp)
{
    cout<<"len=";
    fi >> fp.len;
 
    delete []fp.num;
    fp.num=new char[fp.len+1];
    for(int i=0;i<=fp.len;)
    {
        cout<<"num["<<i<<"]=";
        fi >> fp.num[i++];
 
    }
 
    return fi;
}
 
// Перегрузка оператора <<
ostream &operator<<(ostream &fo, LongNumbers  &fp)
{
 
    for(int i=0;i<=fp.len;i+=1) fo <<"num["<<i<<"]="<<int(fp.num[i])<<endl;
    return fo;
}

int main(int argc, char *argv[])
{
    
    char num1[]={6,3,3,4,5,6,7,8,9,0};
    char num2[]={9,4,1,3,4,5,6,7,8,1};
    LongNumbers m3(10,num1);
    LongNumbers m1(10,num2);
    cout<<"Pershe chislo:"<<endl;
    cout<<m1<<endl;
     LongNumbers m2(3,num2);
    cout<<"Druge chislo:"<<endl;
    cout<<m2<<endl;
    m3=m1+m2;
    cout<<endl<<"Suma m1 and m2:"<< endl<<m3<<endl;
 getch();
  
}

