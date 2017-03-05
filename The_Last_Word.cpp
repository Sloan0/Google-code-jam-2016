#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
using namespace std;

int main(){
  ofstream outputStream  ("The_Last_Word_Output.txt");
  ifstream inputStream  ("A-large-practice.in");
  int cases;
  string word = "";
  string winningWord = "";
  inputStream >> cases;
  cases += 1;
  for (int i = 0; i < cases; i++){
    inputStream >> word;
    winningWord = "";
    winningWord.insert(0,1,word[0]);

    for (int j = 1; j < word.size(); j++){
      if (word[j] < winningWord[0]){
        winningWord.insert(0,1,word[j]);
      }else{
        winningWord += word[j];
      }
    }

    outputStream << "Case #" << i << ": " << winningWord << endl;
  }

  outputStream.close();
  inputStream.close();
  return 0;
}
