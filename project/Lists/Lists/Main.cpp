#include "fun.cpp"
#include <iostream>

int main() {
  
  struct CNode* t;
  struct CNode* start; 
  start = new struct CNode();
	start->val = 5;
	start->next = 0;
	std::cout << start -> val << ' ';
    t=start;
  for(int i = 0; i < 10; i++) {
	t->next = new struct CNode();
	t = t->next;
	t->val = (int)abs(4-i);
	t->next = 0;
	std::cout << t -> val << ' ';
     
  }

 
  std:: cout << std:: endl;
  std:: cout << palindrom(&start) << std:: endl;


}