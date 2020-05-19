#include<iostream>
#include<string.h>

using namespace std;

int main()
{
char word_1[80];
char word_2[80];

cin.getline(word_1,80);
cin.getline(word_2,80);

cout<<word_1<<endl;
cout<<word_2<<endl;

int key_click_1 = 1;
int key_click_2 = 1;

int fing_mov_1 = 0;
int fing_mov_2 = 0;

char KEY_1[] = "_,@";
    char KEY_2[] = "ABC";
    char KEY_3[] = "DEF";
    char KEY_4[] = "GHI";
    char KEY_5[] = "JKL";
    char KEY_6[] = "MNO";
    char KEY_7[] = "PQRS";
    char KEY_8[] = "TUV";
    char KEY_9[] = "WXYZ";
    char KEY_STAR[] = "-";
    char KEY_0[] = " ";
    char KEY_HASH[] = " ";

     int ptr_1 = 0;
     int next_ptr_1 = 0; 
for(int i = 0; i < strlen(word_1); i++)
{
char c;
c = word_1[i];
int val = 0;
val = int(c);


if(val >= 65 && val <= 67)
{
if(ptr_1 == 0)
{
ptr_1 = 2;
for(int j = 0; j < 3; j++)
{
if(word_1[i] == KEY_1[j])
{
break;
}
else
{
key_click_1++;
}
}
}
else
{
next_ptr_1 = 2;
if(ptr_1 == next_ptr_1)
{
continue;
}
else
{
  fing_mov_1++;
  ptr_1 = next_ptr_1;
}

}
}


}
int ptr_2 = 0;
     int next_ptr_2 = 0; 
for(int n = 0; n < strlen(word_2); n++)
{
char d;
d = word_2[n];
int val_1 = 0;
val_1 = int(d);


if(val_1 >= 65 && val_1 <= 67)
{
if(ptr_2 == 0)
{
ptr_2 = 2;
for(int j = 0; j < 3; j++)
{
if(word_2[j] == KEY_1[j])
{
break;
}
else
{
key_click_2++;
}
}
}
else
{
next_ptr_2 = 2;
if(ptr_2 == next_ptr_2)
{
continue;
}
else
{
  fing_mov_1++;
}
ptr_2 = 2;
}
}
}


cout<<key_click_1<<endl;
cout<<key_click_2<<endl;

return 0;

 } 
 
