/*This program is to create a stack which does all the operation in O(1) time*/

class Minstack{
    public:

    vector<pair<int,int>> st;
    Minstack()
    {

    }

    void push(int val)
    {
        if(st.empty())
        {
            pair<int,int>p=make_pair(val,val);
            st.push_back(p);
        }
        else{
            pair<int,int>p;
            p.first=val;
            p.second=min(val,st.back().second);
            st.push_back(p);
        }
    }

    void pop()
    {
        st.pop_back();
    }

    int top()
    {
        return st.back().first;
    }

    int getmin()
    {
        return st.back().second;
    }
};