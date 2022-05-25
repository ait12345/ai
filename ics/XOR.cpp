#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    char str[]="Hello World";
    int i,len;
    len = strlen(str);
    
    for(int i=0;i<len;i++)
	{
        int original, modified;
        original = str[i];
        modified = str[i]&127;
        cout<<str[i]<<"         "<<original<<"     "<<modified<<"       "<<(char)modified<<endl;
    }
    printf("\n");
    
    for(int i=0;i<len;i++)
	{
        int original, modified;
        original = str[i];
        modified = str[i]^127;
        cout<<str[i]<<"         "<<original<<"     "<<modified<<"       "<<(char)modified<<endl;
    }
   
    for(int i=0;i<len;i++)
	{
        int original, modified;
        original = str[i];
        modified = str[i]|127;
       cout<<str[i]<<"           "<<original<<"     "<<modified<<"       "<<(char)modified<<endl;
    }
return 0;
}
