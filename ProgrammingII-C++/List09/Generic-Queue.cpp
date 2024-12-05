#include <iostream>
#include <queue>
using namespace std;

template<typename T>
class Queue {
private:
    queue<T> queue;

public:
    void enqueue(T element) {
        queue.push(element);
    }

    void dequeue() {
        if (!queue.empty()) {
            queue.pop();
        } else {
            cout << "The queue is empty!" << endl;
        }
    }

    bool isEmpty() const {
        return queue.empty();
    }

    void displayQueue() {
        queue<T> temp = queue;
        while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
    }
};

int main() {
    Queue<int> intQueue;
    intQueue.enqueue(1);
    intQueue.enqueue(2);
    intQueue.displayQueue();

    intQueue.dequeue();
    intQueue.displayQueue();

    return 0;
}
