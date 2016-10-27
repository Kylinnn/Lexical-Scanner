class Solution {
public:
    void reverseWords(string &s) {
        int n = s.size();
    	string result;
    	for(int i=n-1; i>=0; i--)   // Time O(n)
    	{
    		if(s[i] != ' ')
    		{
    			int tail = i;
    			while(i >= 0 && s[i] != ' ')
    			{
    				i--;
    			}
    			string sub = s.substr(i+1, tail-i);
    			result = result + sub + " ";
    		}
    	}
    	if(!result.empty())
    	{
    		result.pop_back();
    	}
    	s = result;
    }
};