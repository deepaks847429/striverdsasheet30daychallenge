#include <bits/stdc++.h> 
void sortStack(stack<int> &stack)
{
	// Write your code here
        vector<int>v;
        while (stack.empty() ==0) {
        v.push_back(stack.top());
		stack.pop();
		}
		sort(v.begin(), v.end());
                for (int i = 0; i < v.size(); i++) {
                stack.push(v[i]);}
}
