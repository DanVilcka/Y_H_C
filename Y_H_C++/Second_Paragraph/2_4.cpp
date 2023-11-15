//
//  2_4.cpp
//  Y_H_C++
//
//  Created by Daniil Vilchinskiy on 19.11.2023.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

// A
//int main() {
//    std::string password;
//    std::getline(std::cin, password);
//    int result = 0;
//
//    if (password.size() >= 8 && password.size() <= 14) {
//        int big_Letters = 0;
//        int small_letters = 0;
//        int nums = 0;
//        int els = 0;
//        
//        for(char i : password){
//            if((int(i) <= 126) && (int(i) >= 33)){
//                if (islower(int(i))) {
//                    small_letters += 1;
//                }
//                if (isupper(int(i))) {
//                    big_Letters += 1;
//                }
//                if (isdigit(int(i))) {
//                    nums += 1;
//                }
//                if (ispunct(int(i))) {
//                    els += 1;
//                }
//                
//            } else {
//                result = 0;
//                break;
//            }
//            
//            if(
//               (big_Letters >= 1 && small_letters >= 1 && nums >= 1) ||
//               (big_Letters >= 1 && small_letters >= 1 && els >= 1) ||
//               (nums >= 1 && small_letters >= 1 && els >= 1) ||
//               (nums >= 1 && big_Letters >= 1 && els >= 1)
//               ){
//                result = 1;
//            }
//        }
//    } else {
//        result = 0;
//    }
//    
//    if (result) {
//        std::cout << "YES\n";
//    } else {
//        std::cout << "NO\n";
//    }
//}
