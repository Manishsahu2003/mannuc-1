#include<iostream>
using namespace std;
int main(){int n,x[50], y[50],i,z[50];
std::cout<<"enter test cases";
std::cin>>n;
for(i=1;i<=n;i++){
  cout<< "\nvalue of x and y";
  cin>>x[i]>>y[i]>>z[i];

  }
  for(i=1;i<=n;i++){
    if(x[i]<z[i]&&z[i]<y[i]){
      cout<<"yes\n";

    }
    else{
      cout<<"no\n";
    }
  }
}