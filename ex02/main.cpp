#include "Array.hpp"

int main() {
    try {
        std::cout << GREEN << "\n===== Int test =====" << END << std::endl;
        Array<int> nums = Array<int>(10);
        for (size_t i = 0; i < nums.size(); i++) {
            nums[i] = i;
            std::cout << "nums[" << i << "] = " << nums[i] << std::endl;
        }

        Array<int> copy_const(nums);
        for (size_t i = 0; i < copy_const.size(); i++)
            std::cout << "copy_const[" << i << "] = " << copy_const[i] << std::endl;

        Array<int> assignment_operator = Array<int>();
        assignment_operator = nums;
        for (size_t i = 0; i < assignment_operator.size(); i++)
            std::cout << "assignment_operator[" << i << "] = " << assignment_operator[i] << std::endl;

        std::cout << "size of nums:  [" << nums.size() << "]" << std::endl;

        std::cout << nums[15] << std::endl;

    }
    catch (std::exception & e){
        std::cout << RED << "<<< Error >>>" << END << std::endl;
        std::cout << e.what() << std::endl;
    }



    // 異なる型のテスト
    try {
        std::cout << GREEN << "\n===== Different Type Test (std::string) =====" << END << std::endl;
        Array<std::string> strings(5);
        strings[0] = "Hello";
        strings[1] = "C++";
        strings[2] = "Template";
        strings[3] = "Array";
        strings[4] = "Class";

        for (size_t i = 0; i < strings.size(); i++)
            std::cout << "strings[" << i << "] = " << strings[i] << std::endl;

        std::cout << strings[-1] << std::endl;
    }
    catch (const std::exception & e) {
        std::cout << RED << "<<< Error in string test >>>" << END << std::endl;
        std::cout << e.what() << std::endl;
    }
}
