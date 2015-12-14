#include "C:/Ilya/Lists/project/Lists/Lists/fun.cpp"

#include "C:/Ilya/Lists/project/Lists/gtest/gtest.h"
#include <iostream>



TEST(CNode, can_recognize_palindrom_with_lenth_3)
{
  struct CNode* t;
  struct CNode* start; 
  start = new struct CNode();
  start->val = 0;
  start->next = new struct CNode();
  t=start->next;
  t->val=3;
  t->next = new struct CNode();
  t=t->next;
  t->val=0;
  t->next=0;
  printf("0 3 0\n");
  EXPECT_EQ(1, palindrom(&start));
}

TEST(CNode, can_recognize_palindrom_with_lenth_2)
{
  struct CNode* t;
  struct CNode* start; 
  start = new struct CNode();
  start->val = 1;
  start->next = new struct CNode();
  t=start->next;
  t->val=1;
  t->next=0;
  printf("1 1\n");
  EXPECT_EQ(1, palindrom(&start));
}

TEST(CNode, can_recognize_palindrom_with_lenth_1)
{
  struct CNode* t;
  struct CNode* start; 
  start = new struct CNode();
  start->val = 1;
  start->next = 0;
  printf("1\n");
  EXPECT_EQ(1, palindrom(&start));
}

TEST(CNode, can_recognize_empty_list)
{
  struct CNode* start=0; //если в нем вообще нет символов, это же не полиндром, да?

  EXPECT_NE(1, palindrom(&start));
}

TEST(CNode, can_recognize_palindrom_with_odd_lenth)
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
  printf("\n");
}

TEST(CNode, can_recognize_palindrom_with_even_lenth)
{
  struct CNode* t;
  struct CNode* start; 
  start = new struct CNode();
	start->val = 0;
	start->next = 0;
	std::cout << start -> val << ' ';
    t=start;
  for(int i = 1; i < 11; i++) {
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
  printf("\n");
}

TEST(Cnode, can_recognize_not_palindrom_by_value)
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
	t=start;
	for(int i = 1; i < 7; i++)
		t=t->next;
	t->val=72;

  std:: cout << std:: endl;
  t=start;
  EXPECT_NE(1, palindrom(&start));
  while(t!=0) {
    std::cout << t -> val << ' ';
	t=t->next;
  }	
    printf("\n");
}

TEST(CNode, can_recognize_not_palindrom_by_size_right)
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
	t->next = new struct CNode();
	t = t->next;
	t->val = 72;
	t->next = 0;

  std:: cout << std:: endl;
  t=start;
  EXPECT_NE(1, palindrom(&start));
  while(t!=0) {
    std::cout << t -> val << ' ';
	t=t->next;
  }	
  printf("\n");
}

TEST(CNode, can_recognize_not_palindrom_by_size_left)
{
  struct CNode* t;
  struct CNode* start; 
  start = new struct CNode();
	start->val = 72;
	start->next = 0;
	t=start;
	t->next = new struct CNode();
	t = t->next;
	t->val = 0;
	t->next = 0;
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
  EXPECT_NE(1, palindrom(&start));
  while(t!=0) {
    std::cout << t -> val << ' ';
	t=t->next;
  }	
  printf("\n");
}