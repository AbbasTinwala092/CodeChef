/*You are given a binary string S and an integer K. In one operation, you can pick any bit and flip it, i.e turn 0 to 1 or 1 to 0. Can you make the string S a palindrome using exactly K operations?
Print YES if this is possible, and NO if it is not.*/

#include <iostream>
#include <string.h>
using namespace std;

int ForPalindrome(string s)
{
    int count = 0;
    int l=0;
    int r = s.size()-1;
    while(l<r)
    {
        if(s[l] != s[r])
            count++;
            
        l++;
        r--;
    }
    return count;
}

int main()
{
    int T;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        int N, K;
        cin>>N>>K;
        string binary;
        cin>>binary;
        
        if(K == ForPalindrome(binary))
            cout<<"YES"<<endl;
            
        else if(K>ForPalindrome(binary))
        {
            if(binary.size()%2 == 1)
                cout<<"YES"<<endl;
                
            else if(binary.size()%2 == 0)
            {
                if((K - ForPalindrome(binary)) % 2 == 0)
                {
                    cout<<"YES"<<endl;
                }
                else 
                    cout<<"NO"<<endl;
            }
            
        }
        else 
            cout<<"NO"<<endl;
        
    }
    
    
}

