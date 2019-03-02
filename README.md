# BreakingSticksTriangleProblem
A program to check the probability that breaking a stick in 3 parts forms a triangle.

Method:	We will use 'random' seed to divide the stick in 3 parts multiple times to approximate the probability.

Expected result:	ln 4 - 1 ≈ 0.38629436112.

Note:	To check that we can form a triangle, we only need to make sure that each 3 pieces have length less than n/2, where n is the length of the original stick.

---

RESULT: ~0.25

Explanation: The expected result I took from a comment was completely wrong. However, this was because of misunderstanding the question. If you randomly divide stick in 3 parts, the probability that you can form a triagle is: 0.25.
However, if you first break a stick in 2 parts, and then choose to break the longer of the 2 parts again, you can form a triangle with probability ln 4 - 1 ≈ 0.38629436112.
In fact, there is also a third versino to think about this problem. You hold the stick on one end, break off a piece from the other end of it, and the break off the stick on your hand into 2 sticks. In this case the probability being able to make a triangle of the pieces is only 1/2(ln 4 - 1) ≈ 0.19314718056.
This problem is more interesting than I initially thought.
