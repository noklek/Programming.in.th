#include<iostream>
#include <stdio.h>
#include<string>
#include<ctype.h>
 using namespace std;

 int main()
 {

    string text ;
    cin>>text;

    int length_text = text.length();


    char char_index[10000];
        for(int i = 0; i< text.length(); i++)
        {
            char_index[i]=text.at(i);
        }


    if (length_text > 10000)
    {

    }
    else
    {
        int lower=0,upper=0,mix =0;
        for (int j = 0; j<text.length(); j++)
        {
            if(islower(char_index[j]))
            {
                lower++;
            }
            else
            {
                upper++;
            }
        }
            if(lower > 0 && upper > 0)
            {
               cout<<"Mix";
            }
            else if (upper > 0)
            {
                cout<<"All Capital Letter";
            }else if (lower > 0)
            {
                cout<<"All Small Letter";
            }
    }

    return 0;
 }
