using namespace std::this_thread;
using namespace std::chrono;

void a1() {
    std::string fn = __FUNCTION__;
    Logger* log = Logger::GetInstance();
    static uint id = log->TakeId(fn);
    Timer t(id);

    std::vector<int> a;
    for (int i = 0; i < 20000; ++i) {
        a.push_back(1);
    }
}

void b1() {
    std::string fn = __FUNCTION__;
    Logger* log = Logger::GetInstance();
    static uint id = log->TakeId(fn);
    Timer t(id);

    std::vector<int> a;
    for (int i = 0; i < 30000; ++i) {
        a.push_back(1);
    }
}

void c1() {
    std::string fn = __FUNCTION__;
    Logger* log = Logger::GetInstance();
    static uint id = log->TakeId(fn);
    Timer t(id);

    std::vector<int> a;
    for (int i = 0; i < 50000; ++i) {
        a.push_back(1);
    }
}

void d1() {
    std::string fn = __FUNCTION__;
    Logger* log = Logger::GetInstance();
    static uint id = log->TakeId(fn);
    Timer t(id);

    std::vector<int> a;
    for (int i = 0; i < 80000; ++i) {
        a.push_back(1);
    }
}

void a2() {
    std::vector<int> a;
    for (int i = 0; i < 20000; ++i) {
        a.push_back(1);
    }
}

void b2() {
    std::vector<int> a;
    for (int i = 0; i < 30000; ++i) {
        a.push_back(1);
    }
}

void c2() {
    std::vector<int> a;
    for (int i = 0; i < 50000; ++i) {
        a.push_back(1);
    }
}

void d2() {
    std::vector<int> a;
    for (int i = 0; i < 80000; ++i) {
        a.push_back(1);
    }
}

void test1() {
    {
        auto start = std::chrono::high_resolution_clock::now();

        std::thread t1(a1);
        std::thread t2(b1);


        t1.join();
        t2.join();

        auto end = std::chrono::high_resolution_clock::now();
        std::cout << "test1 with log: " << std::chrono::duration<double,std::milli>(end - start).count() << " milliseconds\n";
    }
    {
        auto start = std::chrono::high_resolution_clock::now();

        std::thread t1(a2);
        std::thread t2(b2);


        t1.join();
        t2.join();

        auto end = std::chrono::high_resolution_clock::now();
        std::cout << "test1 without log: " << std::chrono::duration<double,std::milli>(end - start).count() << " milliseconds\n";
    }
}

void test2() {
    {
        auto start = std::chrono::high_resolution_clock::now();
        std::thread t1(d1);
        std::thread t2(b1);
        std::thread t3(c1);
        std::thread t4(d1);
        std::thread t5(a1);
        std::thread t6(c1);
        std::thread t7(a1);
        std::thread t8(b1);
        std::thread t9(d1);
        std::thread t10(d1);

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

        auto end = std::chrono::high_resolution_clock::now();
        std::cout << "test2 with log: " << std::chrono::duration<double,std::milli>(end - start).count() << " milliseconds\n";
    }
    {
        auto start = std::chrono::high_resolution_clock::now();
        std::thread t1(d2);
        std::thread t2(b2);
        std::thread t3(c2);
        std::thread t4(d2);
        std::thread t5(a2);
        std::thread t6(c2);
        std::thread t7(a2);
        std::thread t8(b2);
        std::thread t9(d2);
        std::thread t10(d2);

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

        auto end = std::chrono::high_resolution_clock::now();
        std::cout << "test2 without log: " << std::chrono::duration<double,std::milli>(end - start).count() << " milliseconds\n";
    }
}

void test3() {
    {
        auto start = std::chrono::high_resolution_clock::now();
        std::thread t1(d1);
        std::thread t2(d1);
        std::thread t3(d1);
        std::thread t4(d1);
        std::thread t5(d1);
        std::thread t6(d1);
        std::thread t7(d1);
        std::thread t8(d1);
        std::thread t9(d1);
        std::thread t10(d1);
        std::thread t11(d1);
        std::thread t12(d1);
        std::thread t13(d1);
        std::thread t14(d1);
        std::thread t15(d1);
        std::thread t16(d1);

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
        auto end = std::chrono::high_resolution_clock::now();
        std::cout << "test3 with log: " << std::chrono::duration<double,std::milli>(end - start).count() << " milliseconds\n";
    }
    {
        auto start = std::chrono::high_resolution_clock::now();
        std::thread t1(d2);
        std::thread t2(d2);
        std::thread t3(d2);
        std::thread t4(d2);
        std::thread t5(d2);
        std::thread t6(d2);
        std::thread t7(d2);
        std::thread t8(d2);
        std::thread t9(d2);
        std::thread t10(d2);
        std::thread t11(d2);
        std::thread t12(d2);
        std::thread t13(d2);
        std::thread t14(d2);
        std::thread t15(d2);
        std::thread t16(d2);

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
        auto end = std::chrono::high_resolution_clock::now();
        std::cout << "test3 without log: " << std::chrono::duration<double,std::milli>(end - start).count() << " milliseconds\n";
    }
}