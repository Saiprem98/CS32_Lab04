// WordCount.cpp
// Written by Richert Wang for CS 32, F18.

#include "WordCount.h"
#include <algorithm> 
#include <vector>
using namespace std;

// Default constructor
WordCount::WordCount() {}

// Simple hash function. Do not modify.
size_t WordCount::hash(std::string word) const {
	size_t accumulator = 0;
	for (size_t i = 0; i < word.size(); i++) {
		accumulator += word.at(i);
	}
	return accumulator % CAPACITY;
}

int WordCount::getTotalWords() const {

  size_t total=0;
  for(size_t i =0 ; i < CAPACITY ; i++){
    for ( size_t j =0; j < table[i].size(); j++){
    total += table[i][j].second;
  }
  //cout << total << endl;
}
        return total;
}

int WordCount::getNumUniqueWords() const {

  int total=0;
  for(size_t i =0 ; i < CAPACITY ; i++){
    total +=table[i].size();

}
return total;
}

int WordCount::getWordCount(std::string word) const {
  transform(word.begin(), word.end(), word.begin(), ::toupper);

  size_t wordC =0;   
  for(size_t i =0 ; i < CAPACITY ; i++){
    for ( size_t j =0; j < table[i].size(); j++){
      if (table[i][j].first == word){
        wordC = table[i][j].second; 
      }
  }
}
return wordC;
}
	

int WordCount::incrWordCount(std::string word) {
  // check if empty string f
  if(word == ""){
    return 0; 
  }
  string add = stripWord(word); 
  transform(add.begin(), add.end(), add.begin(), ::toupper);
  if(add == ""){
    return 0; 
  }
  //transform(word.begin(), word.end(), word.begin(), ::toupper);

  size_t wordC=0; 
  bool found = false;
  //cout << word << CAPACITY<< endl;
  for(size_t i =0 ; i < CAPACITY ; i++){
    for ( size_t j =0; j < table[i].size(); j++){
      if (table[i][j].first == add){
        // increment count for word
        wordC = table[i][j].second; 
        wordC++;
        table[i][j].second = wordC; 
        found = true;
      }

  }
}
 if (found == false) {
        
        /// add word to vector + update the size
        string add = stripWord(word); 
        transform(add.begin(), add.end(), add.begin(), ::toupper);
       // cout << add << endl;
        int arrayI = hash(add);
       // cout << arrayI << endl;
        table[arrayI].push_back(std::make_pair(add,1));
        wordC++;
      }
return wordC;
}


bool WordCount::isWordChar(char c) {
	// STUB

  if (isalpha(c) == false){
    return false;
  }
  else 
    return true;
}


std::string WordCount::stripWord(std::string word) {
	// STUB
  int size = word.size();
  int i =0;
  std::string create;
//       int j =0;
//     while(isWordChar(create[j])==false){
//       create.erase(j);
// cout << create << endl;
//       j++;
//     }
  while(word[i]){
    if(isWordChar(word[i]) == true ){
      create += word[i];
      size = word.size();
     // cout << create << endl;

    }
    else if((word[i] == '-' || word[i] == '\'') && (i != 0 && i != size-1 && create != "")  ){
      create += word[i];
      size = word.size();
      //cout << i <<" "<<  create << endl;
    }
   i++;
    } 
    if(create == "") {
      return "";
    }
    int size1 = create.size();   
    while(isWordChar(create[size1-1]) == false){
      create.erase(size1-1);
      size1 = create.size(); 
    }


    
	return create;
}
