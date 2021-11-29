void a0l(){
std::string fn = __FUNCTION__;
Logger* log = Logger::GetInstance();
static uint id = log->TakeId(fn);
Timer t(id);
int num = 518105;
int den = 69;
int quotient = 0;
int digit;
int tden = den;
int pow10 = 1;
while (tden * 10 < num) {
    tden *= 10;
    pow10 *= 10;
}
while (num > den) {
    digit = num / tden;
    quotient = quotient * 10 + digit;
    num %= tden;
    if (num == 0)
    break;
    tden /= 10;
    if (pow10 > 1)
    pow10 /= 10;
}
quotient *= pow10;
}

void a1l(){
std::string fn = __FUNCTION__;
Logger* log = Logger::GetInstance();
static uint id = log->TakeId(fn);
Timer t(id);
std::thread t0(a0l);
std::thread t1(a0l);
std::thread t2(a0l);
std::thread t3(a0l);
std::thread t4(a0l);
std::thread t5(a0l);
t0.join();
t1.join();
t2.join();
t3.join();
t4.join();
t5.join();
int num = -880973;
int den = 101;
int quotient = 0;
int digit;
int tden = den;
int pow10 = 1;
while (tden * 10 < num) {
    tden *= 10;
    pow10 *= 10;
}
while (num > den) {
    digit = num / tden;
    quotient = quotient * 10 + digit;
    num %= tden;
    if (num == 0)
    break;
    tden /= 10;
    if (pow10 > 1)
    pow10 /= 10;
}
quotient *= pow10;
}

void a2l(){
std::string fn = __FUNCTION__;
Logger* log = Logger::GetInstance();
static uint id = log->TakeId(fn);
Timer t(id);
std::thread t0(a0l);
std::thread t1(a0l);
std::thread t2(a1l);
std::thread t3(a0l);
std::thread t4(a1l);
std::thread t5(a1l);
std::thread t6(a1l);
std::thread t7(a0l);
t0.join();
t1.join();
t2.join();
t3.join();
t4.join();
t5.join();
t6.join();
t7.join();
int num = 687427;
int den = 90;
int quotient = 0;
int digit;
int tden = den;
int pow10 = 1;
while (tden * 10 < num) {
    tden *= 10;
    pow10 *= 10;
}
while (num > den) {
    digit = num / tden;
    quotient = quotient * 10 + digit;
    num %= tden;
    if (num == 0)
    break;
    tden /= 10;
    if (pow10 > 1)
    pow10 /= 10;
}
quotient *= pow10;
}

void a3l(){
std::string fn = __FUNCTION__;
Logger* log = Logger::GetInstance();
static uint id = log->TakeId(fn);
Timer t(id);
std::thread t0(a2l);
std::thread t1(a1l);
std::thread t2(a0l);
t0.join();
t1.join();
t2.join();
int num = -789775;
int den = 63;
int quotient = 0;
int digit;
int tden = den;
int pow10 = 1;
while (tden * 10 < num) {
    tden *= 10;
    pow10 *= 10;
}
while (num > den) {
    digit = num / tden;
    quotient = quotient * 10 + digit;
    num %= tden;
    if (num == 0)
    break;
    tden /= 10;
    if (pow10 > 1)
    pow10 /= 10;
}
quotient *= pow10;
}

void a4l(){
std::string fn = __FUNCTION__;
Logger* log = Logger::GetInstance();
static uint id = log->TakeId(fn);
Timer t(id);
std::thread t0(a0l);
std::thread t1(a0l);
std::thread t2(a2l);
std::thread t3(a0l);
std::thread t4(a1l);
std::thread t5(a0l);
std::thread t6(a2l);
t0.join();
t1.join();
t2.join();
t3.join();
t4.join();
t5.join();
t6.join();
int num = -473427;
int den = 78;
int quotient = 0;
int digit;
int tden = den;
int pow10 = 1;
while (tden * 10 < num) {
    tden *= 10;
    pow10 *= 10;
}
while (num > den) {
    digit = num / tden;
    quotient = quotient * 10 + digit;
    num %= tden;
    if (num == 0)
    break;
    tden /= 10;
    if (pow10 > 1)
    pow10 /= 10;
}
quotient *= pow10;
}

void test_with_log(){
std::thread t0(a4l);
std::thread t1(a4l);
std::thread t2(a2l);
std::thread t3(a2l);
std::thread t4(a3l);
std::thread t5(a4l);
std::thread t6(a0l);
std::thread t7(a3l);
std::thread t8(a1l);
std::thread t9(a1l);
t0.join();
t1.join();
t2.join();
t3.join();
t4.join();
t5.join();
t6.join();
t7.join();
t8.join();
t9.join();
}