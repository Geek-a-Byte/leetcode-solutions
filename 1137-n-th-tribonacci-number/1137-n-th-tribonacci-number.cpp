class Solution {
public:
long long int tribonacci(int n) {
         // fib -> 1 1 2 3 5
        // pos -> 1 2 3 4 5
        long long int n1 =0;
        long long int n2 =1;
        long long int n3 =1;
        int cnt = 0;
        while(cnt < n){
            long long int n4 = n1+n2+n3; 
            n1 = n2; 
            n2 = n3;
            n3 = n4;
            cnt++;
        }
        return n1;
    }
};