class MedianFinder {
public:
    /** initialize your data structure here. */
    vector<int> data;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        int left = 0, right = data.size()-1;
        while(left <= right){
            int mid = (left+right)/2;
            if(data[mid] < num) left = mid+1;
            else right = mid-1;
        }
        data.insert(data.begin()+left, num);
    }
    
    double findMedian() {
        int n = data.size();
        if(n%2==1) return data[n/2];
        return (data[n/2-1] + data[n/2])/2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder obj = new MedianFinder();
 * obj.addNum(num);
 * double param_2 = obj.findMedian();
 */
