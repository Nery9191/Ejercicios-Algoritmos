#include <iostream>
#include<conio.h>

using namespace std;

int main(){

    int n,a=0,b=1,c=2,d=1;

    cout<<"Escriba la cantidad de elementos que desea ";
	cin>>n;

    for(int i=1;i<=n;i++){
    cout<<d<<" ";
	d=a+b+c;
    a=b; 
    b=c;
	c=d;  
}

    getch();
    return 0;
}
