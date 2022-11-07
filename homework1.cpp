#include <iostream>


using namespace std;

main()
{ 

int x,y,z,G,S,O;

cout<<"enter value for x:";
cin>>x;

cout<<"enter value for y:";
cin>>y;

cout<<"enter value for z:";
cin>>z;

G=((x-y)*(x+z));
S=(x+z+y)*(x+y+z);
O=G/(S+1);
cout<<"O:"<<O;
}
