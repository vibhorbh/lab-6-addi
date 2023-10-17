// TODO: Add the required header

#include "blackjack_functions.h"

bool IsAce(const std::string& card_name) {
  // TODO: Use an if statement to decide whether card_name is "A".
  if( card_name == "A"){
    return true;
    }
  // If so, return true; if not, return false.
  else{
  return false;
  }
}

bool IsFaceCard(const std::string& card_name) {
  // TODO: Use an if statement to decide whether card_name is one of "J", "Q",
  // or "K".
  // If so, return true; if not, return false.
  if( card_name == "J" || card_name == "Q" || card_name == "K" ){
    return true;
    }
  
  else{
  return false;
  }
}

bool IsNumberCard(const std::string& card_name) {
  // TODO: Use an if statement to decide whether card_name is one of "2", "3",
  // "4", ..., "10".
  // If so, return true; if not, return false.
  if ( card_name == "2" || card_name == "3" || card_name == "4" || card_name == "5" || card_name == "6" ||
       card_name == "7" || card_name == "8" || card_name == "9" || card_name == "10" ) {
    return true;
    }
    else{
  return false;
  }
}

bool IsCardName(const std::string& str) {
  // TODO: Use an if statement to decide whether card_name is an ace, face
  // card, or number card.
  // If so, return true; if not, return false.
  if( IsAce(str) || IsFaceCard(str) || IsNumberCard(str)){
    return true;
  }
  // HINT: This function may call IsAce, IsFaceCard, and IsNumberCard.
  else{
    return false;
  }
}

int CardPoints(const std::string& card_name) {
  // TODO: Write code to calculate the number of points for card_name.
  // HINT: You will probably need to write an if statement.
  // HINT: This function may call IsAce, IsFaceCard, and IsNumberCard.
  if (IsAce(card_name) ==true) {
    return 1;
  } 
  else if (IsFaceCard(card_name) == true){
    return 10;
  }
  else if(IsNumberCard(card_name) == true){
    return std::stoi(card_name);
  }
  return 0;
}

bool IsBust(int score) {
  // TODO: Use an if statement to decide whether score is greater than 21.
  if ( score > 21){
    std::cout << "bust!!";
  return false;
  }
}

int TwoCardHandScore(const std::string& card_1, const std::string& card_2) {
  return 0;
}
