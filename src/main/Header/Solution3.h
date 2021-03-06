//
// Created by 瓜不甜 on 2018/8/26.
//

#ifndef ACM_SOLUTION3_H
#define ACM_SOLUTION3_H
// 题目：hd_p_1004
//Let the Balloon Rise
//
//Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
//Total Submission(s): 122342    Accepted Submission(s): 48183
//
//
//Problem Description
//Contest time again! How excited it is to see balloons floating around. But to tell you a secret, the judges' favorite time is guessing the most popular problem. When the contest is over, they will count the balloons of each color and find the result.
//
//This year, they decide to leave this lovely job to you.
//
//
//Input
//        Input contains multiple test cases. Each test case starts with a number N (0 < N <= 1000) -- the total number of balloons distributed. The next N lines contain one color each. The color of a balloon is a string of up to 15 lower-case letters.
//
//A test case with N = 0 terminates the input and this test case is not to be processed.
//
//
//Output
//        For each case, print the color of balloon for the most popular problem on a single line. It is guaranteed that there is a unique solution for each test case.
//
//
//Sample Input
//5
//green
//        red
//blue
//        red
//red
//3
//pink
//        orange
//pink
//0
//
//
//Sample Output
//red
//        pink
//
//
//Author
//        WU, Jiazhi
//
//
//Source
//        ZJCPC2004
#include <iostream>
#include <map>
#include <string>
using namespace std;

class Solution3 {
public:
    void BalloonRise();
};


#endif //ACM_SOLUTION3_H
