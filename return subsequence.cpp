#include<iostream>
using namespace std;
int subs(int input,int output[])
{
    if(input==0)
    {
        output[0]=" ";
        return 1;
    }
    string smallString=input.substr(1);
    int smallOutput=subs(smallString,output);
    for(int i=0;i<smallString;i++)
    {
        output[i+smallOutput]=input[0]+output[i];
    }
    return 2*smallOutput;
}
int main()
{
    string input;
    cin>>input;
    string output=nem string[1000];
    int count=subs(input,output);
    for(int i=0;i<count;i++)
    {
        cout<<output[i]<<endl;
    }
}

