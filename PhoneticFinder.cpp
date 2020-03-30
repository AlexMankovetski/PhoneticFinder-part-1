#include "PhoneticFinder.hpp"
#include <iostream>
#include <ctype.h>
#include <stdexcept>
namespace phonetic{

int someBodySucksAtHisJob(char t, char w){
       
    t = tolower(t);
    w = tolower(w);
    if((t=='w'&& w=='v')||(t=='v' && w=='w'))
        return 1;
    if((t=='b'&& w=='f')||(t=='f' && w=='b'))
        return 1;
    if((t=='b'&& w=='p')||(t=='p' && w=='b'))
        return 1;
    if((t=='f'&& w=='p')||(t=='p' && w=='f'))
        return 1;
    if((t=='g'&& w=='j')||(t=='j' && w=='g'))
        return 1;
    if((t=='c'&& w=='k')||(t=='k' && w=='c'))
        return 1;
    if((t=='c'&& w=='q')||(t=='q' && w=='c'))
        return 1;
    if((t=='k'&& w=='c')||(t=='c' && w=='k'))
        return 1;
    if((t=='q'&& w=='k')||(t=='k' && w=='q'))
        return 1;
    if((t=='s'&& w=='z')||(t=='z' && w=='s'))
        return 1;
    if((t=='d'&& w=='t')||(t=='t' && w=='d'))
        return 1;
    if((t=='o'&& w=='u')||(t=='u' && w=='o'))
        return 1;
    if((t=='i'&& w=='y')||(t=='y' && w=='i'))
        return 1;
    
    return 0;
}

string find(string text , string word){
    int index = 0;
    string eureka = "";

    if(word == "" || word == " "){
        throw runtime_error("Sorry, what did you say you were looking for again?");
    }

    for (size_t i = 0; i < text.length(); i++)
    {
       if(isalpha(text[i]) && text[i!=' ']){
           if(text[i] == word[index] || tolower(text[i]) == tolower(word[index])){
               eureka+=text[i];
               index++;
           }
           else{
               if(someBodySucksAtHisJob(text[i],word[index])==1){
                   eureka+=text[i];
                   index++;
               }
               else{
                   eureka.clear();
                   index=0;
               }
           }
       }
       if(eureka.length() == word.length()){
           if (i+1 == text.length()){ return eureka; }
		    else if (text[i+1] == ' ') { return eureka; }
           }
    }
    
    if(eureka.length()!=word.length()){
        throw invalid_argument( "Can't find the word in the text !" );
    }
    return "Nothing";
}
}