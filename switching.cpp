#include <iostream>
#include <math.h>

using namespace std;
int area()
{

    int x;
   
    cout<<"choose the option 1.area of cricle \n2.area of rectangle \n3.area of sqaure \n4.area of triangle";
    cin>>x;
    float len,bre,rad,cric,rec,tri,squ;
    switch(x)
    {
        case 1:
        cout<<"enter the radius of cricle";
        cin>>rad;
        cric=M_PI* rad*rad;
        cout<<"area of cricle is :"<<cric<<endl;
        break;
        case 2:
        cout<<"enter the length and breath";
        cin>>len;
        cin>>bre;
        rec=len*bre;
        cout<<"area of rectangle :"<<rec<<endl;
        break;
        case 3:
        cout<<"enter the length";
        cin>>len;
        squ=len*len;
        cout<<"area of sqaure :"<<squ<<endl;
        break;
        case 4:
        cout<<"enter the length and breath";
        cin>>len;
        cin>>bre;
        tri=0.5*len*bre;
        cout<<"area of triangle :"<<tri<<endl;
        break;




    }
    return 0;
    
}
int main()
{
    
    area();

}  

