void a0l(){
std::string fn = __FUNCTION__;
Logger* log = Logger::GetInstance();
static uint id = log->TakeId(fn);
Timer t(id);
int num = 104997;
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
int num = -509189;
int den = 56;
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
t0.join();
int num = -791194;
int den = 54;
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
std::thread t0(a1l);
t0.join();
int num = 915733;
int den = 19;
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
std::thread t0(a1l);
t0.join();
int num = -983171;
int den = 82;
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
std::thread t0(a2l);
std::thread t1(a2l);
std::thread t2(a1l);
std::thread t3(a2l);
std::thread t4(a1l);
std::thread t5(a0l);
std::thread t6(a2l);
std::thread t7(a3l);
t0.join();
t1.join();
t2.join();
t3.join();
t4.join();
t5.join();
t6.join();
t7.join();
int num = 788169;
int den = 19;
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
std::thread t0(a4l);
std::thread t1(a0l);
std::thread t2(a4l);
std::thread t3(a3l);
std::thread t4(a2l);
std::thread t5(a2l);
std::thread t6(a1l);
t0.join();
t1.join();
t2.join();
t3.join();
t4.join();
t5.join();
t6.join();
int num = -751033;
int den = 62;
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
std::thread t1(a1l);
std::thread t2(a4l);
std::thread t3(a2l);
t0.join();
t1.join();
t2.join();
t3.join();
int num = 88105;
int den = 22;
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
std::thread t1(a5l);
std::thread t2(a4l);
std::thread t3(a3l);
std::thread t4(a7l);
std::thread t5(a4l);
std::thread t6(a3l);
std::thread t7(a3l);
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
int num = 656559;
int den = 38;
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
std::thread t1(a5l);
std::thread t2(a2l);
std::thread t3(a0l);
std::thread t4(a7l);
std::thread t5(a1l);
t0.join();
t1.join();
t2.join();
t3.join();
t4.join();
t5.join();
int num = 698957;
int den = 39;
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
std::thread t0(a1l);
t0.join();
int num = -336176;
int den = 56;
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
std::thread t0(a0l);
std::thread t1(a4l);
std::thread t2(a6l);
std::thread t3(a9l);
std::thread t4(a1l);
std::thread t5(a2l);
std::thread t6(a2l);
t0.join();
t1.join();
t2.join();
t3.join();
t4.join();
t5.join();
t6.join();
int num = 644449;
int den = 46;
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
std::thread t1(a5l);
std::thread t2(a3l);
std::thread t3(a2l);
std::thread t4(a7l);
std::thread t5(a5l);
std::thread t6(a5l);
std::thread t7(a10l);
std::thread t8(a4l);
t0.join();
t1.join();
t2.join();
t3.join();
t4.join();
t5.join();
t6.join();
t7.join();
t8.join();
int num = -729079;
int den = 46;
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
std::thread t0(a11l);
std::thread t1(a2l);
std::thread t2(a9l);
std::thread t3(a3l);
std::thread t4(a12l);
t0.join();
t1.join();
t2.join();
t3.join();
t4.join();
int num = 116997;
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

void a14l(){
std::string fn = __FUNCTION__;
Logger* log = Logger::GetInstance();
static uint id = log->TakeId(fn);
Timer t(id);
std::thread t0(a5l);
std::thread t1(a2l);
std::thread t2(a6l);
std::thread t3(a7l);
t0.join();
t1.join();
t2.join();
t3.join();
int num = 446249;
int den = 98;
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
std::thread t0(a0l);
std::thread t1(a6l);
std::thread t2(a1l);
t0.join();
t1.join();
t2.join();
int num = 433033;
int den = 28;
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
std::thread t0(a13l);
std::thread t1(a8l);
std::thread t2(a7l);
std::thread t3(a2l);
std::thread t4(a3l);
std::thread t5(a7l);
std::thread t6(a14l);
std::thread t7(a4l);
std::thread t8(a10l);
std::thread t9(a8l);
std::thread t10(a2l);
std::thread t11(a4l);
std::thread t12(a9l);
std::thread t13(a9l);
std::thread t14(a8l);
std::thread t15(a9l);
std::thread t16(a2l);
std::thread t17(a7l);
std::thread t18(a7l);
std::thread t19(a4l);
std::thread t20(a15l);
std::thread t21(a9l);
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
t14.join();
t15.join();
t16.join();
t17.join();
t18.join();
t19.join();
t20.join();
t21.join();
}