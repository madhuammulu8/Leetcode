class Solution {
public:
    int addDigits(int num) {
        int boss=0;
        while(num>0)
        {
        boss += num%10;
        num = num/10;
                        // cout<<num<<endl;
         if(num == 0 && boss>9)
        {
             num = boss;
             boss=0;
        }}
        return boss;
    }
};