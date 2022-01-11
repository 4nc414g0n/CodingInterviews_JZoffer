// 输入两个整数序列，第一个序列表示栈的压入顺序，请判断第二个序列是否可能为该栈的弹出顺序。假设压入栈的所有数字均不相等。例如序列1,2,3,4,5是某栈的压入顺序，序列4,5,3,2,1是该压栈序列对应的一个弹出序列，但4,3,5,1,2就不可能是该压栈序列的弹出序列。
// 1.0<=pushV.length == popV.length <=1000
// 2.-1000<=pushV[i]<=1000
// 3.popV 的所有数字均在 pushV里面出现过
// 4.pushV 的所有数字均不相同
class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        stack<int> s;
        int pushi=0,popi=0;
        while(pushi<pushV.size())
        {
            s.push(pushV[pushi++]);
            while(!s.empty()&&popV[popi]==s.top())
            {
                popi++;
                s.pop();
            }
        }
        return s.empty();
    }
};