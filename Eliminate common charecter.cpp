#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char s1[80];
	char s2[80];
	
	cout<<"Enter S1"<<endl;
	cin.getline(s1,80);
	
	cout<<"Enter S2"<<endl;
	cin.getline(s2,80);
	
	int freq1[26];
	int freq2[26];
	
	int c1[26];
	int c2[26];
	
	char a1[26];
	char a2[26];
	
	int index1 = 0;
	int index2 = 0;
	memset(freq1,0,sizeof(freq1));
	
	memset(freq2,0,sizeof(freq2));
	
	int len1;
	len1 = strlen(s1);
	
	int len2;
	len2 = strlen(s2);
	
	for(int i = 0; i < len1; i++)
	{
		freq1[s1[i] - 'a']++;
	}
	
	for(int k = 0; k < len1; k++)
	{
		if( freq1[s1[k] - 'a'] != 0 )
		{
			a1[index1++] = s1[k];
			c1[index1++] = freq1[s1[k] - 'a'];
			freq1[s1[k] - 'a' ]= 0;
		}
	}
	
	for(int j = 0; j < len2; j++)
	{
		freq2[s2[j] - 'a']++;
	}
	
	for(int l = 0; l < len2; l++)
	{
		if( freq2[s2[l] - 'a'] != 0 )
		{
			a2[index2++] = s2[l];
			c2[index2++] = freq2[s2[l] - 'a'];
			freq2[s2[l] - 'a' ]= 0;
		}
	}
	int val = 0;
	
	for(int m = 0; m < index1; m++)
	{ 
       for(int n = 0; n < index2; n++)
		{
	        if(a1[m] == a2[n])
			{
			  val = c1[m] - c2[n];
			  if(val > 0)
			  {
			    cout<<a1[m]; 	
			 }	
			}	   			
		}
	
	}
	
	return 0;
	
}
