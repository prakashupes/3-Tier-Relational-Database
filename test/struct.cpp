#include<iostream>
#include<set>
/*CREATE TABLE Persons (
    PersonID int,
    LastName varchar(255),
    FirstName varchar(255),
    Address varchar(255),
    City varchar(255)
);
*/
#include<algorithm>
using namespace std;
struct TypeCheck{
    int f1;
    string f2;

};

typedef struct
    {
        int KeyField;
        string DataField;
    } ItemType;

void toUpper(string& su)
{
    transform(su.begin(), su.end(), su.begin(), ::toupper); 
}
int main()
{
    string str="hhjh fn";
    toUpper(str);
    cout<<str;
    /*
    cout<<"Start\n";
    TypeCheck t1[10];
    t1[0].f1=5;
    t1[0].f2="Hello";

    ItemType t2[10];

    set<string> s;
    s.insert("hello");
    */
    


}