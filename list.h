
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class list{
  private:
    typedef struct node
    {
        int data;
        node *next;
    } * nodePtr;

    nodePtr head;
    nodePtr curr;
    nodePtr temp;

  public:
    list();
    void AddNode(int addData);
    void DeleteNode(int delData);
    void printlist();
};

#endif