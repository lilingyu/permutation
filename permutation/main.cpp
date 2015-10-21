//
//  main.cpp
//  permutation
//
//  Created by LiLingyu on 15/10/21.
//  Copyright © 2015年 LiLingyu. All rights reserved.
//

#include <iostream>

static void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int permutation_core(int* a, int k, int n)
{
    static int count = 0;
    if (k==n-1) {
        //print out
        for (int i=0; i<n; i++) {
            printf("%d\t", a[i]);
        }
        printf("\n");
        count++;
    }
    else{
        for (int i=k; i<n; i++) {
            swap(&a[k], &a[i]);
            permutation_core(a, k+1, n);
            swap(&a[k], &a[i]);
        }
        
    }
    return count;
}

int main(int argc, const char * argv[]) {
    const int len=5;
    int a[len]={0, 1, 2, 3, 4};
    
    int n = permutation_core(a, 0, len);
    
    printf("number: %d\n", n);
    
    return 0;
}
