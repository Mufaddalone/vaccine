#include <iostream>
#include <cstring> 
using namespace std;

class String 
{
    private:
            enum { size = 80 }; 
            char str[size]; 
    public:
            String()
            { 
                strcpy(str," ");
            }
            String(char s[]) 
            {    
                strcpy(str,s); 
            }
            void display() 
            { 
                cout<<str; 
            }
            void operator += (String s) 
            { 
                if( strlen(str) + strlen(s.str) >=size)
                    cout <<"String Overflow";   
            }
            strcat(str,s.str);
};
int main()
{
    String s1 = "Hey ";
    String s2 = "Buddy"; 
    String s3;
    cout <<"String 1="<<s1.display();
    cout <<"String 2="<<s2.display(); 
    s1+=s2;
    s3=s1;
    cout <<"String 3="<<s3.display(); 
    cout<<endl;
    return 0;
}