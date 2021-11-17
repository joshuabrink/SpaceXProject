#include "ComNodeQueue.h"
#include "ComNodeQueueIterator.h"
#include "Satellite.h"
#include <gtest/gtest.h>
// #include <iostream>

// The fixture for testing class Foo.
class QueueTest : public ::testing::Test
{

protected:
   // You can remove any or all of the following functions if their bodies would
   // be empty.

   QueueTest()
   {
      // You can do set-up work for each test here.
      que = new ComNodeQueue();
      satellite_0 = new Satellite(3);
      satellite_1 = new Satellite(1);
      satellite_2 = new Satellite(2);
   }

   ~QueueTest() override
   {
      // You can do clean-up work that doesn't throw exceptions here.
   }

   // If the constructor and destructor are not enough for setting up
   // and cleaning up each test, you can define the following methods:

   void SetUp() override
   {
      // Code here will be called immediately after the constructor (right
      // before each test).

      que->add(*satellite_0);
      que->add(*satellite_1);
      que->add(*satellite_2);

      // queIterator.
   }

   void TearDown() override
   {
      // Code here will be called immediately after each test (right
      // before the destructor).
   }
   ComNodeQueue *que;
   CommuncationNode *satellite_0;
   CommuncationNode *satellite_1;
   CommuncationNode *satellite_2;
   ComNodeQueueIterator queIterator;

   // Class members declared here can be used by all tests in the test suite
   // for Foo.
};

TEST_F(QueueTest, QueueAdd)
{
   que->add(*satellite_0); 
   EXPECT_EQ(que->end(), ComNodeQueueIterator(que, 3)) << "Value was not added to queue.";
   // EXPECT_EQ(*satellite_2->next, 0) << "Node next incorrect.";
   que->add(*satellite_1);
   EXPECT_EQ(que->end(), ComNodeQueueIterator(que, 4)) << "Value was not added to queue.";
   // EXPECT_EQ(*satellite_2->next, 0) << "Node next incorrect.";
}

TEST_F(QueueTest, QueueRemove)
{
   que->remove(); 
   EXPECT_EQ(*que->begin(), *satellite_1) << "Value was not removed from queue.";
   que->remove(); 
   EXPECT_EQ(*que->begin(), *satellite_2) << "Value was not removed from queue.";
   // que->remove(); 
   // EXPECT_EQ(**que->begin(), 0) << "Value was not removed from queue.";

}


TEST_F(QueueTest, QueueIteratorIncrement)
{
   queIterator = ComNodeQueueIterator(que);
   EXPECT_EQ(que->begin(), queIterator) << "Initial iterator value is incorrect";
   ++queIterator;
   EXPECT_EQ(ComNodeQueueIterator(que, 1), queIterator) << "First iteratation incorrect";
   ++queIterator;
   EXPECT_EQ(que->end(), queIterator) << "Second iteratation incorrect";
   // ++*queIterator;
   // EXPECT_EQ(0, *queIterator) << "Iterator goes past queue bounds";
}
TEST_F(QueueTest, QueueIteratorDecrement)
{
   queIterator = ComNodeQueueIterator(que, 2);
   EXPECT_EQ(que->end(), queIterator) << "Initial iterator value is incorrect";
   --queIterator;
   EXPECT_EQ(ComNodeQueueIterator(que, 1), queIterator) << "First iteratation incorrect";
   --queIterator;
   EXPECT_EQ(que->begin(), queIterator) << "Second iteratation incorrect";
   // --*queIterator;
   // EXPECT_EQ(*que->begin(), *queIterator) << "Iterator goes past queue bounds";
}


// using namespace std;
int main(int argc, char **argv)
{
   ::testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();

   //  ComNodeQueue que = ComNodeQueue();
   //  que.add(new Satellite(2));
   //  que.add(new Satellite(3));
   //  que.add(new Satellite(4));
   //  que.add(new Satellite(5));
   //  que.add(new Satellite(6));
   //  ComNodeCollectionIterator *it = que.begin();

   //  while (!(*it == *que.end()))
   //  {
   //      // CommuncationNode cur = *(*it);
   //      cout << (*(*it)).id << endl;
   //      ++(*it);
   //  }

   /* code */
   // return 0;
}
