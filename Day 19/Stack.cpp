#include<iostream> 
using namespace std;

class Qnode{
    public:
        int data;
        Qnode* next;

    Qnode(int D){
        this->data = D;
    }
};

class Nqueue{
    public:
        int rear, front, *arr, n= 100;
        Nqueue(int size){
            rear = front = 0;
            arr = new int[size];
        }
    
    void Insert() {
        int val;
        if (rear == n - 1)
            cout<<"Queue Overflow"<<endl;
        else {
            if (front == - 1)
                front = 0;
            cout<<"Insert the element in queue : "<<endl;
            cin>>val;
            rear++;
            arr[rear] = val;
        }
        
    void Delete() {
        if (front == - 1 || front > rear) {
            cout<<"Queue Underflow ";
            return ;
        } 
        else {
            cout<<"Element deleted from queue is : "<< arr[front] <<endl;
            front++;;
        }
    }
    
    void Display() {
        if (front == - 1)
            cout<<"Queue is empty"<<endl;
        else {
            cout<<"Queue elements are : ";
            for (int i = front; i <= rear; i++)
            cout<<arr[i]<<" ";
            cout<<endl;
        }
    }

};

class LLqueue{
    public:
        Qnode *front, *rear;
        LLqueue(){
            front = rear = NULL;
        }
    
        void enQueue(int x)
        {
      
            // Create a new LL node
            Qnode* temp = new Qnode(x);
      
            // If queue is empty, then
            // new node is front and rear both
            if (rear == NULL) {
                front = rear = temp;
                return;
            }
      
            // Add the new node at
            // the end of queue and change rear
            rear->next = temp;
            rear = temp;
        }
    
        void deQueue()
        {
            // If queue is empty, return NULL.
            if (front == NULL)
                return;
      
            // Store previous front and
            // move front one node ahead
            Qnode* temp = front;
            front = front->next;
      
            // If front becomes NULL, then
            // change rear also as NULL
            if (front == NULL)
                rear = NULL;
      
            delete (temp);
        }

};

int main(){  
    cout << "execution of queue with linked list" << endl;
    
    LLqueue q;
    q.enQueue(10);
    q.enQueue(20);
    q.deQueue();
    q.deQueue();
    q.enQueue(30);
    q.enQueue(40);
    q.enQueue(50);
    q.deQueue();
    cout << "Queue Front : " << (q.front)->data << endl;
    cout << "Queue Rear : " << (q.rear)->data;
    
    cout << "execution of queue with arrays" << endl;
    int ch;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter your choice : "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: Insert();
         break;
         case 2: Delete();
         break;
         case 3: Display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);

    return 0;
}};