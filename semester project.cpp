//physical layer implementation
#include<iostream>
using namespace std;
int n;
class device{
public:
int c;
int conn[30];	
void makeconn(){
for(int i=0;i<c;i++){
cout<<"Enter connected device ID ("<< 0 <<"to"<<n-1<<")"<<endl;
cin>>conn[i];
}	}
void send(string data){
for(int i=0;i<c;i++)
cout<<conn[i]<<" recieved data \""<<data<<"\""<<endl; 

}
};
int main(){
int a;
cout<<"Enter No. of end devices :";
cin>>n;	
device dev[n];
for(int i=0;i<n;i++){
cout<<"Enter no. of connections for device "<<i+1<<" :";
cin>>dev[i].c;
dev[i].makeconn();
}
cout<<"All connection are made ."<<endl;
cout<<"Enter sending station ID "<<endl;
cin>>a;
string data;
cout<<"Enter DATA to send "<<endl;
getline(cin,data);
getline(cin,data);
dev[a].send(data);

}
