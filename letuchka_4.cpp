#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

struct MobilePhone{
  double weight;
  bool is_broken;
  double price;
  int id;

  MobilePhone (int id): id(id){
    cin>>weight;
    cin>>is_broken;
    cin>>price;
  }

  void xml_cout(){
    cout<<"    <MobilePhone id=\"" <<id<< "\" weight=\"" << weight << "\" is_broken=\"" << is_broken << "\" price=\"" << price <<"\"/>\n";
  };
};

int main(){
  int n;
  cin>>n;
  vector<MobilePhone> phones;
  for (int i=0;i<n;i++){
    MobilePhone phone(i);
    phones.push_back(phone);
  }
  cout<<"<MobilePhones>\n";
  for (int i=0;i<n;i++){
    phones[i].xml_cout();
  }
  cout<<"</MobilePhones>\n";
}
