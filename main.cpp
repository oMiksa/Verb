#include <iostream>
#include <cstring>
#include <locale>
#include "find.h"

using namespace std;

main(){    
	char index;
	char buff[250];
	while(1){
		system("cls");
		cout << "***Irregular Verbs***" << endl;
		cout << "Enter the verb(English input, no more than 12 characters): ";
		cin.getline(buff, 250);
		for(int i(0); i < strlen(buff); i++){ 
			index = buff[i];
			buff[i] = (char)tolower(index);
		}
		find(buff);
	}
}
