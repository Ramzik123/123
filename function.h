
enum UserChoice
{
    Exit = 0,
    FillArray = 1,
    PrintArray = 2,
    SearchMin = 3,
    SearchMax = 4,
    SortArray = 5,
    EditArray = 6
};

#ifdef INTEGER
#   ifndef CHAR
#       ifndef DOUBLE
#           define show(arrayInt,size) showArrayInt(arrayInt,size)
#           define fill(arrayInt,size) fillArrayInt(arrayInt,size)
#           define searchMin(arrayInt,size) searchMinInt(arrayInt,size)
#           define searchMax(arrayInt,size) searchMaxInt(arrayInt,size)
#           define sort(arrayInt,size) sortArrayInt(arrayInt,size)
#           define edit(arrayInt,size) editArrayInt(arrayInt,size)
#       endif
#   endif
#elif defined CHAR
#   ifndef INTEGER
#       ifndef DOUBLE
#           define show(arrayChar,size) showArrayChar(arrayChar,size)
#           define fill(arrayChar,size) fillArrayChar(arrayChar,size)
#           define searchMin(arrayChar,size) searchMinChar(arrayChar,size)
#           define searchMax(arrayChar,size) searchMaxChar(arrayChar,size)
#           define sort(arrayChar,size) sortArrayChar(arrayChar,size)
#           define edit(arrayChar,size) editArrayChar(arrayChar,size)
#       endif
#   endif
#elif defined DOUBLE
#   ifndef INTEGER
#       ifndef CHAR
#           define show(arrayDouble,size) showArrayDouble(arrayDouble,size)
#           define fill(arrayDouble,size) fillArrayDouble(arrayDouble,size)
#           define searchMin(arrayDouble,size) searchMinDouble(arrayDouble,size)
#           define searchMax(arrayDouble,size) searchMaxDouble(arrayDouble,size)
#           define sort(arrayDouble,size) sortArrayDouble(arrayDouble,size)
#           define edit(arrayDouble,size) editArrayDouble(arrayDouble,size)
#       endif
#   endif
#endif

void showArrayInt(int* arrayInt, int size);
void showArrayChar(char* arrayChar, int size);
void showArrayDouble(double* arrayDouble, int size);

void fillArrayInt(int*& arrayInt, int size);
void fillArrayChar(char*& arrayChar, int size);
void fillArrayDouble(double*& arrayDouble, int size);

void searchMinInt(int* arrayInt, int size);
void searchMinChar(char* arrayChar, int size);
void searchMinDouble(double* arrayDouble, int size);

void searchMaxInt(int* arrayInt, int size);
void searchMaxChar(char* arrayChar, int size);
void searchMaxDouble(double* arrayDouble, int size);

void sortArrayInt(int*& arrayInt, int size);
void sortArrayChar(char*& arrayChar, int size);
void sortArrayDouble(double*& arrayDouble, int size);

void editArrayInt(int*& arrayInt, int size);
void editArrayChar(char*& arrayChar, int size);
void editArrayDouble(double*& arrayDouble, int size);

