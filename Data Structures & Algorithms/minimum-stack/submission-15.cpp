class MinStack {
private:
    int data[1000000] = {0};
    int mins[1000000] = {0};
    int index;
    int mindex;
    int topNum;
public:
    MinStack() {
        index = 0;
        mins[0] = INT_MAX;
        mindex = 1;
    }
    
    void push(int val) {
        data[index] = val;
        index++;
        topNum = val;
        if (val <= mins[mindex - 1]) {
            mins[mindex] = val;
            mindex++;
        }
    }
    
    void pop() {
        if (index == 0) {
            return;
        }
        index--;
        if (mins[mindex - 1] == data[index]) {
            mins[mindex - 1] = 0;
            mindex--;
        }
        data[index] = 0;

        if (index > 0) {
            topNum = data[index - 1];
        }
    }
    
    int top() {
        return topNum;
    }
    
    int getMin() {
        return mins[mindex - 1];
    }
};
