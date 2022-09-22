//
//  main.cpp
//  forwardChaining
//
//  Created by Anisa Yniesta on 8/29/22.
//
#include <stdio.h>
#include <iostream>
#include <cstring>
#include <string>
#include "ForwardChaining.hpp"
using namespace std;

int main(){
    string conditionalVariableQueue[160];
    // user input for condition variable
    string condition;
    // counter for clause variablel list
    int count = 0;
    
    // issue switch case statement
    int issueSwitch;
    
    // create a separate class for each issue to handle easier
    
    string issueList[4] = {"HEALTHCARE", "GUN VIOLENCE", "EDUCATION", "ECONOMY"};
    
    // create variable list
    string variableList[8] = {"ISSUE", "APPROACH", "WHOM", "SOLUTION", "ACTION",
                               "WHAT", "CONCERN", "TO"};
    
    // solution is conclusion THEN
    // action will be create laws or expand
    
    // use same class to create objects
    // each rule in class will be an object
    // optional - store maximum to check users input
    
    string clauseVariableList[160] = {
        "ISSUE", "APPROACH", "WHOM", " ", " ",
        "ISSUE", "APPROACH", "WHOM", " ", " ",
        "ISSUE", "APPROACH", "ACTION", "WHAT", " ",
        "ISSUE", "APPROACH", "ACTION", "WHAT", " ",
        "ISSUE", "APPROACH", "ACTION", "WHAT", " ",
        "ISSUE", "APPROACH", "ACTION", "WHAT", " ",
        
        "ISSUE", "APPROACH", "WHAT", " ", " ",
        "ISSUE", "APPROACH", "WHAT", " ", " ",
        "ISSUE", "APPROACH", "WHAT", " ", " ",
        "ISSUE", "APPROACH", "WHAT", " ", " ",
        "ISSUE", "APPROACH", "WHAT", " ", " ",
        "ISSUE", "APPROACH", "WHAT", " ", " ",
        
        "ISSUE", "APPROACH", "WHOM", " ", " ",
        "ISSUE", "APPROACH", "WHOM", " ", " ",
        "ISSUE", "APPROACH", "WHAT", " ", " ",
        "ISSUE", "APPROACH", "WHAT", " ", " ",
        "ISSUE", "APPROACH", "WHAT", " ", " ",
        "ISSUE", "APPROACH", "WHOM", "CONCERN", " ",
        
        "ISSUE", "APPROACH", "WHOM", "CONCERN", " ",
        "ISSUE", "APPROACH", "WHOM", "CONCERN", " ",
        "ISSUE", "APPROACH", "WHOM", "CONCERN", " ",
        "ISSUE", "APPROACH", "WHOM", "CONCERN", " ",
        "ISSUE", "APPROACH", "WHOM", "CONCERN", " ",
        "ISSUE", "APPROACH", "WHOM", "CONCERN", " ",
        
        "ISSUE", "APPROACH", "WHOM", "CONCERN", " ",
        "ISSUE", "APPROACH", "WHOM", " ", " ",
        "ISSUE", "APPROACH", "TO", "WHAT", " ",
        "ISSUE", "APPROACH", "TO", "WHAT", " ",
        "ISSUE", "APPROACH", "TO", "WHAT", " ",
        "ISSUE", "APPROACH", "TO", "WHAT", " ",
        
        "ISSUE", "APPROACH", "TO", "WHAT", " ",
        "ISSUE", "APPROACH", "TO", "WHAT", " ",
    };
    
    
    
    // in class assign a value
    // leave variable list uninstanciated
    
    // create object
    ForwardChaining forChain;
    
    // VARIABLE LIST SHOULD BE QUEUE
    
    
    // list all possible values for variables
    // after this assign int values to
    
    // push each statement on the queue
    // compare each
    
    // conclusions for variables
    // list all of them for solution variable
    
    // class needs to have a default constructor
    // array of objects
    // empty queue when something is false
    
    // print variable list
    forChain.printVariableList(variableList);
    
    cout << "HIT RETURN TO CONTINUE" << endl;
    cin.ignore();
    
    // print clause variable list
    cout << "*** CLAUSE-VARIABLE LIST ***" << endl;
    for(int j = 1; j < 33; j++){
        cout << "*** CLAUSE " << j << " ***" << endl;
        
        for(int k = 0; k < 5; k++){
            count = 5 * (j - 1) + k;
            cout << "Variable " << k << " " << clauseVariableList[count] << endl;
        }
    }
    

    /****** INFERENCE SECTION *****************/
    printf("ENTER CONDITION VARIABLE ");
    cin >> condition;
    
    
    
    // do switch statement 1-8
    
    
    // class and store variable name, whether it's instanciated and the value for it
    // user will see available options for one variable
    
    
    
    // create queue
    // put variable c on conditionalVariableQueue
    forChain.enqueue(condition);
    
    cout << "Enter main issue: " << endl;
    for(int k = 0; k < 4; k++){
        cout << k+1 << " " << issueList[k] << endl;
    }
    cin >> issueSwitch;
    
    if(issueSwitch > 4 || issueSwitch < 0){
        cout << "Enter valid option" << endl;
        cin >> issueSwitch;
    }
    
   
    switch(issueSwitch){
        case 1: // HEALTHCARE
            cout << "Condition variable is " << issueList[issueSwitch-1] << endl;
            forChain.printVariableList(variableList);
            forChain.enqueue("APPROACH");
            cout << "APPROACH? 0. MONETARY FUNDS OR 1. CREATE LAWS?" << endl;
            cin >> issueSwitch;
            switch(issueSwitch){
                case 0:
                    forChain.enqueue("WHOM");
                    cout << "WHOM? 4. INDIVIDUAL OR 5. STATES?" << endl;
                    cin >> issueSwitch;
                    switch(issueSwitch){
                        case 4:
                            forChain.enqueue("SOLUTION");
                            cout << "SOLUTION = " << forChain.healthcareIssue[8] << endl;
                            forChain.printConclusionVariableStack();
                            cout << "Statement Number : " << "1" << endl;
                            break;
                        case 5:
                            forChain.enqueue("SOLUTION");
                            cout << "SOLUTION = " << forChain.healthcareIssue[9] << endl;
                            forChain.printConclusionVariableStack();
                            cout << "Statement Number : " << "2" << endl;
                            break;
                    }
                    break;
                case 1:
                    forChain.enqueue("ACTION");
                    cout << "ACTION? 2. EXPAND OR 3. RESIST/REGULATE?" << endl;
                    cin >> issueSwitch;
                    switch(issueSwitch){
                        case 2:
                            forChain.enqueue("EXPAND");
                            cout << "EXPAND? 11. HEALTH INSURANCE OR 12. PREVENTATIVE MEASURES" << endl;
                            cin >> issueSwitch;
                            switch(issueSwitch){
                                case 11:
                                    forChain.enqueue("SOLUTION");
                                    cout << "SOLUTION = " << forChain.healthcareIssue[10] << endl;
                                    forChain.printConclusionVariableStack();
                                    cout << "Statement Number : " << "3" << endl;
                                    break;
                                case 12:
                                    forChain.enqueue("SOLUTION");
                                    cout << "SOLUTION = " << forChain.healthcareIssue[11] << endl;
                                    forChain.printConclusionVariableStack();
                                    cout << "Statement Number : " << "4" << endl;
                                    break;
                            }
                            break;
                        case 3:
                            forChain.enqueue("RESTRICT/REGULATE");
                            cout << "RESTRICT/REGULATE? 13. HEALTHCARE COSTS OR 14. CONDITIONS" << endl;
                            cin >> issueSwitch;
                            switch(issueSwitch){
                                case 13:
                                    forChain.enqueue("SOLUTION");
                                    cout << "SOLUTION = " << forChain.healthcareIssue[12] << endl;
                                    forChain.printConclusionVariableStack();
                                    cout << "Statement Number : " << "5" << endl;
                                    break;
                                case 14:
                                    forChain.enqueue("SOLUTION");
                                    cout << "SOLUTION = " << forChain.healthcareIssue[13] << endl;
                                    forChain.printConclusionVariableStack();
                                    cout << "Statement Number : " << "6" << endl;
                                    break;
                            }
                            break;
                    }
                    break;
            }
            break;
        case 2: // GUN VIOLENCE
            cout << "Condition variable is " << issueList[issueSwitch-1] << endl;
            forChain.printVariableList(variableList);
            forChain.enqueue("APPROACH");
            cout << "APPROACH? 0. EXPAND OR 1. RESTRICT/REGULATE?" << endl;
            cin >> issueSwitch;
            switch(issueSwitch){
                case 0:
                    forChain.enqueue("EXPAND");
                    cout << "EXPAND? 0. WAITING PERIODS 1. BACKGROUND CHECKS 2. LICENSING" << endl;
                    cin >> issueSwitch;
                    switch(issueSwitch){
                        case 0:
                            forChain.enqueue("SOLUTION");
                            cout << "SOLUTION = " << forChain.gunViolenceIssues[0] << endl;
                            forChain.printConclusionVariableStack();
                            cout << "Statement Number : " << "7" << endl;
                            break;
                        case 1:
                            forChain.enqueue("SOLUTION");
                            cout << "SOLUTION = " << forChain.gunViolenceIssues[1] << endl;
                            forChain.printConclusionVariableStack();
                            cout << "Statement Number : " << "8" << endl;
                            break;
                        case 2:
                            forChain.enqueue("SOLUTION");
                            cout << "SOLUTION = " << forChain.gunViolenceIssues[2] << endl;
                            forChain.printConclusionVariableStack();
                            cout << "Statement Number : " << "9" << endl;
                            break;
                    }
                    break;
                    case 1:
                    cout << "APPROACH? 0. LOOPHOLES 1. GUN ADVOCACY GROUPS 2. MILITARY GRADE FIREARMS" << endl;
                    cin >> issueSwitch;
                    switch(issueSwitch){
                        case 0:
                            forChain.enqueue("SOLUTION");
                            cout << "SOLUTION = " << forChain.gunViolenceIssues[1] << endl;
                            forChain.printConclusionVariableStack();
                            cout << "Statement Number : " << "10" << endl;
                            break;
                            
                        case 1:
                            forChain.enqueue("SOLUTION");
                            cout << "SOLUTION = " << forChain.gunViolenceIssues[3] << endl;
                            forChain.printConclusionVariableStack();
                            cout << "Statement Number : " << "11" << endl;
                            break;
                        case 2:
                            forChain.enqueue("SOLUTION");
                            cout << "SOLUTION = " << forChain.gunViolenceIssues[4] << endl;
                            forChain.printConclusionVariableStack();
                            cout << "Statement Number : " << "12" << endl;
                            break;
                    }
                    break;
            }
            break;
        case 3: // EDUCATION
            cout << "Condition variable is " << issueList[issueSwitch-1] << endl;
            forChain.printVariableList(variableList);
            forChain.enqueue("APPROACH");
            cout << "APPROACH? 0. MONETARY FUNDS OR 1. REFORM?" << endl;
            cin >> issueSwitch;
            switch(issueSwitch){
                case 0:
                    forChain.enqueue("WHOM");
                    cout << "WHOM? 0. STATES OR 1. INDIVIDUALS?" << endl;
                    cin >> issueSwitch;
                    switch(issueSwitch){
                        case 0:
                            forChain.enqueue("SOLUTION");
                            cout << "SOLUTION = " << forChain.educationIssues[0] << endl;
                            forChain.printConclusionVariableStack();
                            cout << "Statement Number : " << "13" << endl;
                            break;
                        case 1:
                            forChain.enqueue("SOLUTION");
                            cout << "SOLUTION = " << forChain.educationIssues[1] << endl;
                            forChain.printConclusionVariableStack();
                            cout << "Statement Number : " << "14" << endl;
                            break;
                    }
                    break;
                    
                case 1:
                    forChain.enqueue("WHAT");
                    cout << "WHAT? 0. SUBJECTS TAUGHT OR 1. AFTER SCHOOL PROGRAMS OR 2. STANDARDS?" << endl;
                    cin >> issueSwitch;
                    switch(issueSwitch){
                        case 0:
                            forChain.enqueue("SOLUTION");
                            cout << "SOLUTION = " << forChain.educationIssues[2] << endl;
                            forChain.printConclusionVariableStack();
                            cout << "Statement Number : " << "15" << endl;
                            break;
                        case 1:
                            forChain.enqueue("SOLUTION");
                            cout << "SOLUTION = " << forChain.educationIssues[3] << endl;
                            forChain.printConclusionVariableStack();
                            cout << "Statement Number : " << "16" << endl;
                            break;
                        case 2:
                            forChain.enqueue("SOLUTION");
                            cout << "SOLUTION = " << forChain.educationIssues[4] << endl;
                            forChain.printConclusionVariableStack();
                            cout << "Statement Number : " << "17" << endl;
                            break;
                    }
                    break;
            }
            break;
        case 4: // ECONOMY
            cout << "Condition variable is " << issueList[issueSwitch-1] << endl;
            forChain.printVariableList(variableList);
            forChain.enqueue("APPROACH");
            cout << "APPROACH? 0. MONETARY FUNDS OR 1. LAWS?" << endl;
            cin >> issueSwitch;
            switch(issueSwitch){
                case 0:
                    forChain.enqueue("WHOM");
                    cout << "WHOM? 0. BIG BUSINESSES 1. SMALL BUSINESSES 2. INDIVIDUALS?" << endl;
                    cin >> issueSwitch;
                    switch(issueSwitch){
                        case 0:
                            forChain.enqueue("CONCERN");
                            cout << "CONCERN? 0. SUPPLY CHAIN OR 1. LACK OF LABOR 0R 2. PUBLIC HEALTH ISSUE OR 3. RECESSION?" << endl;
                            cin >> issueSwitch;
                            switch(issueSwitch){
                                case 0:
                                    forChain.enqueue("SOLUTION");
                                    cout << "SOLUTION = " << forChain.economyIssues[0] << endl;
                                    forChain.printConclusionVariableStack();
                                    cout << "Statement Number : " << "18" << endl;
                                    break;
                                case 1:
                                    forChain.enqueue("SOLUTION");
                                    cout << "SOLUTION = " << forChain.economyIssues[1] << endl;
                                    forChain.printConclusionVariableStack();
                                    cout << "Statement Number : " << "19" << endl;
                                    break;
                                case 2:
                                    forChain.enqueue("SOLUTION");
                                    cout << "SOLUTION = " << forChain.economyIssues[2] << endl;
                                    forChain.printConclusionVariableStack();
                                    cout << "Statement Number : " << "20" << endl;
                                    break;
                                case 3:
                                    forChain.enqueue("SOLUTION");
                                    cout << "SOLUTION = " << forChain.economyIssues[3] << endl;
                                    forChain.printConclusionVariableStack();
                                    cout << "Statement Number : " << "21" << endl;
                                    break;
                            }
                            break;
                        case 1:
                            forChain.enqueue("CONCERN");
                            cout << "CONCERN? 0. LACK OF LABOR 0R 1. PUBLIC HEALTH ISSUE OR 2. RECESSION OR 3. HIGH TAXES?" << endl;
                            cin >> issueSwitch;
                            switch(issueSwitch){
                                case 0:
                                    forChain.enqueue("SOLUTION");
                                    cout << "SOLUTION = " << forChain.economyIssues[4] << endl;
                                    forChain.printConclusionVariableStack();
                                    cout << "Statement Number : " << "22" << endl;
                                    break;
                                case 1:
                                    forChain.enqueue("SOLUTION");
                                    cout << "SOLUTION = " << forChain.economyIssues[5] << endl;
                                    forChain.printConclusionVariableStack();
                                    cout << "Statement Number : " << "23" << endl;
                                    break;
                                case 2:
                                    forChain.enqueue("SOLUTION");
                                    cout << "SOLUTION = " << forChain.economyIssues[6] << endl;
                                    forChain.printConclusionVariableStack();
                                    cout << "Statement Number : " << "24" << endl;
                                    break;
                                case 3:
                                    forChain.enqueue("SOLUTION");
                                    cout << "SOLUTION = " << forChain.economyIssues[7] << endl;
                                    forChain.printConclusionVariableStack();
                                    cout << "Statement Number : " << "25" << endl;
                                    break;
                            }
                            break;
                        case 2:
                            forChain.enqueue("SOLUTION");
                            cout << "SOLUTION = " << forChain.economyIssues[8] << endl;
                            forChain.printConclusionVariableStack();
                            cout << "Statement Number : " << "26" << endl;
                            break;
                    }
                    break;
                    
                case 1:
                    forChain.enqueue("TO");
                    cout << "TO? 0. EXPAND OR 1. RESTRICT/REGULATE" << endl;
                    cin >> issueSwitch;
                    switch(issueSwitch){
                        case 0:
                            forChain.enqueue("WHAT");
                            cout << "WHAT? 0. LOCAL WEALTH 1. BUYING POWER 2. SMALL BUSINESS" << endl;
                            cin >> issueSwitch;
                            switch(issueSwitch){
                                case 0:
                                    forChain.enqueue("SOLUTION");
                                    cout << "SOLUTION = " << forChain.economyIssues[9] << endl;
                                    forChain.printConclusionVariableStack();
                                    cout << "Statement Number : " << "27" << endl;
                                    break;
                                case 1:
                                    forChain.enqueue("SOLUTION");
                                    cout << "SOLUTION = " << forChain.economyIssues[10] << endl;
                                    forChain.printConclusionVariableStack();
                                    cout << "Statement Number : " << "28" << endl;
                                    break;
                                case 2:
                                    forChain.enqueue("SOLUTION");
                                    cout << "SOLUTION = " << forChain.economyIssues[11] << endl;
                                    forChain.printConclusionVariableStack();
                                    cout << "Statement Number : " << "29" << endl;
                                    break;
                            }
                            break;
                        case 1:
                            forChain.enqueue("WHAT");
                            cout << "WHAT? 0. UNEMPLOYMENT 1. CORPORATE WEALTH 2. IMPORTS/EXPORTS" << endl;
                            cin >> issueSwitch;
                            switch(issueSwitch){
                                case 0:
                                    forChain.enqueue("SOLUTION");
                                    cout << "SOLUTION = " << forChain.economyIssues[12] << endl;
                                    forChain.printConclusionVariableStack();
                                    cout << "Statement Number : " << "30" << endl;
                                    break;
                                case 1:
                                    forChain.enqueue("SOLUTION");
                                    cout << "SOLUTION = " << forChain.economyIssues[13] << endl;
                                    forChain.printConclusionVariableStack();
                                    cout << "Statement Number : " << "31" << endl;
                                    break;
                                case 2:
                                    forChain.enqueue("SOLUTION");
                                    cout << "SOLUTION = " << forChain.economyIssues[14] << endl;
                                    forChain.printConclusionVariableStack();
                                    cout << "Statement Number : " << "32" << endl;
                                    break;
                            }
                            break;
                    }
                    break;
            }
            break;
    }
    
}
