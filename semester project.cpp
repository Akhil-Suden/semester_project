#include<iostream>
#include<conio.h>
using namespace std;
class device{
public:
int c;
makeconn(){
int arr[c];	
for(int i=0;i<c;i++){
cout<<"Enter connected device ID :";
cin>>arr[i];
}	
}
};
int main(){
int n;
cout<<"Enter No. of end devices :";
cin>>n;	
device arr[n];
for(int i=0;i<n;i++){
cout<<"Enter no. of connections for device "<<i+1<<" :";
cin>>arr[i].c;
arr[i].makeconn();
getch();
}
}
cfvdfddddddddd
