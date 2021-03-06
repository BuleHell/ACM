//
// Created by 瓜不甜 on 2018/8/26.
//

#ifndef ACM_SOLUTION2_H
#define ACM_SOLUTION2_H

//
//题目描述：hd_p_1003
//Max Sum
//
//Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
//Total Submission(s): 247626    Accepted Submission(s): 58501
//
//
//Problem Description
//Given a sequence a[1],a[2],a[3]......a[n], your job is to calculate the max sum of a sub-sequence. For example, given (6,-1,5,4,-7), the max sum in this sequence is 6 + (-1) + 5 + 4 = 14.
//
//
//Input
//The first line of the input contains an integer T(1<=T<=20) which means the number of test cases. Then T lines follow, each line starts with a number N(1<=N<=100000), then N integers followed(all the integers are between -1000 and 1000).
//
//
//Output
//For each test case, you should output two lines. The first line is "Case #:", # means the number of the test case. The second line contains three integers, the Max Sum in the sequence, the start position of the sub-sequence, the end position of the sub-sequence. If there are more than one result, output the first one. Output a blank line between two cases.
//
//Sample Input
//2
//5 6 -1 5 4 -7
//7 0 6 -1 1 -6 7 -5
//
//Sample Output
//Case 1:
//14 1 4
//
//Case 2:
//7 1 6
//
//
//Author
//Ignatius.L
//
//
//Recommend
//We have carefully selected several similar problems for you:  1176 1087 1069 2084 1058
//解决办法：动态规划

#include <iostream>
using namespace std;
class Solution2 {
public:
    void MaxSum1();
    void MaxSum2();
};


#endif //ACM_SOLUTION2_H
