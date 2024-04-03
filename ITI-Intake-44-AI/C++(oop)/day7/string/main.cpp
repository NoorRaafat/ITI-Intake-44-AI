#include <iostream>
#include <string.h>

using namespace std;
class String
{
    char* str;

public:
    String()
    {
        str=new char[1];
        str[0]='\0';

    }
    String(char* word)
    {
        str=new char[strlen(word)+1];
        strcpy(str,word);

    }
    String(const String& s)
    {
        str = new char[strlen(s.str) + 1] ;
        strcpy(str,s.str);
        str[strlen(s.str)]='\0';
    }


    String operator+(String s)
    {

        String res;
        res.str=new char[strlen(s.str)+strlen(str)+1];
        strcpy(res.str,str);
        strcat(res.str," ");
        strcat(res.str,s.str);
        str[strlen(s.str)+strlen(str)]='\0';
        return res;

    }

    String operator=(String s)
    {
        str=new char[strlen(s.str)+1];
        strcpy(str,s.str);
        str[strlen(s.str)]='/0';

    }
    void print()
    {
        cout<<str;
    }
    int compare(String s)
    {
        int len;
        if(strlen(s.str)>strlen(str))
            len=strlen(s.str);
        else
            len=strlen(str);


        for(int i=0; i<len; i++)
        {
            if(s.str[i]==str[i])
            {
                cout<<" the same";
                return 1;
            }
            else
            {
                cout<<" different";
                return 0;
            }
        }
    }
};
int main()
{
    String s;
    String s1("ali");
    s1.print();
    cout<<"\n";
    String s2("mohamed ");
    s2.print();
    cout<<"\n";
    String s3=s1+s2;
    s3.print();
    String s4(s3);
    cout<<"\n";
    s4.print();
    cout<<"\n";
    s3.compare(s4);
    cout<<"\n";
    s2.compare(s1);



    return 0;
}
