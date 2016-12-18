#include <iostream>
#include <cstring>
#include <locale>
#include "find.h"

using namespace std;

struct verb {
char Infinitive[50]; 
char PastIndefinite[50]; 
char dop[50];
char ParticipleII[50]; 
char Translation[50];
}v;

void find(char *buff){
	FILE *text;
	text = fopen("new.dat", "rb");
	fread(&v,sizeof(v),1,text);
	while(!feof(text)){ 
		if(strcmp(v.Infinitive,buff) == 0){ 
			cout <<"Verb: " << v.Infinitive << " \nTranslation: " << v.Translation  << endl;
			system("pause");
			break;
		}
		if(strcmp(v.PastIndefinite,buff) == 0){ 
			cout <<"Verb: " << v.Infinitive << " \nTranslation: " << v.Translation  << endl;
			system("pause");
			break;
		}
		if(strcmp(v.dop,buff) == 0){ 
			cout <<"Verb: " << v.Infinitive << " \nTranslation: " << v.Translation  << endl;
			system("pause");
			break;
		}
		if(strcmp(v.ParticipleII,buff) == 0){ 
			cout <<"Verb: " << v.Infinitive << " \nTranslation: " << v.Translation  << endl;
			system("pause");
			break;
		}
		fread(&v,sizeof(v),1,text);
	}
	if(feof(text)){ 
	cout << "Error, try again" << endl;
	system("pause");
	}
	fclose(text);
}

