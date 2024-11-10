#include <vector>
#include <string>
#include <stack>

class Solution {
public:
    int calPoints(std::vector<std::string>& operations) {
        std::stack<int> st;
        
        for (const auto& op : operations) {
            if (op == "C") {
                // Remove the last score
                if (!st.empty()) {
                    st.pop();
                }
            } else if (op == "D") {
                // Double the last score
                if (!st.empty()) {
                    int top = st.top();
                    st.push(top * 2);
                }
            } else if (op == "+") {
                // Sum of the last two scores
                if (st.size() >= 2) {
                    int top1 = st.top();
                    st.pop();
                    int top2 = st.top();
                    st.push(top1);
                    st.push(top1 + top2);
                }
            } else {
                // Push the integer score
                st.push(std::stoi(op));
            }
        }
        
        // Calculate total sum
        int sum = 0;
        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }
        
        return sum;
    }
};
