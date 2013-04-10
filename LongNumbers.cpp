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
char * num;//number- ê³ëüê³ñòü ÷èñë â ÷èñë³
int len;// length -äîâæèíà 

      public:
        LongNumbers();// constructors
        LongNumbers(int newlen, char * newnum);// 
        LongNumbers(const LongNumbers &x);
        ~LongNumbers();// destructor
        double t();
        
        LongNumbers &operator=(const LongNumbers &Object); // Ïåðåãðóçêà =
        LongNumbers operator+(LongNumbers &); // Äîäàâàííÿ ö³ëèõ äîâãèõ ÷èñåë
        LongNumbers operator-(LongNumbers &); // Â³äí³ìàííÿ äîâãèõ ö³ëèõ ÷èñåë
        LongNumbers operator*(LongNumbers &); // Ìíîæåííÿ äîâãîãî ö³ëîãî ÷èñëà íà êîðîòêå
        //LongNumbers operator*0(LongNumbers &); // Ìíîæåííÿ äîâãîãî ö³ëîãî ÷èñëà íà äîâãå
        LongNumbers operator%(LongNumbers &); // Ä³ëåííÿ äîâãîãî ö³ëîãî ÷èñëà íà êîðîòêå
        //LongNumbers operator%0(LongNumbers &); // Ä³ëåííÿ äîâãîãî ö³ëîãî ÷èñëà íà äîâãå
        
          // Ïåðåãðóçêà îïåðàòîðà << äëÿ âèâîäà
        friend ostream &operator<<(ostream &, LongNumbers &);//äðóæí³ îïåðàòîðè
        // Ïåðåãðóçêà îïåðàòîðà >> äëÿ ââîäà ìàñèâó
        friend istream &operator>>(istream &, LongNumbers &);//äðóæí³ îïåðàòîðè
  
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
 
 
// Ïåðåãðóçêà îïåðàòîðà =
LongNumbers& LongNumbers ::operator=(const LongNumbers &Object)
{
    len = Object.len;
          delete []num;
    num=new char[len+1];
    for(int i=0;i<=len;)num[i++]=Object.num[i];
    return *this;
}
LongNumbers LongNumbers::operator+(LongNumbers &fp1)//ïåðåãðóçêà îïåðàòîðà +
{
    LongNumbers ret;
    ret=(len>fp1.len)?*this:fp1;
    int minind=(len>fp1.len)?fp1.len:len;
 
    for(int i=0;i<=minind;ret.num[i++]+=num[i]);
 
    return ret;
}

// Ïåðåãðóçêà îïåðàòîðà >>
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
 
// Ïåðåãðóçêà îïåðàòîðà <<
ostream &operator<<(ostream &fo, LongNumbers  &fp)
{
 
    for(int i=0;i<=fp.len;i+=1) fo <<"num["<<i<<"]="<<int(fp.num[i])<<endl;
    return fo;
}

int main(int argc, char *argv[])
{
    
    char num1[]={6,3,8};
    char num2[]={9,4,1};
    LongNumbers m3(3,num1);
    LongNumbers m1(3,num2);
    cout<<"Pershe chislo:"<<endl;
    cout<<m1<<endl;
     LongNumbers m2(3,num2);
    cout<<"Druge chislo:"<<endl;
    cout<<m2<<endl;
    m3=m1+m2;
    cout<<endl<<"Suma m1 and m2:"<< endl<<m3<<endl;
 getch();
  
}

