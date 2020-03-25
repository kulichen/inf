#ifndef YRAV_H
#define YRAV_H

#include <gtest/gtest.h>

extern "C" {
#include "myfunc.h"
#include <math.h>
#include <stdio.h>
}

TEST(yravTest, num0) {
	double a;

	double b;

	yrav(1, 0, -4, &a, &b);
	ASSERT_EQ(yrav(1, 0, -4, &a, &b), 2);
    ASSERT_EQ(&a, 2);
    ASSERT_EQ(&b, -2);
}

TEST(yravTest, num1) {
	double a;
	double *x1; 
	x1 = &a;
	double b;
	double *x2; 
	x2 = &b;
	yrav(0, 2, 0, x1, x2);
    ASSERT_EQ(yrav(0, 2, 0, x1, x2), 1);
    ASSERT_EQ(*x1, 0);
}

TEST(yravTest, num2) {
	double a;
	double *x1; 
	x1 = &a;
	double b;
	double *x2; 
	x2 = &b;
    ASSERT_EQ(yrav(0, 0, 2, x1, x2), -1);
}

TEST(yravTest, num3) {
	double a;
	double *x1; 
	x1 = &a;
	double b;
	double *x2; 
	x2 = &b;
    ASSERT_EQ(yrav(0, 0, 0, x1, x2), -2);
}

TEST(yravTest, num4) {
	double a;
	double *x1; 
	x1 = &a;
	double b;
	double *x2; 
	x2 = &b;
    ASSERT_EQ(yrav(1, 2, 2, x1, x2), 0);
}

TEST(yravTest, num5) {
	double a;
	double *x1; 
	x1 = &a;
	double b;
	double *x2; 
	x2 = &b;
	yrav(2, 0, 0, x1, x2);
    ASSERT_EQ(yrav(2, 0, 0, x1, x2), 1);
    ASSERT_EQ(*x1, 0);
}

#endif // YRAV_H
