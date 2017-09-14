
#solution1

class Solution {
public:
    void sortColors(vector<int>& nums) {
        len = nums.size();
        quicksort(nums, 0, len-1);
    }
    void quicksort(vector<int>& nums, int left, int right){
        printf("%d %d\n", left, right);
        if(left >= right)
            return;
        int temp = nums[left];
        int i = left, j = right;
        while(left < right){
            while(nums[right]>=temp && left<right)
                right --;
            nums[left] = nums[right];
            while(nums[left]<=temp && left<right)
                left ++;
            nums[right] = nums[left];
        }
        nums[left] = temp;
        
            for(int k = 0; k< len; k++)
                printf("%d ", nums[k]);
            printf("\n");
        printf("%d %d %d\n", i, left, j);
        quicksort(nums, i, left-1);
        quicksort(nums, left+1, j);      
    }
private:
    int len;
};

#solution2
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int len = nums.size();
        int left = 0, right = len - 1;
        int i = 0;
        while(i <= right){
            if(nums[i] == 0){
                swap(nums[i], nums[left]);
                left ++;
                if(nums[i] != 2)
                    i ++;
            }
            else if(nums[i] == 2){
                swap(nums[i], nums[right]);
                right --;
            }
            else
                i ++;
        }
        
    }
};
