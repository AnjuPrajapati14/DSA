//insert link at the first location
void insertFirst(int key, int data) {
//create a link
   struct node *link = (struct node*) malloc(sizeof(struct node));
   link->key = key;
   link->data = data;
	
   if(isEmpty()) {
      //make it the last link
      last = link;
   } else {
      //update first prev link
      head->prev = link;
   }

   //point it to old first link
   link->next = head;
	
   //point first to new first link
   head = link;
}
 

//delete first item
struct node* deleteFirst() {

   //save reference to first link
   struct node *tempLink = head;
	
   //if only one link
   if(head->next == NULL) {
      last = NULL;
   } else {
      head->next->prev = NULL;
   }
	
   head = head->next;
	
   //return the deleted link
   return tempLink;
}

//insert link at the last location
void insertLast(int key, int data) {

   //create a link
   struct node *link = (struct node*) malloc(sizeof(struct node));
   link->key = key;
   link->data = data;
	
   if(isEmpty()) {
      //make it the last link
      last = link;
   } else {
      //make link a new last link
      last->next = link;     
      
      //mark old last node as prev of new link
      link->prev = last;
   }

   //point last to new last node
   last = link;
}

/* 

insertFirst(data):
Begin
   create a new node
   node -> data := data
   if the list is empty, then
      head := node
      next of node = head
   else
      temp := head
      while next of temp is not head, do
      temp := next of temp
      done
      next of node := head
      next of temp := node
      head := node
   end if
End
Deletion Operation
Following code demonstrates the deletion operation in a circular linked list based on single linked list.

deleteFirst():
Begin
   if head is null, then
      it is Underflow and return
   else if next of head = head, then
      head := null
      deallocate head
   else
      ptr := head
      while next of ptr is not head, do
         ptr := next of ptr
      next of ptr = next of head
      deallocate head
      head := next of ptr
   end if
End
Display List Operation
Following code demonstrates the display list operation in a circular linked list.

display():
Begin
   if head is null, then
      Nothing to print and return
   else
      ptr := head
      while next of ptr is not head, do
         display data of ptr
         ptr := next of ptr
      display data of ptr
   end if
End 

*/