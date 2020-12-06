#include <iostream>
#include <cstring> 
using namespace std;

class String 
{
private:
    enum { SZ = 80 }; //size of String objects
    char str[SZ]; 
public:
    String()
    { 
        strcpy(str," ");
    }
    String( char s[] ) 
    { 
        strcpy(str, s); 
    }
    void display() 
    { 
        cout << str; 
    }
    void operator += (String ss) 
    { 
        if( strlen(str) + strlen(ss.str) >= SZ )
        { 
            cout <<"\nString overflow";  
            
        }
        strcat(str, ss.str); 
    }
};
int main()
{
    String s1 = "Hey ";
    String s2 = "Buddy"; 
    String s3;
    cout <<"\ns1="; 
    s1.display();
    cout <<"\ns2="; 
    s2.display(); 
    s1 += s2;
    s3=s1;
    cout <<"\ns3="; s3.display(); 
    cout << endl;
    return 0;
}