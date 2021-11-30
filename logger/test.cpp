void a0(){
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

void a2(){
std::thread t0(a0);
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

void a3(){
std::thread t0(a1);
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

void a4(){
std::thread t0(a1);
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

void a5(){
std::thread t0(a2);
std::thread t1(a2);
std::thread t2(a1);
std::thread t3(a2);
std::thread t4(a1);
std::thread t5(a0);
std::thread t6(a2);
std::thread t7(a3);
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

void a6(){
std::thread t0(a4);
std::thread t1(a0);
std::thread t2(a4);
std::thread t3(a3);
std::thread t4(a2);
std::thread t5(a2);
std::thread t6(a1);
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

void a7(){
std::thread t0(a2);
std::thread t1(a1);
std::thread t2(a4);
std::thread t3(a2);
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

void a8(){
std::thread t0(a5);
std::thread t1(a5);
std::thread t2(a4);
std::thread t3(a3);
std::thread t4(a7);
std::thread t5(a4);
std::thread t6(a3);
std::thread t7(a3);
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

void a9(){
std::thread t0(a4);
std::thread t1(a5);
std::thread t2(a2);
std::thread t3(a0);
std::thread t4(a7);
std::thread t5(a1);
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

void a10(){
std::thread t0(a1);
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

void a11(){
std::thread t0(a0);
std::thread t1(a4);
std::thread t2(a6);
std::thread t3(a9);
std::thread t4(a1);
std::thread t5(a2);
std::thread t6(a2);
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

void a12(){
std::thread t0(a1);
std::thread t1(a5);
std::thread t2(a3);
std::thread t3(a2);
std::thread t4(a7);
std::thread t5(a5);
std::thread t6(a5);
std::thread t7(a10);
std::thread t8(a4);
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

void a13(){
std::thread t0(a11);
std::thread t1(a2);
std::thread t2(a9);
std::thread t3(a3);
std::thread t4(a12);
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

void a14(){
std::thread t0(a5);
std::thread t1(a2);
std::thread t2(a6);
std::thread t3(a7);
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

void a15(){
std::thread t0(a0);
std::thread t1(a6);
std::thread t2(a1);
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

void test_without_log(){
std::thread t0(a13);
std::thread t1(a8);
std::thread t2(a7);
std::thread t3(a2);
std::thread t4(a3);
std::thread t5(a7);
std::thread t6(a14);
std::thread t7(a4);
std::thread t8(a10);
std::thread t9(a8);
std::thread t10(a2);
std::thread t11(a4);
std::thread t12(a9);
std::thread t13(a9);
std::thread t14(a8);
std::thread t15(a9);
std::thread t16(a2);
std::thread t17(a7);
std::thread t18(a7);
std::thread t19(a4);
std::thread t20(a15);
std::thread t21(a9);
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