//
//  2_3.cpp
//  Y_H_C++
//
//  Created by Daniil Vilchinskiy on 19.11.2023.
//

#include <iostream>
/*
 A
 
 int main(){
     int x1, x2, y1, y2;
     std::cin >> x1;
     std::cin >> x2;
     std::cin >> y1;
     std::cin >> y2;
     if((x1 >=1 && x1<=8) && (x2 >=1 && x2<=8) && (y1 >=1 && y1<=8) && (y2 >=1 && y2<=8)){
         if((x1 == y1) || (x2 == y2) || (std::abs((y2 - x2)) == std::abs((y1 - x1)))){
             std::cout << "YES\n";
         } else {
             std::cout << "NO\n";
         }
     } else {
         std::cout << "NO\n";
     }
 }
 */

/*
 B
 
 int main(){
     unsigned int a,b,c;
     std::cin >> a;
     std::cin >> b;
     std::cin >> c;

     if (a + b <= c || a + c <= b || b + c <= a) {
         std::cout << "UNDEFINED\n";
     } else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
         std::cout << "YES\n";
     } else {
         std::cout << "NO\n";
     }
 }
 */

/*
 C
 
 int main(){
     int a;
     std::cin >> a;
     
     if (a % 400 == 0 || a % 4 == 0) {
         std::cout << "YES\n";
     } else if (a % 100 == 0){
         std::cout << "NO\n";
     } else {
         std::cout << "NO\n";
     }
 }
 */

/*
 D
 
 int main(){
     int month, year;
         std::cin >> month >> year;
      
         switch (month) {
             case 1:
             case 3:
             case 5:
             case 7:
             case 8:
             case 10:
             case 12:
                 std::cout << "31\n";
                 break;
             case 2:
                 if ((year % 400 == 0 || year % 100 != 0) && year % 4 == 0) {
                     std::cout << "29\n";
                 } else {
                     std::cout << "28\n";
                 }
                 break;
             default:
                 std::cout << "30\n";
         }
 }
 */

/*
 E
 
 int main() {
     int n, k;
     std::cin >> n >> k;
  
     int dayOfWeek = n;
  
     for (int i = 1; i < n; ++i) {
         std::cout << "   ";
     }
  
     for (int day = 1; day <= k; ++day) {
         if (day < 10) {
             std::cout << " ";
         }
  
         std::cout << day;
  
         if (dayOfWeek == 7) {
             std::cout << "\n";
             dayOfWeek = 1;
         } else {
             std::cout << " ";
             dayOfWeek += 1;
         }
     }
  
     if (dayOfWeek != 1) {
         std::cout << "\n";
     }
 }

 */

/*
 F
 
 int main(){
     std::string line;
     std::getline(std::cin, line);
     
     int result = 0;
     
     for(int symbol : line){
         switch (symbol) {
             case 48:
                 result += 0;
                 break;
             case 49:
                 result += 1;
                 break;
             case 50:
                 result += 2;
                 break;
             case 51:
                 result += 3;
                 break;
             case 52:
                 result += 4;
                 break;
             case 53:
                 result += 5;
                 break;
             case 54:
                 result += 6;
                 break;
             case 55:
                 result += 7;
                 break;
             case 56:
                 result += 8;
                 break;
             case 57:
                 result += 9;
                 break;
             default:
                 break;
         }
     }
     
     std::cout << result << "\n";
 }

 */

/*
 G
 
 int main() {
     int n;
     std::cin >> n;
  
     double sign = 1;
     double result = 0.0;
  
     for (int i = 1; i <= n; ++i) {
         result += sign / i;
         sign = -sign;
     }
     std::cout << result << "\n";
 }
 */
