#include <iostream>
#include <sstream>
using namespace std;
class stu{
    public:
     int age, standard;
    string first_name, last_name;
    void get(){
         cin >> age >> first_name >> last_name >> standard;
    }
    void put(){
        cout<<age<<endl<<last_name<<", "<<first_name<<endl<<standard<<endl<<endl<<age<<","<<first_name<<","<<last_name<<","<<standard;
    }
};
int main() {
   stu s;
   s.get();
   s.put();
    
    return 0;
}
