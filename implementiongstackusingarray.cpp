#include <bits/stdc++.h> 
// Stack class.
class Stack {
    public:
    int* array;
    int nextindex;
    int capacity;

    
public:
    
    Stack(int capacity) {
        // Write your code here.
        array=new int[capacity];
        nextindex=0;
        this->capacity=capacity;
    }

    void push(int num) {
        // Write your code here.
        if (nextindex == capacity) {
        return;}
        array[nextindex]=num;
        nextindex++;
    }

    int pop() {
        // Write your code here.
        if (nextindex == 0) {
        return -1;}
        int temp=array[nextindex-1];
        nextindex--;
        return temp;
    }
    
    int top() {
        // Write your code here.
        if (nextindex == 0) {
        return -1;}
        return array[nextindex-1];
    }
    
    int isEmpty() {
        // Write your code here.
        return nextindex==0;
    }
    
    int isFull() {
        // Write your code here.
        if (nextindex == capacity) {
        return 1;
        } else {
        return 0;}
    }
    
};
/*#include <bits/stdc++.h> 
// Stack class.
class Stack {
    public:
    int* data;
    int nextIndex;
    int capacity;
    
public:
    
    Stack(int capacity) {
        data = new int[capacity];
        nextIndex = 0;
        this->capacity = capacity;
    }

    void push(int num) {
        if(nextIndex == capacity) return;

        data[nextIndex] = num;
        nextIndex++;
    }

    int pop() {
        if(nextIndex == 0) return -1;
        int temp = data[nextIndex - 1];
        nextIndex--;
        return temp;
    }
    
    int top() {
        if(nextIndex == 0) return -1;
        return data[nextIndex - 1];
    }
    
    int isEmpty() {
        return nextIndex == 0;
    }
    
    int isFull() {
        if(nextIndex == capacity) return 1;
        else return 0; 
    }
    
};*/
