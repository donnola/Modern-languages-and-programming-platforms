void a0(){
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

void a1(){
std::thread t0(a0);
std::thread t1(a0);
std::thread t2(a0);
std::thread t3(a0);
std::thread t4(a0);
std::thread t5(a0);
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

void a2(){
std::thread t0(a0);
std::thread t1(a0);
std::thread t2(a1);
std::thread t3(a0);
std::thread t4(a1);
std::thread t5(a1);
std::thread t6(a1);
std::thread t7(a0);
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

void a3(){
std::thread t0(a2);
std::thread t1(a1);
std::thread t2(a0);
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

void a4(){
std::thread t0(a0);
std::thread t1(a0);
std::thread t2(a2);
std::thread t3(a0);
std::thread t4(a1);
std::thread t5(a0);
std::thread t6(a2);
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

void test_without_log(){
std::thread t0(a4);
std::thread t1(a4);
std::thread t2(a2);
std::thread t3(a2);
std::thread t4(a3);
std::thread t5(a4);
std::thread t6(a0);
std::thread t7(a3);
std::thread t8(a1);
std::thread t9(a1);
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