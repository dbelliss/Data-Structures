//
//  linkedlist.cpp
//  Linked List
//
//  Created by Davey Jay Belliss on 6/20/16.
//  Copyright © 2016 Davey Jay Belliss. All rights reserved.
//
#include "linkedlist.hpp"


list::list()
{
    head = nullptr;
    tail = nullptr;
}

void list::addNode(int data)
{
    node* newNode = new node(data);
    
    
    if (head == nullptr )
    {
        head = newNode;
        tail = newNode;
        return;
    }
    
    
    tail->next = newNode;
    tail = newNode;
    
};

void list::print()
{
    if (head == nullptr)
    {
        cout << "Nothing in list" << endl;
        return;
    }
    else
    {
        
        node* curNode = head;
        while (curNode != nullptr)
        {
            curNode->print();
            curNode = curNode->next;
        }
    }
    
}