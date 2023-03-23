//#include <string>
//#include <iostream>
//#include "Stack_Made_2.h"
//
//bool checkMatching(std::string str) {
//    ArrayStack stack;
//    int Line_count = 0; // ¹®Àå ¼ö
//    int bracket_count = 0; // °ıÈ£ Â¦ ¼ö
//    int flag = 0;
//    for (int i = 0; i < str.length(); i++) {
//        if (str[i] == '\n')
//            Line_count++;
//    }
//
//    for (int i = 0; i < str.length(); i++) {
//        if (flag == 0 && (str[i] == '[' || str[i] == '(' || str[i] == '{')) {
//            stack.push(str[i]);
//        }
//        else if (flag==0 && str[i] == '\"') flag = 1;
//        else if (flag == 1 && str[i] == '\"') {
//            flag = 0;
//        }
//        else if (flag == 0 && (str[i] == ']' || str[i] == ')' || str[i] == '}')) {
//            int prev = stack.peek();
//            if ((str[i] == ']' && prev != '[') ||
//                (str[i] == ')' && prev != '(') ||
//                (str[i] == '}' && prev != '{')) break;
//            stack.pop();
//            bracket_count++;
//        }
//    }
//
//    if (!stack.isEmpty())
//        std::cout << "Error, Line_count : " << Line_count << ", " << "bracket_count : " << bracket_count;
//    else
//        std::cout << "OK, Line_count : " << Line_count << ", " << "bracket_count : " << bracket_count;
//    return stack.isEmpty();
//}
//
//int main() {
//    std::string Str, temp;
//    while (true) {
//        std::getline(std::cin, temp);
//        if (temp == "EOF")break;
//        Str.append(temp);
//        Str.append("\n");
//        std::cin.clear();
//    }
//    checkMatching(Str);
//
//    return 0;
//}