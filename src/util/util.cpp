#include<vector>
#include<string>
#include<algorithm>
#include<fstream>
#include<iostream>
using namespace std;
vector <string> split(const string &str, char del)
{
    string z="";
    vector<string> stream;
    for(auto x: str)
    {
        if(x==del)
        {
            stream.push_back(z);
            z="";
        }
        else z+=x;

    }
    stream.push_back(z);
    return stream;


}
void toUpper(string& su)
{
    transform(su.begin(), su.end(), su.begin(), ::toupper); 
}

void help(){

    string file_name="help.txt";
    
    ifstream file;
    file.open(file_name);
    if(!file.is_open())cout<<"error in help"<<endl;
    string str;
	while(getline(file,str))
	{
		cout<<str<<endl;
	}
    file.close();
}
