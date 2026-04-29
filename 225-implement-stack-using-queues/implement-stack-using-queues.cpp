 
class MyStack {
public:
    queue<int> q1, q2;

    void push(int x) {
        q2.push(x);

        // move all elements from q1 → q2
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        // swap q1 and q2
        swap(q1, q2);
    }

    int pop() {
        int val = q1.front();
        q1.pop();
        return val;
    }

    int top() {
        return q1.front();
    }

    bool empty() {
        return q1.empty();
    }
};