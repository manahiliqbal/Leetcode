class RecentCounter {
public:
    int count;
    queue<int> requests;
    RecentCounter() {
        count = 0;
    }
    
    int ping(int t) {
        requests.push(t);
        while (!requests.empty() && requests.front() < t - 3000) {
            requests.pop();
        }
        count = requests.size();
        return count;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
