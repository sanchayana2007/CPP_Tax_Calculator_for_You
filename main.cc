// created by Sanche 
#include<iostream>
#include<conio.h>
#include "File_handler.cc"

using namespace std;



int main()
{
	File_handler file("input.xml");
	
	xmlParser xp = xmlParser(file.read_frm_file());



	cout<<"hello world";
	getch();
	
}