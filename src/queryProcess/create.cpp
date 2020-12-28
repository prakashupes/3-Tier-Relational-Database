#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include "../include/create.hpp"
#include"../util/util.hpp"
#include "../include/validateQuery.hpp"
#include "/usr/local/include/hsql//sql/statements.h"

using namespace std;
using namespace hsql;
namespace dbplus{

        void insertTableIndex(string info,string table)
        {
            
            ofstream file;
            file.open("table_index.txt",ios::out | ios::app);
            if(!file.is_open())cout<<"error"<<endl;
            
            file<<table<<"\n";
            
            file.close();

            ofstream file2;
            file2.open("table.db",ios::out | ios::app);
            file2<<info;
            file2<<"\n";
            file2.close();
            

        }
    
        void Create::createStatement(const CreateStatement* create_stmt)
        {

            //if()b table alredy exist
            string table(create_stmt->tableName);
            ValidateQuery valid;

            if(valid.existTable(table))
            {
              cout<<"Error: Table already exist : "<<table<<endl;
              cout<<endl;
              return;
              
            }

            string info=""; //structrure how table info will be stored in the file
            
            info+=table;
    // std::vector<char*>* viewColumns = create_stmt->viewColumns;
     //cout<<viewColumns->size()<<endl;
     //cout<<viewColumns->at(0);  
     
     if (create_stmt->columns != nullptr) {
      
      for (auto col: *create_stmt->columns) {
        string col_name(col->name);
        info=info+" "+col_name+" varchar";
        col->nullable == true ? info+=" 0":info+=" 1";
        info+=" 0"; //not primary key         
      }

      //insert the table name into table index
      insertTableIndex(info,table);
      cout<<"Table Created\n"<<endl;
    }
    
    
        }
        
    
    



}