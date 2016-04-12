#include<iostream>
#include<string>

using namespace std;

int main(){
  int t,count=0,temp=1;
  string str;
  cin>>t;
  while(t--){
    cin>>str;
    temp=1;
    for (int i=0; i<(str.size()/2)+1; i++){
      count = 0;
      for (int j = i; j<str.size();j++){
        if(str[i]==str[j]){
          count++;
        }
      }
      if (count==str.size()/2 && str.size()%2 == 0){
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
