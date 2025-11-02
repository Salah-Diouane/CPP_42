#include "RPN.hpp"
#include <string>
#include <cctype>

RPN::RPN(){
}

RPN::RPN(const RPN& other){
    *this = other;
}

RPN& RPN::operator=(const RPN& other){
    this->stack = other.stack;
    return *this;
}

RPN::~RPN(){
}

bool RPN::is_operator(char c)
{
    return (c == '-' || c == '+' || c == '/' || c == '*');
}

bool RPN::check_input(const std::string &str) {
    
    int number = 0; 
    int operators = 0;
    bool in_number = false;

    for (size_t i = 0; i < str.size(); ++i) {

        char c = str[i];

        if (std::isspace(c)) {

            if (in_number) {
                number++;
                in_number = false;
            }

            continue;

        }

        if (std::isdigit(c)) {
            in_number = true;
        } else if (is_operator(c)) {

            operators++;

            if (in_number) {
                number++;
                in_number = false;
            }

        } else
            return false;
    }

    if (in_number) {
        number++;
    }

    return (number == operators + 1);
}

bool RPN::start_Rpn(const std::string &str)
{

    if (!check_input(str))
    {
        std::cout << "Error !!" << std::endl;
        return false;
    }

    float val = 0, res = 0, first = 0, second = 0;

    for (size_t i = 0; i < str.size(); i++)
    {

        if (isdigit(str[i]))
        {
            val = str[i] - '0';
            stack.push(val);
        }
        else if (is_operator(str[i]))
        {
            if (stack.size() < 2)
            {
                std::cerr << "Error !!!" << std::endl;
                return false;
            }

            first = stack.top();
            stack.pop();
            second = stack.top();
            stack.pop();

            if (str[i] == '+')
                res = second + first;
            else if (str[i] == '-')
                res = second - first;
            else if (str[i] == '*')
                res = second * first;
            else if (str[i] == '/')
            {
                if (first == 0) {
                    std::cerr << "Error: Division by zero!" << std::endl;
                    return false;
                }
                res = second / first;
            }
            stack.push(res);
        }
    }

    if (stack.size() != 1)
    {
        std::cerr << "Error !!" << std::endl;
        return false;
    }

    std::cout << stack.top() << std::endl;
    return true;
}
      