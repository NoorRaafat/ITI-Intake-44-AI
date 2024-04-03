#include <iostream>

using namespace std;
class My_string
{
    char *str;
    unsigned int size;
public:
    My_string()
    {
        size = 1;
        str = new char[size];
        str[0]='\0';
    }
    My_string(char *s )
    {
        int len = 0;
        while (s[len] != '\0')
        {
            len++;
        }
        size = len;
        str = new char[size + 1];
        for (int i = 0; i < size; ++i)
        {
            str[i] = s[i];
        }
        str[size] = '\0';
    }
    My_string( My_string const &s)
    {
        size = s.size;
        str = new char[size + 1];

        for (int i = 0; i < size; ++i)
        {
            str[i] = s.str[i];
        }
        str[size] = '\0';
    }
    char* Get_str()
    {
        return str;
    }
    My_string strcpy(My_string s1)
    {
        int len = 0;
        while (s1.str[len] != '\0')
        {
            len++;
        }
        size = len;
        delete [] str;
        str = new char[size + 1];
        int i=0;
        while (s1.str[i] != '\0')
        {
            str[i] = s1.str[i];
            i++;
        }
        str[size] = '\0';
        return *this;
    }
    void strcpy(char* s1)
    {
        int len = 0;
        while (s1[len] != '\0')
        {
            len++;
        }
        size = len;
        delete [] str;
        str = new char[size + 1];
        int i=0;
        while (s1[i] != '\0')
        {
            str[i] = s1[i];
            i++;
        }
        str[size] = '\0';
    }
    void strcat(My_string s1)
    {
        int len = 0,x = 0;
        while (str[len] != '\0')
        {
            len++;
        }
        while (s1.str[x] != '\0')
        {
            x++;
        }
        size = len+x;
        int i=0;
        while (s1.str[i] != '\0')
        {
            str[len] = s1.str[i];
            i++;
            len++;
        }
        str[size] = '\0';
    }
    int strcmp(My_string s)
    {
        int i=0;
        while(str[i]!='\0'&&s.str[i]!='\0')
        {
            if(str[i]!=s.str[i])
                return 1;
            i++;
        }
        return 0;
    }
    int strlen()
    {
        int counter=0;
        while(str[counter]!='\0')
        {
            counter++;
        }
        return counter;
    }
    ~My_string()
    {
        delete [] str;
    }


};
int main()
{
    My_string  s1("amina"),s2("abdelbaqi"),s3(" amina ");
    cout<<"s1 = ";
    cout<<s1.Get_str();
    cout<<"\nlenght of s1 : ";
    cout<<s1.strlen();
    s1.strcpy("mohamed");
    cout<<"\nusing strcpy(s1,mohamed) = ";
    cout<<s1.Get_str();
    cout<<"\ns1 = "<<s1.Get_str()<<"  s2 = "<<s2.Get_str() ;
    cout<<"\nusing strcat(s1,s2) so s1 = ";
    s1.strcat(s2);
    cout<<s1.Get_str();
    if(s1.strcmp(s2)==0)
        cout<<"\ns1 =s2 ";
    else
        cout<<"\ns1 !=s2 ";
    s1.strcpy(s3);
    cout<<"\nusing strcpy(s1,s3) = ";
    cout<<s1.Get_str();
    return 0;
}
