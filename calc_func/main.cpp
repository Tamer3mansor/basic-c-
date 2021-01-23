#include<bits/stdc++.h>
using namespace std;
double add(double a, double b)
{
    {return a+b;}
}
double subs(double a, double b)
{
    {return a-b;}
}
double mult(double a, double b)
{
{return a*b;}
}
double div(double a, double b)
{
while(b==0)
        {
            cout<<"Can n't divide by 0 pleas enter another number :\n";
            int r; cin>>r;
            b=r;
        }
            return a/b;
}

int main()
{
    double a=0,b=0; double result=0; char x; int t=1,r=1;short s;
    while(t){
    cout<<"Welcom to calculator Enter 2 numbers\n"; cin>>a>>b;
    t=0;
    if(cin.fail())
    {
        t=1;
        cout<<"Pleas enter Numbers only\n";
        cin.clear();
        cin.ignore(100000,'\n');

    }
    }
    while(r)
    {
        men:
    cout<<"\nMenu Options:\n";
    cout<<" To sum press 1:\n To Subtract Press 2: \n To Multiply press 3: \n To Divide Press 4 :\n To GOto Menu Again press 5: \n";
    calc:
     cin>>s;
    r=0;
    if (cin.fail())
    { r=1;
        cout<<"\t Enter Correct Value \n\n ";
        cin.clear();
        cin.ignore(100000,'\n');
    }
    }
    if(s==1)
    cout<<add(a,b)<<"\n";
    else if(s==2)
    cout<<subs(a,b)<<"\n";
    else if(s==3)
    cout<<mult(a,b)<<"\n";
    else if(s==4)
    cout<<div(a,b)<<"\n";
    else if(s==5)
    {
            goto men;
    }
    else
    {
        cout<<"\t Enter vaild value Between 1:5\n" ;
        goto calc;
    }


return main();
}
