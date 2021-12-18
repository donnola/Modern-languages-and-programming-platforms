void a0(){
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

void a1(){
std::thread t0(a0);
std::thread t1(a0);
std::thread t2(a0);
std::thread t3(a0);
std::thread t4(a0);
std::thread t5(a0);
std::thread t6(a0);
std::thread t7(a0);
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

void a2(){
std::thread t0(a0);
std::thread t1(a1);
std::thread t2(a0);
std::thread t3(a0);
std::thread t4(a0);
std::thread t5(a1);
std::thread t6(a0);
std::thread t7(a1);
std::thread t8(a1);
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

void a3(){
std::thread t0(a0);
std::thread t1(a0);
std::thread t2(a2);
std::thread t3(a0);
std::thread t4(a1);
std::thread t5(a1);
std::thread t6(a0);
std::thread t7(a0);
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

void a4(){
std::thread t0(a2);
std::thread t1(a0);
std::thread t2(a1);
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

void a5(){
std::thread t0(a4);
std::thread t1(a3);
std::thread t2(a1);
std::thread t3(a2);
std::thread t4(a0);
std::thread t5(a4);
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

void a6(){
std::thread t0(a0);
std::thread t1(a4);
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

void a7(){
std::thread t0(a2);
std::thread t1(a2);
std::thread t2(a3);
std::thread t3(a6);
std::thread t4(a2);
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

void a8(){
std::thread t0(a5);
std::thread t1(a4);
std::thread t2(a4);
std::thread t3(a7);
std::thread t4(a2);
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

void a9(){
std::thread t0(a4);
std::thread t1(a7);
std::thread t2(a8);
std::thread t3(a1);
std::thread t4(a0);
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

void a10(){
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

void a11(){
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

void a12(){
std::thread t0(a1);
std::thread t1(a10);
std::thread t2(a6);
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

void a13(){
std::thread t0(a12);
std::thread t1(a5);
std::thread t2(a0);
std::thread t3(a4);
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

void a14(){
std::thread t0(a3);
std::thread t1(a4);
std::thread t2(a1);
std::thread t3(a3);
std::thread t4(a9);
std::thread t5(a1);
std::thread t6(a9);
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

void a15(){
std::thread t0(a4);
std::thread t1(a6);
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

void a16(){
std::thread t0(a2);
std::thread t1(a7);
std::thread t2(a4);
std::thread t3(a2);
std::thread t4(a7);
std::thread t5(a12);
std::thread t6(a6);
std::thread t7(a5);
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

void a17(){
std::thread t0(a0);
std::thread t1(a4);
std::thread t2(a10);
std::thread t3(a11);
std::thread t4(a3);
std::thread t5(a8);
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

void test_without_log(){
std::thread t0(a5);
std::thread t1(a2);
std::thread t2(a8);
std::thread t3(a5);
std::thread t4(a8);
std::thread t5(a4);
std::thread t6(a0);
std::thread t7(a15);
std::thread t8(a3);
std::thread t9(a0);
std::thread t10(a2);
std::thread t11(a7);
std::thread t12(a11);
std::thread t13(a6);
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