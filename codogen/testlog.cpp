void a0l(){
std::string fn = __FUNCTION__;
Logger* log = Logger::GetInstance();
static uint id = log->TakeId(fn);
Timer t(id);
int num = -862393;
int den = 87;
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
std::thread t6(a0l);
std::thread t7(a0l);
t0.join();
t1.join();
t2.join();
t3.join();
t4.join();
t5.join();
t6.join();
t7.join();
int num = -83245;
int den = 94;
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
std::thread t1(a1l);
std::thread t2(a0l);
std::thread t3(a0l);
std::thread t4(a0l);
std::thread t5(a1l);
std::thread t6(a0l);
std::thread t7(a1l);
std::thread t8(a1l);
t0.join();
t1.join();
t2.join();
t3.join();
t4.join();
t5.join();
t6.join();
t7.join();
t8.join();
int num = -112519;
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

void a3l(){
std::string fn = __FUNCTION__;
Logger* log = Logger::GetInstance();
static uint id = log->TakeId(fn);
Timer t(id);
std::thread t0(a0l);
std::thread t1(a0l);
std::thread t2(a2l);
std::thread t3(a0l);
std::thread t4(a1l);
std::thread t5(a1l);
std::thread t6(a0l);
std::thread t7(a0l);
t0.join();
t1.join();
t2.join();
t3.join();
t4.join();
t5.join();
t6.join();
t7.join();
int num = 168887;
int den = 86;
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
std::thread t0(a2l);
std::thread t1(a0l);
std::thread t2(a1l);
t0.join();
t1.join();
t2.join();
int num = 322536;
int den = 50;
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

void a5l(){
std::string fn = __FUNCTION__;
Logger* log = Logger::GetInstance();
static uint id = log->TakeId(fn);
Timer t(id);
std::thread t0(a4l);
std::thread t1(a3l);
std::thread t2(a1l);
std::thread t3(a2l);
std::thread t4(a0l);
std::thread t5(a4l);
t0.join();
t1.join();
t2.join();
t3.join();
t4.join();
t5.join();
int num = 257533;
int den = 17;
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

void a6l(){
std::string fn = __FUNCTION__;
Logger* log = Logger::GetInstance();
static uint id = log->TakeId(fn);
Timer t(id);
std::thread t0(a0l);
std::thread t1(a4l);
t0.join();
t1.join();
int num = 432984;
int den = 79;
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

void a7l(){
std::string fn = __FUNCTION__;
Logger* log = Logger::GetInstance();
static uint id = log->TakeId(fn);
Timer t(id);
std::thread t0(a2l);
std::thread t1(a2l);
std::thread t2(a3l);
std::thread t3(a6l);
std::thread t4(a2l);
t0.join();
t1.join();
t2.join();
t3.join();
t4.join();
int num = -934909;
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

void a8l(){
std::string fn = __FUNCTION__;
Logger* log = Logger::GetInstance();
static uint id = log->TakeId(fn);
Timer t(id);
std::thread t0(a5l);
std::thread t1(a4l);
std::thread t2(a4l);
std::thread t3(a7l);
std::thread t4(a2l);
t0.join();
t1.join();
t2.join();
t3.join();
t4.join();
int num = 693232;
int den = 94;
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

void a9l(){
std::string fn = __FUNCTION__;
Logger* log = Logger::GetInstance();
static uint id = log->TakeId(fn);
Timer t(id);
std::thread t0(a4l);
std::thread t1(a7l);
std::thread t2(a8l);
std::thread t3(a1l);
std::thread t4(a0l);
t0.join();
t1.join();
t2.join();
t3.join();
t4.join();
int num = -281563;
int den = 33;
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

void a10l(){
std::string fn = __FUNCTION__;
Logger* log = Logger::GetInstance();
static uint id = log->TakeId(fn);
Timer t(id);
int num = 927213;
int den = 99;
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

void a11l(){
std::string fn = __FUNCTION__;
Logger* log = Logger::GetInstance();
static uint id = log->TakeId(fn);
Timer t(id);
int num = 416823;
int den = 71;
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

void a12l(){
std::string fn = __FUNCTION__;
Logger* log = Logger::GetInstance();
static uint id = log->TakeId(fn);
Timer t(id);
std::thread t0(a1l);
std::thread t1(a10l);
std::thread t2(a6l);
t0.join();
t1.join();
t2.join();
int num = -60330;
int den = 102;
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

void a13l(){
std::string fn = __FUNCTION__;
Logger* log = Logger::GetInstance();
static uint id = log->TakeId(fn);
Timer t(id);
std::thread t0(a12l);
std::thread t1(a5l);
std::thread t2(a0l);
std::thread t3(a4l);
t0.join();
t1.join();
t2.join();
t3.join();
int num = -175687;
int den = 50;
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

void a14l(){
std::string fn = __FUNCTION__;
Logger* log = Logger::GetInstance();
static uint id = log->TakeId(fn);
Timer t(id);
std::thread t0(a3l);
std::thread t1(a4l);
std::thread t2(a1l);
std::thread t3(a3l);
std::thread t4(a9l);
std::thread t5(a1l);
std::thread t6(a9l);
t0.join();
t1.join();
t2.join();
t3.join();
t4.join();
t5.join();
t6.join();
int num = -280811;
int den = 75;
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

void a15l(){
std::string fn = __FUNCTION__;
Logger* log = Logger::GetInstance();
static uint id = log->TakeId(fn);
Timer t(id);
std::thread t0(a4l);
std::thread t1(a6l);
t0.join();
t1.join();
int num = 81661;
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

void a16l(){
std::string fn = __FUNCTION__;
Logger* log = Logger::GetInstance();
static uint id = log->TakeId(fn);
Timer t(id);
std::thread t0(a2l);
std::thread t1(a7l);
std::thread t2(a4l);
std::thread t3(a2l);
std::thread t4(a7l);
std::thread t5(a12l);
std::thread t6(a6l);
std::thread t7(a5l);
t0.join();
t1.join();
t2.join();
t3.join();
t4.join();
t5.join();
t6.join();
t7.join();
int num = 721053;
int den = 48;
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

void a17l(){
std::string fn = __FUNCTION__;
Logger* log = Logger::GetInstance();
static uint id = log->TakeId(fn);
Timer t(id);
std::thread t0(a0l);
std::thread t1(a4l);
std::thread t2(a10l);
std::thread t3(a11l);
std::thread t4(a3l);
std::thread t5(a8l);
t0.join();
t1.join();
t2.join();
t3.join();
t4.join();
t5.join();
int num = 132815;
int den = 93;
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
std::thread t0(a5l);
std::thread t1(a2l);
std::thread t2(a8l);
std::thread t3(a5l);
std::thread t4(a8l);
std::thread t5(a4l);
std::thread t6(a0l);
std::thread t7(a15l);
std::thread t8(a3l);
std::thread t9(a0l);
std::thread t10(a2l);
std::thread t11(a7l);
std::thread t12(a11l);
std::thread t13(a6l);
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
t10.join();
t11.join();
t12.join();
t13.join();
}