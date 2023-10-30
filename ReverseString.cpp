#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[100]={"hello world"};
   int i=0;
   int len_a = strlen(a);
   int j = len_a-1;
   while(i<=j)
   {
     swap(a[i],a[j]);
     i++;
     j--;
   }
   cout<<a<<endl;

}
