#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

std::vector<std::string> functions;
std::vector<std::string> templates;
std::string logger_template = "std::string fn = __FUNCTION__;\n"
                              "Logger* log = Logger::GetInstance();\n"
                              "static uint id = log->TakeId(fn);\n"
                              "Timer t(id);\n";
std::string thread_template_start = "std::thread t";
std::string thread_template_end = ".join();\n";

std::string func_div = "int quotient = 0;\n"
                       "int digit;\n"
                       "int tden = den;\n"
                       "int pow10 = 1;\n"
                       "while (tden * 10 < num) {\n"
                       "    tden *= 10;\n"
                       "    pow10 *= 10;\n"
                       "}\n"
                       "while (num > den) {\n"
                       "    digit = num / tden;\n"
                       "    quotient = quotient * 10 + digit;\n"
                       "    num %= tden;\n"
                       "    if (num == 0)\n"
                       "    break;\n"
                       "    tden /= 10;\n"
                       "    if (pow10 > 1)\n"
                       "    pow10 /= 10;\n"
                       "}\n"
                       "quotient *= pow10;\n"
                       "}\n\n";

int main() {
    std::ofstream test_with_log("testlog.cpp");
    std::ofstream test_without_log("test.cpp");
    srand(static_cast<unsigned int>(time(0)));
    int func_num  = rand() % 15 + 1;
    for (int i = 0; i < func_num; ++i) {
        functions.push_back("a" + std::to_string(i));
    }
    int num = rand() * rand() % 1000000 + 12345;
    int den = rand() % 100 + 3;
    test_with_log << "void " + functions[0] + "l(){\n" + logger_template + "int num = " + std::to_string(num) + ";\nint den = " +
            std::to_string(den) + ";\n" + func_div;
    test_without_log << "void " + functions[0] + "(){\n" + "int num = " + std::to_string(num) + ";\nint den = " +
                        std::to_string(den) + ";\n" + func_div;
    for (int i = 1; i < functions.size(); ++i) {
        num = rand() * rand() % 1000000 + 12345;
        den = rand() % 100 + 3;
        int thread_num = rand() % 10;
        test_with_log << "void " + functions[i] + "l(){\n" + logger_template;
        test_without_log << "void " + functions[i] + "(){\n";
        for (int j = 0; j < thread_num; ++j) {
            int k = rand() % i;
            test_with_log << thread_template_start + std::to_string(j) + "(" + functions[k] + "l);\n";
            test_without_log << thread_template_start + std::to_string(j) + "(" + functions[k] + ");\n";
        }
        for (int j = 0; j < thread_num; ++j) {
            test_with_log << "t" + std::to_string(j) + thread_template_end;
            test_without_log << "t" + std::to_string(j) + thread_template_end;
        }
        test_with_log << "int num = " + std::to_string(num) + ";\nint den = " +
                         std::to_string(den) + ";\n" + func_div;
        test_without_log << "int num = " + std::to_string(num) + ";\nint den = " +
                            std::to_string(den) + ";\n" + func_div;
    }
    test_with_log << "void test_with_log(){\n";
    test_without_log << "void test_without_log(){\n";
    int thread_num = rand() % 17 + 6;
    for (int j = 0; j < thread_num; ++j) {
        int k = rand() % functions.size();
        test_with_log << thread_template_start + std::to_string(j) + "(" + functions[k] + "l);\n";
        test_without_log << thread_template_start + std::to_string(j) + "(" + functions[k] + ");\n";
    }
    for (int j = 0; j < thread_num; ++j) {
        test_with_log << "t" + std::to_string(j) + thread_template_end;
        test_without_log << "t" + std::to_string(j) + thread_template_end;
    }
    test_with_log << "}";
    test_without_log << "}";
    test_with_log.close();
    test_without_log.close();
    return 0;
}
