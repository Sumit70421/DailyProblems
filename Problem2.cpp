// Given a string ‘S’ comprising of some brackets. You need to print the number of every bracket.
// For Example
// Sample Input 1
// 2
// ab(cd)(e)
// (zyz)
// Sample Output 1
// 1 1 2 2
// 1 1



#include <stack>
#include <string.h>
using namespace std;
vector<int> bracketNumber(string &S)
{
    int count=0;
    vector<int>res;
    stack<int>num;
    for(int i=0;i<S.length();i++){
        if(S[i]=='('){
            count++;
            res.push_back(count);
            num.push(count);
        }
        else if(S[i]==')'){
            int pop=num.top();
            num.pop();
            res.push_back(pop);                         
        }
    }
	return res;
}
