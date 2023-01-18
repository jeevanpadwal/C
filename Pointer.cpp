#include<iostream>
using namespace std;

int main()
{
    int iValue =10;
    char ch ='a';
    float f =0.0;

    int *ptr =NULL;

    ptr =&iValue;

    free (iValue);

}