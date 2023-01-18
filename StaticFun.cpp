#include<iostream>

using namespace std;
 
 class Demo
 {
    public:
    int i,j;
   public :static int  x;

   Demo(int a,int b )
   {
    this -> i = a;
    this -> j=b;
   }

   void fun()
   {
      cout<<this->i<<endl;
      cout<<this->j<<endl;
   }

     static void gun(int iValue)
   {
      cout<<"inside static mathode"<<endl;
      cout<<Demo::x<<endl;
   }

 };
 int Demo::x =30;

int  main()
{
   Demo obj(25,50);

   Demo::gun(10);
   cout<<Demo::x<<endl;

   obj.fun();

    return 0;
}