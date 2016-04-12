#include<iostream>

using namespace std;

int main(){
  int a, b;
  cin>>a>>b;
  int ans=a-b;

  if (ans%10 != 9)
    cout<<ans+1<<endl;
  else
    cout<<ans-1<<endl;
  return 0;
}
