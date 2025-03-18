//#include <stdio.h>
//
//int IsPerfect(int x) {
//    int sum = 0;
//    for (int j = 1; j <= x / 2; j++) {
//        if (x % j == 0) {
//            sum += j;
//        }
//    }
//    if (sum == x) {
//        return 1;
//    }
//    return 0;
//}
//
//int main() {
//    for (int i = 1; i <= 1000; i++) {
//        int ret = IsPerfect(i);
//        if (ret == 1) {
//            printf("%d is a perfect number\n", i);
//        }
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int IsPerfect(int x) 
//{
//    int sum = 0;
//    for (int j = 1; j <= x / 2; j++) 
//    {
//        if (x % j == 0)
//        {
//            sum += j;
//        }
//    }
//    if (sum == x)
//        return x;
//    return 0;
//}
//
//int main() 
//{
//    for (int i = 1; i <= 1000; i++) 
//    {
//        if (IsPerfect(i)) 
//        {
//            printf("%d is a perfect number\n", i);
//        }
//    }
//    return 0;
//}