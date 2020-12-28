#include<vector>
#include<string>

#include "/usr/local/include/hsql//sql/statements.h"
#ifndef SELECT_HPP
#define SELECT_HPP



//using namespace std;
namespace dbplus{
    class Select{

        public:
        void selectStatement(const hsql::SelectStatement* stmt);
        
        
    };
    



}






#endif
