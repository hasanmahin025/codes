#include<bits/stdc++.h>
using namespace std;
struct person{
     string name;
     int age;
     string adress;
     person(string _name , int _age , string add)
     {
        name = _name;
        age = _age;
        adress = add;
     }
     void print(){
        cout << "Name = " << name << '\n';
        cout << "Age = " << age << '\n';
        cout << "adress = " << adress << '\n';
     }
     person()
     {
        name = "Hasan";
        age = 21;
        adress = "Dhaka";
     }
};
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);

    person p("mahin",21,"Uttara");
    p.print();

    person q;
    cout << q.name << '\n';
    cout << q.age << '\n';
    cout << q.adress << '\n';

   
}