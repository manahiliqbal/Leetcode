class MyCircularQueue {
private:
    int * q;
    int size;
    int front;
    int rear;    
public:
    MyCircularQueue(int k) {
        size = k;
        q = new int [size];
        front = rear = -1;      
    }
    ~MyCircularQueue()
    {
        delete [] q;
    }
    bool enQueue(int value) {
        if (isFull())
          return false;
        else
        {
           if (isEmpty())
              front = 0;
           rear = (rear+1)%size;
           q [rear] = value; 
           return true;               
        }
    }
    
    bool deQueue() {
        if (isEmpty())
          return false;
        else
        {
            if (rear == front)
               rear = front = -1;
            else   
               front = (front+1)%size; 
            return true;            
        }  
    }
    
    int Front() {
        if (isEmpty())
           return -1;
        return q[front];        
    }
    
    int Rear() {
        if (isEmpty())
           return -1;
        return q[rear];
    }
    
    bool isEmpty() {
        return (front == -1);
    }
    
    bool isFull() {
        return (front == (rear+1)%size);
    }
};