#include<iostream>
#include<vector>
#include<string>
#include<unordered_set>
#include <fstream>
#include "../include/insert.hpp"
#include"../util/util.hpp"
#include "../include/validateQuery.hpp"
#include "/usr/local/include/hsql//sql/statements.h"
using namespace std;
using namespace hsql;
namespace dbplus{

    void fillTableColumns(unordered_set<string> & t,string table,vector<string> &sequance)
    {
        string file_name="table.db";
    
        ifstream file;
        file.open(file_name);
        if(!file.is_open())cout<<"error"<<endl;
        string str;
        vector<string> strings;
	    while(getline(file,str))
	    {
		    strings = split(str,' ');
            if(strings[0]==table) break;

            strings.clear();
	    }
        file.close();
        for(int i=1;i<strings.size();i+=4)
        {
            t.insert(strings[i]);
            sequance.push_back(strings[i]);
        }

        /*

        for ( auto it = t.begin(); it != t.end(); ++it )
             std::cout << " " << *it;
             */

        
    }
    
    void fillstatementcolumns(const hsql::InsertStatement* stmt, unordered_set<string> & t)
    {


    }
    void Insert::insertStatement(const hsql::InsertStatement* stmt)
        {
            string table(stmt->tableName);
            ValidateQuery valid;

            if(!valid.existTable(table))
            {
              cout<<"Error: Table Not exist : "<<table<<endl;
              return;
              
            }

            string info=""; //structrure how table info will be stored in the file
            info+=table+" ";

            unordered_set<string> table_columns;

            vector<string>sequance,stmt_columns,values;
            fillTableColumns(table_columns,table,sequance);
            

            //fill values

            for (auto expr : *stmt->values) {
                values.push_back(expr->name);
        
      } 

            //fillstatementcolumns();

            //check if providd columns are exist
            if (stmt->columns != nullptr) {
                for (char* col_name : *stmt->columns) {
                    if(table_columns.find(col_name)==table_columns.end())
                    {
                        cout<<"error: "<<col_name<<" wrong column\n";

                        return;
                    }
                    stmt_columns.push_back(col_name);
                
            }

            int j=0;
            for(int i=0;i<sequance.size();i++)
            {
                if(sequance[i]!=stmt_columns[j])
                {
                    info=info+"NULL ";
                }
                else{
                    info+=values[j]+" ";
                    j++;
                }
            }
         }

         else
         {
             if(values.size()!=sequance.size())
             {
                 cout<<"eroor: Column mismatch; column info not provided\n";
                 return;
             }

             else
             {
                 for(int i=0;i<sequance.size();i++)
              {
                
                    info+=values[i]+" ";
                    
                }
                }
             }
         
         cout<<info;

        }

}