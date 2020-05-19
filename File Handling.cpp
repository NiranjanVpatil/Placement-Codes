# include<iostream>
# include<fstream>
# include<string.h>

using namespace std;

int main()
{
	ofstream fout;
	fout.open("File1");
	
	fout<<"My Nmae is Niru.\n";
	fout<<"I am 20 years old.\n";
	
	fout.close();
	
	ifstream fin;
	fin.open("File1");
	
	char str1[40];
	char str2[40];
	
	int i = 0;
	int j = 0;
	
	fout.open("File2");
	
	while(fin)
	{
		fin.getline(str1,40);
		while(str1[i] == '\0')
		{
		  if(str1[i] == ' ')
		  {
		     continue;
		  }	
		  else
		  {
		  	str2[j] = str1[i];
		  	j++;
		  }
		  i++;
		}
		fout<<str2<<"\n";		
	}
	
	fin.close();
	fout.close();
	
	return 0;
}
