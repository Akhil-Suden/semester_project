//physical layer implementation
#include<iostream>
#include<conio.h>
using namespace std;
int n,hubcon=0;

class hub{
public:
int c;
int conn[30];

send(string data,int id)	
{for(int i=0;i<c;i++)
{if(conn[i]!=id)
 cout<<conn[i]<<" recieved data \""<<data<<"\""<<endl; 
}
}
};

hub hubb;

class device{
public:
int c;
int conn[30];	
void makeconn(int s){
for(int i=0;i<c;i++){	
cout<<"Enter connected device ID ("<< 1 <<" to "<<n<<" or 100 for hub) "<<endl;
cin>>conn[i];
if(conn[i]==100)
{hubb.c++;
 hubb.conn[hubcon++]=s;
}
}	}
void send(string data,int id){
for(int i=0;i<c;i++)
if(conn[i]!=100)
cout<<conn[i]<<" recieved data \""<<data<<"\""<<endl; 
else
hubb.send(data,id);
}
};




int main(){
int a;
device dev[20];
cout<<"Enter No. of end devices :";
cin>>n;	
for(int i=0;i<n;i++){
cout<<"Enter no. of connections for device "<<i+1<<" :";
cin>>dev[i].c;
dev[i].makeconn(i+1);
}
cout<<"All connection are made ."<<endl;

int id;
cout<<"Enter sending station ID "<<endl;
cin>>id;
string data;
cout<<"Enter DATA to send "<<endl;
getline(cin,data);
getline(cin,data);
dev[id-1].send(data,id);

return 0;
}
