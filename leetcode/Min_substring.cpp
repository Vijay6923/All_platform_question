2696
int minLength(string s) {
        stack<char> stack;

        for (int i = 0; i < s.length(); i++) {
            char cur_char = s[i];

            if (not stack.empty() && ((cur_char == 'B' && stack.top() == 'A') or (cur_char == 'D' && stack.top() == 'C'))){
                stack.pop();
            }
            else {
                stack.push(cur_char);
            }
        }
        return stack.size();
    }
