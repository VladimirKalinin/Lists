#include "C:/Ilya/Lists/project/Lists/Lists/fun.cpp"

#include "C:/Ilya/Lists/project/Lists/gtest/gtest.h"
#include <iostream>
TEST(CNode, can_vova_do_nothing)
{
  struct CNode* t;
  struct CNode* start; 
  start = new struct CNode();
	start->val = 0;
	start->next = 0;
	std::cout << start -> val << ' ';
    t=start;
  for(int i = 1; i < 10; i++) {
	t->next = new struct CNode();
	t = t->next;
	t->val = i;
	t->next = 0;
	std::cout << t -> val << ' ';
  }

	for(int i = 10; i > -1; i--) {
	t->next = new struct CNode();
	t = t->next;
	t->val = i;
	t->next = 0;
	std::cout << t -> val << ' ';
     
  }
  std:: cout << std:: endl;
  t=start;
  EXPECT_EQ(1, palindrom(&start));
  while(t!=0) {
    std::cout << t -> val << ' ';
	t=t->next;
  }	




 
}