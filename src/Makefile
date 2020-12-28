
CFLAGS = -std=c++1z -lstdc++ -Wall -I../src/ -L../

all:
	$(CXX) $(CFLAGS) main.cpp queryProcess/create.cpp queryProcess/validateQuery.cpp queryProcess/delete.cpp queryProcess/executeQuery.cpp queryProcess/global.cpp queryProcess/insert.cpp queryProcess/select.cpp queryProcess/update.cpp include/create.hpp include/delete.hpp include/select.hpp include/insert.hpp include/update.hpp include/global.hpp include/executeQuery.hpp include/validateQuery.hpp util/util.hpp util/util.cpp util/enums.hpp util/datatypes.hpp -o DBPlus -lsqlparser

