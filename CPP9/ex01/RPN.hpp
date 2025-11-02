#include <iostream>
#include <sstream>
#include <iostream>
#include <stack>
#include <cctype>

class RPN {

    private:
        std::stack<float> stack;

    public:
        RPN();
        RPN(const RPN& other);
        RPN& operator=(const RPN& other);
        ~RPN();

        bool is_operator(char c);
        bool check_input(const std::string &str);
        bool start_Rpn(const std::string &str);
};

