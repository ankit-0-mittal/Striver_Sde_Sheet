void deleteNode(LinkedListNode<int> * node)  

{

// Create a temp pointer that initially points to node -> next.

   LinkedListNode<int> * temp = node->next;

 

   // Store the data of temp as node -> data and make node -> next = temp -> next.

   node -> data = temp -> data;

   node -> next = temp -> next;

 

   // Finally delete the temp pointer.

   delete temp;

}
