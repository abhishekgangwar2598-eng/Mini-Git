#include<iostream>
#include<string>
#include<CAS.cpp>
#include<DAG.cpp>
#include<SHA.cpp>
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
        if(s == commands[i]){
            commandcheck = true;
         index = i;
        }
    }
    if(!commandcheck){
        cout << "Command Not found: Check the command and then run it " << endl;
        return -1;
    }
}

