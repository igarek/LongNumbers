#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>

using namespase std;
class LongNambers
{
char * number;
int length;
public:
IntNumbers(char * numb="0")
{
length=strlen(numb);
number=newchar[length];
strcpy(number,numb);
}