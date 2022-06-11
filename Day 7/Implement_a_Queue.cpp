class Node{

public:

int value;

Node* next ;

Node(int val){

 this->value= val;

 this->next = NULL;

}

};

class Queue {

   Node* qfront;

Node* rear;

 

public:

   Queue() {

      qfront = NULL;

   rear = NULL;

   }

 

   /*----------------- Public Functions of Queue -----------------*/

 

   bool isEmpty() {

       if(qfront ==  NULL && rear == NULL){

  return true;

 }

 else{

  return false;

 }

   }

 

   void enqueue(int data) {

 Node* n = new Node(data);

     if(qfront == NULL){

   qfront = n;

   rear = n;

   return;

  }

else{

 rear -> next = n;

 rear = n;

}

   }

 

   int dequeue() {

      if(qfront == NULL){

    return -1;

   }

 Node* temp = qfront;

 qfront = qfront -> next;

 if(qfront == NULL){

  rear = NULL;

 }

 int ans = temp -> value;

 delete(temp);

 return ans;

   }

 

   int front() {

     if(qfront == NULL){

   return -1;

  }

return qfront->value;

   }

};
