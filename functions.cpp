#include "functions.hpp"
#include <cassert>
#include <vector>
#include <iostream>
#include <tuple>


bool leap_year(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 100 == 0) {
                return true;
            }
            return false;
        }
        return true;
    }
    return false;
}

void fib(int N) {
    assert(0 <= N && N <= 46);
    int curr = 1;
    int pre = 0;
    for (int i = 0; i < N; i++) {
        std::cout << curr << " ";
        int next = curr + pre;
        pre = curr;
        curr = next;
    }
    std::cout << std::endl;
}

double get_double(std::string prompt) {
    double favNum;
    std::cout << prompt << " ";
    std::cin >> favNum;
    if (std::cin.fail()) {
        std::cout << "¡§cin failed, so 0 was returned.¡¨" << std::endl;
        std::cin.clear();
        return 0;
    }
    return favNum;
}


// DO NOT DELETE OR EDIT THIS FUNCTION
void printMyVector(const std::vector<int>& v) {
    for (size_t i = 0, N = v.size(); i < N; ++i) {
        std::cout << v[i] << ' ';
    }
    std::cout << std::endl;
}

std::vector<int> concatenateMyVectors(const std::vector<int>& v,
    const std::vector<int>& w) {
    
    std::vector<int> x = v;
    std::vector<int> y = w;
    x.insert(x.end(), w.begin(), w.end());
    return x;
}


void sort5(int& i1, int& i2, int& i3, int& i4, int& i5) {
    if (i1 > i2) {
        std::swap(i1, i2);
    }
    if (i2 > i3) {
        std::swap(i2, i3);
    }
    if (i1 > i2) {
        std::swap(i1, i2);
    }
    if (i3 > i4) {
        std::swap(i3, i4);
    }
    if (i2 > i3) {
        std::swap(i3, i2);
    }
    if (i1 > i2) {
        std::swap(i1, i2);
    }
    if (i4 > i5) {
        std::swap(i4, i5);
    }
    if (i3 > i4) {
        std::swap(i4, i3);
    }
    if (i2 > i3) {
        std::swap(i3, i2);
    }
    if (i1 > i2) {
        std::swap(i1, i2);
    }
}


void reverse(std::vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < (n / 2); i++) {
        std::swap(v[i], v[n - i - 1]);
    }
}


void print(const std::vector<bool>& v) {

    for (int i = 0; i < v.size(); i++) {
        std::cout << v.at(i);
    }
    std::cout << std::endl;
}

void addZeros(std::vector<bool>& v, size_t numberToAdd) {
    for (int i = 0; i < numberToAdd; i++) {
        v.push_back(0);
    }
}

std::vector<bool> addition(std::vector<bool> v, std::vector<bool> w) {
    std::vector<bool> carry = {0};
    std::vector<bool> z;
    while (v.size() < w.size()) {
        v.push_back(0);
    }
    while (w.size() < v.size()) {
        w.push_back(0);
    }
    for (int i = 0; i < v.size(); i++) {
        if (v.at(i) + w.at(i) + carry.at(i) == 0) {
            carry.push_back(0);
            z.push_back(0);
        }
        else if (v.at(i) + w.at(i) + carry.at(i) == 1) {
            carry.push_back(0);
            z.push_back(1);
        }
        else if (v.at(i) + w.at(i) + carry.at(i) == 2) {
            carry.push_back(1);
            z.push_back(0);
        }
        else if (v.at(i) + w.at(i) + carry.at(i) == 3) {
            carry.push_back(1);
            z.push_back(1);
        }
    }
    if (carry.at(v.size()) == 1) {
        z.push_back(1);
    }


    return z;
}
