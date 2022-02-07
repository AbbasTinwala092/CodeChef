/*
Michael Simkin, a postdoctoral fellow at Harvard University’s Center of Mathematical Sciences and Applications proved that for a large value of N, there are approximately (0.143⋅N)N configurations in which N queens can be placed on a N×N chessboard so that none attack each other.

Although the formula is valid for large N, Chef is interested in finding the value of function f(N) = (0.143⋅N)N for a given small value of N. Since Chef is busy understanding the proof of the formula, please help him calculate this value.

Print the answer rounded to the nearest integer. That is, if the actual value of f(N) is x,

Print ⌊x⌋ if x−⌊x⌋<0.5
Otherwise, print ⌊x⌋+1
where ⌊x⌋ denotes the floor of x.

Sample Input 1 
2
4
10
Sample Output 1 
0
36
Explanation
Test case 1: f(N)=(0.143⋅4)^4=0.107, which when rounded to nearest integer gives 0.

Test case 2: f(N)=(0.143⋅10)^10=35.7569, which when rounded to nearest integer gives 36.*/


#include <iostream>
using namespace std;

int main()
{
    int T;
    int n;
    const float fixed = 0.143;
    float ans = 1.0;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        ans = 1.0;
        cin>>n;
        float temp = fixed*n;
        for(int j=0; j<n;j++)
        {
            ans = ans * temp;
        }
        
        if(ans - int(ans) < 0.5)
            cout<<int(ans)<<endl;
        else if(ans - int(ans) > 0.5)
            cout<<int(ans)+1<<endl;
    }
    
}
