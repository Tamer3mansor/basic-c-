#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a=0,b=0;
    double result=0; char x;
    calc:
    cout<<"Welcom to calculator Enter 2 numbers\n";
    cin>>a>>b;
    if(cin.fail())
    {
        cout<<"Pleas enter Numbers only\n";
        cin.clear();
        cin.ignore(100000,'\n');
        goto calc;
    }
    men:
    cout<<"\nMenu Options:\n";
    cout<<" To sum press 1:\n To Subtract Press 2: \n To Multiply press 3: \n To Divide Press 4 :\n To GOto Menu Again press 5: \n";
    short s; cin>>s;
    if (cin.fail())
    {
        cout<<"\t Enter Correct Value \n\n ";
        cin.clear();
        cin.ignore(100000,'\n');
        goto men;
    }
    if(s==1)
    {result=a+b;}
    else if(s==2)
    {result=a-b;}
    else if(s==3)
    {result =a*b;}
    else if(s==4)
    {
        while(b==0)
        {
            cout<<"Can n't divide by 0 pleas enter another number :\n";
            int r; cin>>r;
            b=r;
        }
            result =a/b;
    }
    else if(s==5)
    {
            goto men;
    }
    else
    {
        cout<<"\t Enter vaild value Between 1:5\n" ;
        goto calc;
    }


    cout<<"Result is : "<<result<<endl;

return main();
}
