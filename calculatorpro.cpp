#include <iostream>
#include <math.h>
using namespace std;
int main() {
    //available operations
   char choose;
   cout<<"choose operation- simple(1),exponetial(2)\n \t \t \t \t (1/2)- ";
   cin>>choose;
   char op;
   long double n,m;
   int n1,n2;

             //for simple clculations (1)
    if(choose=='1'){
       cout<<"enter two numbers- \n";
       cin>>n>>m;
       cout<<"enter operator- add(+),subtract(-),multiply(*),division(qotient-/, riminder-%)\n \t \t \t (+\\-\\*\\/\\%)- ";
       cin>>op;
       switch(op){
           case '+':
           cout<<"sum= "<<n<<"+"<<m<<"= "<<n+m;
           break;
           case '-':
           cout<<"sub= "<<n<<"-"<<m<<"= "<<n-m;
           break;
           case '*':
           cout<<"multiplcation= "<<n<<"*"<<m<<"= "<<n*m;
           break;
           case '/':
           cout<<"qotient= "<<n<<"/"<<m<<"= "<<n/m;
           break;
           case '%':
           n1=n;
           n2=m;
           cout<<"riminder= "<<n<<"%"<<m<<"= "<<n1%n2;
           break;

           default :
           cout<<"\"unknown operator\"";

       }

    }

             //for exponential operations (2)
    else if(choose=='2'){
       cout<<"enter operator- square root(r),power(^)\n \t \t \t (r/^)- ";
       cin>>op;
       switch(op){
           case 'r':
           cout<<"enter the number- ";
           cin>>n;
           cout<<"the sq root of "<<n<<" is= "<<sqrt(n)<<endl;
           break;
           case '^':
           cout<<"enter the number- ";
           cin>>n;
           cout<<"enter power- ";
           cin>>m;
           cout<<n<<" to the power "<<m<<" is- "<<pow(n,m);
           break;

           default:
           cout<<"\"unknown operator\"";
       }
    }   
}