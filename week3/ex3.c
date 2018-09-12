#include <stdio.h>

typedef struct node{
    int data;
    struct node* next;
}

//  insert a new element after some existing element
node* insert_node(node* head, int data) {
    node *cursor = head;
    while(cursor->next != NULL) {
        cursor = cursor->next;
    }
    node* new_node =  create(data,NULL);
    cursor->next = new_node;
    return head;
}

// delete a certain element
node* delete_node(node* head, node* nd) {
    if(nd == head) {
        head = remove_front(head);
        return head;
    }
    if(nd->next == NULL) {
        head = remove_back(head);
        return head;
    }
    node* cursor = head;
    while(cursor != NULL) {
        if(cursor->next = nd)
            break;
        cursor = cursor->next;
    }
    if(cursor != NULL) {
        node* tmp = cursor->next;
        cursor->next = tmp->next;
        tmp->next = NULL;
    }
    return head;
}

// print out the value of each element
void  print_list() {
   struct node *ptr = head;
   while(ptr != NULL) {
      printf("%d ", ptr->data);
      ptr = ptr->next;
   }
}

int main() {
    return 0;
}