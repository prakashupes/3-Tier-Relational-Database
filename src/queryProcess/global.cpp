#include "../include/global.hpp"
#include <vector>
#include <unordered_map>
#include<fstream>
#include "../util/util.hpp"
using namespace std;

namespace dbplus{

    std::unordered_map<std::string ,int> table_index;
    void PreprocessData::preprocess()
    {
        string file_name="table_index.txt";
    
        ifstream file;
        file.open(file_name);
        if(!file.is_open()) return;
        string str;
        while(getline(file,str))
	    {
		    vector <string> v = split(str,' ');
            table_index[v[0]]=stoi(v[1]);
            v.clear();
	    }
        file.close();
        
    }
}