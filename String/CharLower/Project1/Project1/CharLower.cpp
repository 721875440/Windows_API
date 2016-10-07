#include <stdio.h>
#include <windows.h>
#include <tchar.h>

int main(){

	TCHAR singleChar = _T('A');
	singleChar = (TCHAR)CharLower( (LPTSTR)singleChar );
	// singleChar is now 'a'


	printf(TEXT("%s"),singleChar); 

	
	

	TCHAR someChars[] = _T("ABcd");
	CharLower(someChars);
	// someChars is now "abcd"











	system("pause");


	return 0;
}