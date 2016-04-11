#include<iostream>

using namespace std;

int main(){
  int t,count=0,temp=1;
  string str;
  cin>>t;
  while(t--){
    cin>>str;
    temp=1;
    for (int i=0; i<str.length(); i++){
      count = 0;
      for (int j = 0; j<str.length();j++){
        if(str[i]==str[j]){
          count++;
        }
      }
      if (count==str.length()/2 && str.length()%2 == 0){
        cout<<"YES"<<endl;
        temp=0;
        break;
      }
    }
    if(temp==1){
      cout<<"NO"<<endl;
    }
  }
  return 0;
}
