//
// Created by 瓜不甜 on 2018/8/26.
//

#include "Solution1.h"

void Base::Solution1::test1() {
    int a;
    scanf("%d",&a);
    printf("a:%d",a);
    printf("float的最大值：%E\n", FLT_MAX);
}

void Base::Solution1::test2() {
    printf("%f\n",1.0+2);

    printf("%.11f\n",8.0/5.0);
}

std::string Base::Solution1::LongestWord(string sem) {
    string maxString="";
    int maxLength=0;
    int tmp_len=0;
    int tmp_start=0;

    for(int i=0;i<sem.size();i++)
    {
        if((sem[i]>='A'&&sem[i]<='Z')||(sem[i]>='a'&&sem[i]<='z'))
        {
            tmp_len++;
        }else
        {
            if(tmp_len>maxLength)
            {
                maxLength=tmp_len;
                maxString=sem.substr(tmp_start,tmp_len);
            }
            tmp_start=i;
            tmp_len=0;
        }

    }

    return maxString;
}
