//
// Created by 瓜不甜 on 2018/8/26.
//

#include "Solution2.h"

void Solution2::MaxSum1() {
    int n;
    int a[10002];
    //获取：组数
    cin >> n;
    for (int i = 0; i < n; ++i) {

        //获取：每组的个数
        int m;
        cin >> m;

        //给每组的数据赋值
        for (int j = 0; j < m; ++j) {
            cin >> a[j];
        }
//        //输出数据
//        for (int j = 0; j < m; ++j) {
//            cout<<a[j]<<"\t";
//        }
        cout << endl;

        //算法开始：----------------------
        int sum = 0;//累积值 : 中间计算值
        int maxsum = -10001;//当前最大值 ： 目标值

        int start = 0;//序列开始
        int last = 0;//序列结束
        for (int k = 0; k < m; ++k) {

            sum += a[k];
            //求出最大值
            if (sum > maxsum) {
                maxsum = sum;
                last = k;
            }
            //上半部分是max的判断-------------------
            //下一次的计算：下半部分是加不加的判断
            if (sum < 0) {
                sum = 0;
                start = k + 1;
            }
        }

        cout << "Case " << i + 1 << ":" << endl << maxsum << " " << start + 1 << " " << last + 1 << endl;
        //算法结束！-----------------------

    }
}

//我们发现1版本的内存仍然在限制，其实很大的原因是因为：申请了一个大数组的原因
//改良这个版本的好办法就是：把数组去掉，因为，只是用了一次就没有用了，可以当成一个流来输入

void Solution2::MaxSum2() {

    int n;
    int a[10002];

    //获取：组数
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        //获取：每组的个数
        int m;
        cin>>m;

        //给每组的数据赋值
        for (int j = 0; j < m; ++j) {
            cin>>a[j];
        }
//        //输出数据
//        for (int j = 0; j < m; ++j) {
//            cout<<a[j]<<"\t";
//        }

        //算法开始：----------------------
        int sum=0;//累积值 : 中间计算值
        int maxsum=-10001;//当前最大值 ： 目标值

        int start=0;//序列开始
        int last=0;//序列结束
        for (int k = 0; k < m; ++k) {
            int a=0;
            cin>>a;
            sum+=a;
            //求出最大值
            if(sum>maxsum)
            {
                maxsum=sum;
                last=k;
            }
            //上半部分是max的判断-------------------
            //下一次的计算：下半部分是加不加的判断
            if(sum<0)
            {
                sum=0;
                start=k+1;
            }
        }

        cout<<"Case "<<i+1<<":"<<endl
            <<maxsum<<" "<<start+1<<" "<<last+1<<endl;
        //算法结束！----------------------
    }
    cout<<endl;

}
