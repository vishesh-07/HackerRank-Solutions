#include<string>
class Person{
    public:
    string name;
    int age;
    virtual void getdata()=0;
    virtual void putdata()=0;
};
class Professor:public Person{
   
    static int seq;
    int publications,cur_id;
     public:
    Professor() : cur_id(++seq) {}
    void getdata(){
        cin>>name>>age>>publications;
    }
    void putdata(){
        cout<<name<<" "<<age<<" "<<publications<<" "<<cur_id<<endl;
    }
};
int Professor::seq = 0;
class Student:public Person{
    static int seq;
    int marks[6],sum=0;
     int cur_id=0;
    public:
    Student() : cur_id(++seq) {}
    void getdata(){
        cin>>name>>age;
        for(int i=0;i<6;i++){
            cin>>marks[i];
        }
    }
    void putdata(){
        for(int i=0;i<6;i++){
            sum+=marks[i];
        }
        cout<<name<<" "<<age<<" "<<sum<<" "<<cur_id<<endl;
    }
};
int Student::seq = 0;
