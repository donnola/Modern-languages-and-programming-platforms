using namespace std::this_thread;
using namespace std::chrono;

void a1() {
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
    for (int i = 0; i < 80000; ++i) {
        a.push_back(1);
    }
}

void test1() {
    {
        auto start = std::chrono::high_resolution_clock::now();

        std::thread t1(a1);
        std::thread t2(a1);


        t1.join();
        t2.join();

        auto end = std::chrono::high_resolution_clock::now();
        std::cout << "test1 with log: " << std::chrono::duration<double,std::milli>(end - start).count() << " milliseconds\n";
    }
    {
        auto start = std::chrono::high_resolution_clock::now();

        std::thread t1(a2);
        std::thread t2(a2);


        t1.join();
        t2.join();

        auto end = std::chrono::high_resolution_clock::now();
        std::cout << "test1 without log: " << std::chrono::duration<double,std::milli>(end - start).count() << " milliseconds\n";
    }
}

void test2() {
    {
        auto start = std::chrono::high_resolution_clock::now();
        std::thread t1(a1);
        std::thread t2(a1);
        std::thread t3(a1);
        std::thread t4(a1);
        std::thread t5(a1);
        std::thread t6(a1);
        std::thread t7(a1);
        std::thread t8(a1);
        std::thread t9(a1);
        std::thread t10(a1);

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
        std::thread t1(a1);
        std::thread t2(a1);
        std::thread t3(a1);
        std::thread t4(a1);
        std::thread t5(a1);
        std::thread t6(a1);
        std::thread t7(a1);
        std::thread t8(a1);
        std::thread t9(a1);
        std::thread t10(a1);

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
        std::thread t1(a1);
        std::thread t2(a1);
        std::thread t3(a1);
        std::thread t4(a1);
        std::thread t5(a1);
        std::thread t6(a1);
        std::thread t7(a1);
        std::thread t8(a1);
        std::thread t9(a1);
        std::thread t10(a1);
        std::thread t11(a1);
        std::thread t12(a1);
        std::thread t13(a1);
        std::thread t14(a1);
        std::thread t15(a1);
        std::thread t16(a1);

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
        std::thread t1(a1);
        std::thread t2(a1);
        std::thread t3(a1);
        std::thread t4(a1);
        std::thread t5(a1);
        std::thread t6(a1);
        std::thread t7(a1);
        std::thread t8(a1);
        std::thread t9(a1);
        std::thread t10(a1);
        std::thread t11(a1);
        std::thread t12(a1);
        std::thread t13(a1);
        std::thread t14(a1);
        std::thread t15(a1);
        std::thread t16(a1);

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