#include "WordCount.h"
#include <iostream>
#include "tddFuncs.h"

using namespace std;

int main() {
 cout << "Running tests from: " << __FILE__ << endl;
 std::string s0 = "Bob";
 WordCount sr; 
 ASSERT_EQUALS(0, sr.getNumUniqueWords());
 ASSERT_EQUALS(1, sr.incrWordCount("foo"));
 ASSERT_EQUALS(2, sr.incrWordCount("foo"));
 ASSERT_EQUALS(3, sr.incrWordCount("foo"));
  ASSERT_EQUALS(1, sr.incrWordCount("bar"));
 ASSERT_EQUALS(2, sr.incrWordCount("bar"));
 ASSERT_EQUALS(1, sr.incrWordCount("foobar"));
 ASSERT_EQUALS(3, sr.getNumUniqueWords());

 //ASSERT_EQUALS(1,sr.getTotalWords());
//  sr.incrWordCount(s0);

// ASSERT_EQUALS(1,sr.getTotalWords());

// sr.incrWordCount("Hi");

// ASSERT_EQUALS(2,sr.getTotalWords());

// sr.incrWordCount("Bob");

// ASSERT_EQUALS(3,sr.getTotalWords());
// ASSERT_EQUALS(2,sr.getNumUniqueWords());
// ASSERT_EQUALS(2,sr.getWordCount("Bob"));

// sr.incrWordCount("");

// ASSERT_EQUALS(0,sr.getWordCount(""));
// ASSERT_EQUALS(3,sr.getTotalWords());

// sr.incrWordCount("a");
// sr.incrWordCount("b");
// sr.incrWordCount("c");
// sr.incrWordCount("d");
// sr.incrWordCount("e");
// sr.incrWordCount("f");
// sr.incrWordCount(". g- - -");
// sr.incrWordCount("h123");
// sr.incrWordCount("123");
// ASSERT_EQUALS(11,sr.getTotalWords());
// ASSERT_EQUALS(10,sr.getNumUniqueWords());

// ASSERT_EQUALS("st-op",sr.stripWord("-st-op"));
// ASSERT_EQUALS("abc-d",sr.stripWord("-abc-d"));
// ASSERT_EQUALS("aa",sr.stripWord("1aa2"));
// ASSERT_EQUALS("ab",sr.stripWord("ab-123"));
// ASSERT_EQUALS("ab-csdc",sr.stripWord("ab-csdc-----"));
// ASSERT_EQUALS("ab",sr.stripWord("a b"));
// ASSERT_EQUALS("abc-b",sr.stripWord("a b c - b"));
// ASSERT_EQUALS("abc-b",sr.stripWord("   . a b c - b"));
// ASSERT_EQUALS("c'a'n't",sr.stripWord("c'a'n't"));



// // *********************************************************************

// std::string s1 = "Alice";
// std::string s2 = "Bob";
// std::string s3 = "Bob";
// std::string s4 = "Charlie";

// WordCount s;
// s.incrWordCount(s1);
// s.incrWordCount(s2);
// s.incrWordCount(s3);
// s.incrWordCount(s4);

// ASSERT_EQUALS(4, s.getTotalWords());
// ASSERT_EQUALS(3, s.getNumUniqueWords());

// ASSERT_EQUALS("al-ic", s.stripWord("al-ic"));
// ASSERT_EQUALS("al-ic", s.stripWord("1al-ic"));
// ASSERT_EQUALS("al-ic", s.stripWord("1al-ic2"));
// ASSERT_EQUALS("al-ic", s.stripWord("1al-ic23"));
// ASSERT_EQUALS("a", s.stripWord("-a-"));
// //ASSERT_EQUALS("a", s.stripWord("--------a"));
// ASSERT_EQUALS("a", s.stripWord("-1--------a"));
// ASSERT_EQUALS("", s.stripWord("12345"));

// std::string s5 = "Alice";
// std::string s6 = "Bob";
// std::string s7 = "Bob";
// std::string s8 = "Charlie";

// s.incrWordCount(s5);
// s.incrWordCount(s6);
// s.incrWordCount(s7);
// s.incrWordCount(s8);

// ASSERT_EQUALS(8, s.getTotalWords());
// ASSERT_EQUALS(3, s.getNumUniqueWords());
// std::string s9 = "12345";
// std::string s10 = "---a";
// std::string s11 = "3abcd-";
// std::string s12 = "j-'";
// //cout << "here" << endl;
// s.incrWordCount(s9);
// //cout << "here" << endl;

// s.incrWordCount(s10);
// s.incrWordCount(s11);
// s.incrWordCount(s12);

// ASSERT_EQUALS("", s.stripWord("12345"));
// ASSERT_EQUALS(11, s.getTotalWords());
// ASSERT_EQUALS(6, s.getNumUniqueWords());

}