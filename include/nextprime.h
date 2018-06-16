#pragma once
#include "isprime.h"

template <int n>
struct next_prime;

template <int n, bool cond>
struct next_prime_if
{
  static const int value = n + 1;
};

template <int n>
struct next_prime_if<n, false>
{
    static const int value = next_prime<n + 1>::value;
};

template <int n>
struct next_prime
{
        static const int value = next_prime_if<n, is_prime<n + 1>::value>::value;
};

template <int i>
struct prime
{
    static const int value = next_prime<prime<i - 1>::value>::value;
};

template <>
struct prime<0>
{
    static const int value = 2;
};
