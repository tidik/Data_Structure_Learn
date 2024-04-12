//
// Created by Bachelor Lee on 2024/4/12.
//
//二分查找 适合排序的数据
#include "stdio.h"

/**
 * 需要查找的值
 * @param key
 * @return
 */
int binarySearch(int key);

int main(){
    int ret = binarySearch(15);
    if(ret == -1){
        printf("404 Not Found");
    }else{
        printf("%d",ret);
    }
    return 0;
}
int binarySearch(int key) {
    int arr[] = {1,3,5,6,7,12,13,15};
    int left = 0; //左指针在数组头部
    int right = 7; //右指针在数组尾部
    while(left <=right){
        int mid = (left+right)/2; //计算中间值
        if(key == arr[mid]){
            return arr[mid];
        }
        if(key < arr[mid]){ //说明带待找值在中间值的左侧，此时右指针左移
            right = mid -1;
        }
        if(key > arr[mid]){ //说明待查找值在中间值右侧，此时左指针右移动
            left = mid + 1;
        }
    }
    return -1; //没找到
}
