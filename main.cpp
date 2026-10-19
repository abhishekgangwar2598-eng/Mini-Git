#include<iostream>
#include<string>
#include "CAS.h"
#include "DAG.h"
#include "SHA.h"
#include<vector>
#include<fstream>
#include<algorithm>


int main(){
    string s;
    cin >> s;
    vector<string> commands = {"git init","git hash-objects","git cat-file","git add","git write-tree","git commit","git commit-tree","git log","git branch","git checkout","git diff","git merge","git status"};
    bool commandcheck = false;
    int index =-1;
    for(int i=0;i<commands.size();i++){
        for(int j = 0;j<commands[i].size();j++){
            if(s[j] == commands[i][j]){
            commandcheck = true;
         index = i;
        }
    }
}
    if(!commandcheck){
        cout << "Command Not found: Check the command and then run it " << endl;
        return -1;
    }
}

