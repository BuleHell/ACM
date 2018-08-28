
#include <gtest/gtest.h>
#include "Solution1.h"

// 测试是有相应的main
//#ifdef DEBUGGER
//clock_t start = clock();
//    double  elapsedTime= static_cast<double>(clock()-start)/CLOCKS_PER_SEC;
//#endif
////在这里写测试代码-----<
//
//cout<<"hello"<<endl;
//
////------------------<
//#ifdef DEBUGGER
//cout<<fixed<<setprecision(20);
//    std::cout<<"耗时:"<<elapsedTime<<std::endl;
//#endif

namespace {
    TEST(Base_Solution1_test1_Test,test1)
	{
		//测试数据：
        Base::Solution1 a;
        a.test1();
	}
    TEST(Base_Solution1_test1_Test,test2)
    {
        //测试数据：
        Base::Solution1 a;
        std::cout<<a.LongestWord("abcdefg");
    }


}