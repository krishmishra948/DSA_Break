class Solution {
public:
    string reversePrefix(string word, char ch) {
       // step 1 find the first occurence of ch
       int index =-1;
       for(int i=0;i<word.length();i++){
         if(word[i]==ch){
            index =i;
            break;
         }
       } 
       // ch is not present 
       if(index==-1) return word;
       //step 2 reverse using two pointers 
       int left=0;
       int right= index;
       while(left < right){
        swap(word[left],word[right]);
        left++;
        right--;
       }
        return word;
    }
};