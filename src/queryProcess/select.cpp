#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include "../include/select.hpp"
#include"../util/util.hpp"
#include "/usr/local/include/hsql//sql/statements.h"
using namespace std;
using namespace hsql;
namespace dbplus{

    
   //main
    void Select::selectStatement(const hsql::SelectStatement* stmt)
    {
        string table;
        vector<string> columns, exist_columns;
        bool all_field=false;

        my_printSelectStatementInfo(table,columns,stmt,all_field); //extract feilds from stmt
        fillTableColumns(table,exist_columns);

         if(all_field)
         {
             printResult(exist_columns,table);
         }
         else printResult(columns,exist_columns,table);
         
           
    
    }




/*
void my_printOperatorExpression(Expr* expr, uintmax_t numIndent) {
    if (expr == nullptr) {
      cout<<"null "<<endl;
      return;
    }

    //string op=expr->opType;
    cout<<expr->opType<<endl;
    

    my_printExpression(expr->expr, numIndent + 1);
    if (expr->expr2 != nullptr) {
        my_printExpression(expr->expr2, numIndent + 1);
    } else if (expr->exprList != nullptr) {
        for (Expr* e : *expr->exprList) my_printExpression(e, numIndent + 1);
    }
  }
  */

  void my_printExpression(Expr* expr, vector<string> &columns,bool &all_field) {
    if (!expr) return;
    switch (expr->type) {
    case kExprStar:
      all_field = true;
      
      break;
    case kExprColumnRef:
      columns.push_back(expr->name);
     // cout<<"kExprColumnRef "<<expr->name<<endl;
    
      if(expr->table) {
        cout<<"table :"<<expr->table;
        
      }
      break;
      
    default:
      std::cerr << "Unrecognized expression type " << expr->type << std::endl;
      return;
    }
    
  }

void my_printTableRefInfo(TableRef* table, string &tableName) {
    switch (table->type) {
    case kTableName:
    tableName=table->name;
  //  cout<<"from my_printTableRefInfo: "<<table->name<<endl;
    break;

    default:
      std::cerr << "Unrecognized expression type "  << std::endl;
      return;
    }
   
  }

void  my_printSelectStatementInfo(string &table,vector<string> &columns,
 const hsql::SelectStatement* stmt, 
 bool &all_field)
    {
    for (Expr* expr : *stmt->selectList) my_printExpression(expr, columns,all_field);
    if (stmt->fromTable != nullptr) {
    
      my_printTableRefInfo(stmt->fromTable, table);
    }

    if (stmt->whereClause != nullptr) {
     // inprint("Search Conditions:", numIndent + 1);
      my_printExpression(stmt->whereClause, columns,all_field);
    }


}



}