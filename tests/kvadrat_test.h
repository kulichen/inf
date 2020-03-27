#ifndef YRAV_H
#define YRAV_H

#include <gtest/gtest.h>

extern "C" {
#include "yrav.h"
#include <math.h>
#include <stdio.h>
}

TEST(yravTest, num0) {
	double a;

	double b;

	yrav(1, 0, -4, &a, &b);
	ASSERT_EQ(yrav(1, 0, -4, &a, &b), 2);
    ASSERT_EQ(a, 2);
    ASSERT_EQ(b, -2);
}

TEST(yravTest, num1) {
	double a;

	double b;

    ASSERT_EQ(yrav(0, 2, 0, &a, &b), -1);
}

TEST(yravTest, num2) {
	double a;

	double b;

    ASSERT_EQ(yrav(2, 0, 0, &a, &b), 1);
	ASSERT_EQ(a, 0);
}

TEST(yravTest, num3) {
	double a;

	double b;

    ASSERT_EQ(yrav(1, 4, 4, &a, &b), 1);
	ASSERT_EQ(a, -2);
}

TEST(yravTest, num4) {
	double a;

	double b;

    ASSERT_EQ(yrav(1, 2, 2, &a, &b), 0);
}



#endif // YRAV_H
