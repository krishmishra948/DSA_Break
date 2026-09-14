class Solution {
public:
    string reverseOnlyLetters(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {

            // left agar letter nahi hai
            if (!isalpha(s[left])) {
                left++;
            }

            // right agar letter nahi hai
            else if (!isalpha(s[right])) {
                right--;
            }

            // dono letters hain
            else {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};