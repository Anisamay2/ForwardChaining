//
//  ForwardChaining.cpp
//  forwardChain
//
//  Created by Anisa Yniesta on 9/18/22.
//

#include "ForwardChaining.hpp"
#include <string>
#include <iostream>

string ForwardChaining::dequeue(){
    assert(!isEmpty());
    
    string result = conditionalVariableQueue[front];
    front = (front + 1) % 160;
    numItems--;
    return result;
}

void ForwardChaining::enqueue(string clause){
    assert(!isFull());
    
    // put pointer on back of
    rear = (rear + 1) % 160;
    conditionalVariableQueue[rear] = clause;
    numItems++;
    statementNumber++;
}

bool ForwardChaining::isFull(){
    return (numItems == 160);
}

bool ForwardChaining::isEmpty(){
    return (numItems == 0);
}

void ForwardChaining::printVariableList(string variableList[]){
    cout << "*** VARIABLE LIST ***" << endl;
    for(int i = 0; i < 8; i++){
        cout << "Variable " << i+1 << " " << variableList[i] << endl;
    }
}

void ForwardChaining::printConclusionVariableStack(){
    cout << "Conclusion Variable Queue Stack:" << endl;
    while(!isEmpty()){
        cout << dequeue() << endl;
    }
    cout << "Statement Number: " << statementNumber << endl;
}
