#include<iostream>
#include<fstream>
#include<vector>
#include <map>
using namespace std;

vector <int> split(const string &str, char del)
{
    string z="";
    vector<int> stream;
    for(auto x: str)
    {
        if(x==del)
        {
            stream.push_back(stoi(z));
            z="";
        }
        else z+=x;

    }
    stream.push_back(stoi(z));
    return stream;


}

int main(){

    map <string, int> m;
    ifstream file2;
    file2.open("table_index.txt");
    string str;
    getline(file2,str);
    vector<int> metadata = split(str,' ');

    metadata[0]++;
    str.clear();

    for(auto x:metadata) str+=to_string(x);

    file2.close();


    ofstream file;
    file.open("table_index.txt",ios::out | ios::app);
     if(!file.is_open())cout<<"error"<<endl;
    file<<str;
    file<<"abc 0\n";
    file<<"pqr 2\n";

    file.close();

    
    //file2.open("table_index.txt");



}