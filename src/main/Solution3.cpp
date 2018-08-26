//
// Created by 瓜不甜 on 2018/8/26.
//

#include "Solution3.h"
void Solution3::BalloonRise() {
    //输入的行数
    int a;
    while ((cin>>a)&&(a!=0)){
        map<string,int> count;
        typedef map<string,int> Mystr;
        //统计
        for (int i = 0; i < a; ++i) {
            string str;
            Mystr::iterator cc=count.find(str);
            cin>>str;
            if (cc!=count.end())
            {
                count[str]=count[str]+1;
            }else
            {
                count[str]=1;
            }
        }
        //输出最大值
        //最大
        string name="";
        int max=0;
        for (Mystr::iterator j = count.begin(); j != count.end(); ++j) {
            string tname=j->first;
            cout<<tname;

            int tmax=j->second;
            cout<<"-->"<<tmax<<endl;
            if(tmax>max)
            {
                max=tmax;
                name=tname;
            }
        }
        cout<<name<<endl;

    }
}
