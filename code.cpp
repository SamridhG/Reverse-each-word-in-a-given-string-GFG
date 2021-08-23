class Solution
{
  public:
    string reverseWords (string s)
    {
        //code here.
        stack<char>A;
        string res;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='.')
            {
                while(!A.empty())
                {
                    char c=A.top();
                    A.pop();
                    res=res+c;
                    
                }
                res=res+'.';
            }
            else
            {
                A.push(s[i]);
            }
        }
         while(!A.empty())
                {
                    char c=A.top();
                    A.pop();
                    res=res+c;
                    
                }
            
                return res;
    }
};
