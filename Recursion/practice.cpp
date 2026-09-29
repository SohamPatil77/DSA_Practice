// Reverse Stack using Recursion code. reverse a stack using another temporary stack.

#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int>& st, int x)
{
    if (st.empty())
    {
        st.push(x);
        return;
    }

    int top = st.top();
    st.pop();

    insertAtBottom(st, x);

    st.push(top);
}

void reverseStack(stack<int>& st)
{
    if (st.empty())
        return;

    int top = st.top();
    st.pop();

    reverseStack(st);

    insertAtBottom(st, top);
}

int main()
{
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverseStack(st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}

//  optimal --------------------------------------------------- 

#include <iostream>
using namespace std;

int reverseNumber(int n, int ans)
{
    if (n == 0)
        return ans;

    ans = ans * 10 + n % 10;

    return reverseNumber(n / 10, ans);
}

int main()
{
    cout << reverseNumber(1234, 0);
    return 0;
}

// insertAtBottom -------------------------------------------------

void insertBottom(stack<int>& st, int element)
{
    // Base case
    if (st.empty())
    {
        st.push(element);
        return;
    }

    // Remove the top element
    int top = st.top();
    st.pop();

    // Recursively go to the bottom
    insertBottom(st, element);

    // Put the removed element back
    st.push(top);
}