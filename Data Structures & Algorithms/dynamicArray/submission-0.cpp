class DynamicArray {
    private:
    vector<int> x;
    int capacity;
    int size;
public:

    DynamicArray(int capacity) {
    this->capacity=capacity;
    this->size=0;
    x.resize(capacity);
    }

    int get(int i) {
     return x[i];
    }

    void set(int i, int n) {
     x[i]=n;
    }

    void pushback(int n) {
      if(size==capacity){
     
       resize();
      }
      x[size]=n;
      size++;
    }

    int popback() {
    size--;
    return x[size];
    }

    void resize() {
      capacity=capacity*2;
      x.resize(capacity);
    }

    int getSize() {
        return size;

    }

    int getCapacity() {
      return capacity;
    }
};
