// created by Sanche 
#include<fstream>
#include<iostream>
using namespace std;

class File_handler
{
private:
		 ifstream  file_input;
		 ofstream output_file;
		 streampos  sizeoffile;

public:
		//Setters.
		File_handler(string filename):file_input(filename)
		{
			//Opeinng of the file 
			
			if(file_input != '\0')
				{
					//fostream foh = fopen(filename);
					sizeoffile = file_input.tellg();
				}
			
				//Logger("DEBUG::ERR Unable to open the File");
		
		}

		// This read file will give array of string containing each line of xml 
		string* read_frm_file()
		{
		
			//Logger("DEBUG::Reading is done from  the File");
		}

		void write_to_file()
		{
		
		
		}
		
		void setFileBuffer()
		{
		
		
		}


};