class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
            // early simulation !!! optimal solution 
        int n = digits.size();

        for(int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                // No carry needed, increment and return
                digits[i]++;
                return digits;
            }
        
            // Current digit is 9, set to 0 and carry to next
            digits[i] = 0;
        }

        // All digits were 9, need a longer array
        digits.insert(digits.begin(), 1);
        return digits;
        }
        
};
