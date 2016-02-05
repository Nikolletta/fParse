include "math.h"
---------------------
int FuncOpen(UnicodeString path)
{
int rez;
if 	OpenFile(path) rez=1;
	else rez=0;
return rez;	
}

//Открываем файл

OpenFile:A;