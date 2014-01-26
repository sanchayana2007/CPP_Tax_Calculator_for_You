// created by Sanche 

Class File_handler
{
private:
		 fstream  file_input;
		 fstream output_file;

public:
		//Setters.
		File_handler(string filename)
		{
			//Opeinng of the file 
			fstream fh = fopen(filename, "+w");
			if(fh != '\0')
				fostream foh = fopen(filename, "+w");
			else
				Logger("DEBUG::ERR Unable to open the File");
		
		}

		// This read file will give array of string containing each line of xml 
		string [] read_frm_file()
		{
		
			Logger("DEBUG::Reading is done from  the File");
		}

		void write_to_file()
		{
		
		
		}
		
		void setFileBuffer()
		{
		
		
		}


};