#include <bits/stdc++.h> 
/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

int findIntersection(Node *firstHead, Node *secondHead)

{

   if(firstHead == NULL || secondHead == NULL) return -1;

   

   Node* temp1 = firstHead;

   Node* temp2 = secondHead;

   

   map<Node*,bool> visited;

   visited[firstHead] = true;

   while(temp1!=NULL) {

       visited[temp1] = true;

       temp1 = temp1->next;

   }

   

   while(temp2!=NULL){

       if(visited[temp2]==true) return temp2->data;

       else temp2=temp2->next;

   }

   

   return -1;

   

}

   
