/*************************************************************************
	> File Name: quicksort.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月18日 星期四 17时09分57秒
 ************************************************************************/

#include <iostream>
#include <assert.h>
using namespace std;

template<typename Iterator,typename CompareType=std::less<typename std::iterator_traits<Iterator>::value_type>>
Iterator partition(const Iterator begin,const Iterator end,const Iterator partition_iter,CompareType compare=CompareType()) {
    //typedef typename std::iterator_traits<Iterator>::value_type T;// 迭代器指向对象的值类型
    auto size=std::distance(begin,end);
    assert(size>=0);
    if(size==0) return end;  //空序列，返回end
//            if(size<=1)
//                return begin;
    assert(std::distance(begin,partition_iter)>=0 &&std::distance(partition_iter,end)>0);
    auto smaller_next=begin;  //指向比key小的元素区间的下一个(即大于等于key元素区间的第一个），其中key为序列最后一个元素
    auto current=begin;  //指向当前待处理的元素
    std::swap(*partition_iter,*(end-1));//交换partition元素到末尾
    while(current!=end-1)
    {
        if(compare(*current,*(end-1)))
        {
            std::swap(*smaller_next,*current);
            smaller_next++;
        }
        current++;
    }
    std::swap(*smaller_next,*(end-1));//交换partition元素到它的位置
    return smaller_next;
}

