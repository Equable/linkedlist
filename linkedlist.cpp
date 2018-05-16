#include <cstdlib>
#include <iostream>

#include "list.h"

using namespace std;

list::list(){
    head = NULL;
    curr = NULL;
    temp = NULL;
}

void list::AddNode(int addData){
    nodePtr newNodePtr = new node;
    newNodePtr->next = NULL;
    newNodePtr->data = addData;

    if(head != NULL){
        curr = head;
        while(curr->next != NULL){ 
            curr = curr->next;
        }
        curr->next = newNodePtr;
    }
    else{
        head = newNodePtr;
    }
}

void list::DeleteNode(int delData){
    nodePtr delPtr = NULL;
    temp = head;
    curr = head;
    while(curr != NULL && curr->data !=delData){
        temp = curr;
        curr = curr->next;
    }
    if(curr == NULL){
        cout << delData << " Was not in the list" << endl;
        delete delPtr;
    }
    else{
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        if(delPtr == head){
            head = head->next;
            temp = NULL;
        }
        delete delPtr;
        cout << "The value " << delData << " was deleted" << endl;
    }
}

void list::printlist(){
    curr = head;
    while(curr != NULL){
        cout << curr->data << endl;
        curr = curr->next;

    }

}