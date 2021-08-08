#include<iostream>
using namespace std;
string getstring(int d)
{
    if(d==2)
    {
        return "abc";
    }
    if(d==3)
    {
        return "def";
    }
    if(d==4)
    {
        return "ghi";
    }
    if(d==5)
    {
        return "jkl";
    }
    if(d==6)
    {
        return "mno";
    }
    if(d==7)
    {
        return "pqrs";
    }
    if(d==8)
    {
        return "tuv";
    }
    if(d==9)
    {
        return "wxyz";
    }
    return " ";
}
int keypad(int num, string output[])
{
    if(num==0)
    {
        output[0]=" ";
        return 1;
    }
    int lastdigit=num%10;
    int smallnumber=num/10;
    int smalloutputsize=keypad(smallnumber,output);
    string options=getstring(lastdigit);
    //copy for string
    for(int i=0;i<options.length()-1;i++)
    {
        for(int j=0;j<smalloutputsize;j++)
        {
            output[j+(i+1)*smalloutputsize]=output[j];
        }
    }
    //for appending the character
    int k=0;
    for(int i=0;i<options.length();i++)
    {
        for(int j=0;j<smalloutputsize;j++)
        {
            output[k]=output[k]+output[i];   //first a will be added the b the depending on the lastdigit
            k++;
        }
    }
    return options.length()*smalloutputsize;
}
int main()
{
    string num;
    cin>>num;
    string output[10000];
    int count=keypad(num,output);
    for(int i=0;i<count;i++)
    {
        cout<<output[i]<<endl;
    }
}
