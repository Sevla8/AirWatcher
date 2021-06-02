#include "DateTest.h"

TEST_F(DateTest, GetYear1) {
	EXPECT_EQ(1970, date1.GetYear());
}

TEST_F(DateTest, GetYear2) {
	EXPECT_EQ(2000, date2.GetYear());
}

TEST_F(DateTest, GetYear3) {
	EXPECT_EQ(2000, date3.GetYear());
}

TEST_F(DateTest, GetMonth1) {
	EXPECT_EQ(1, date1.GetMonth());
}

TEST_F(DateTest, GetMonth2) {
	EXPECT_EQ(1, date2.GetMonth());
}

TEST_F(DateTest, GetMonth3) {
	EXPECT_EQ(1, date3.GetMonth());
}

TEST_F(DateTest, GetDay1) {
	EXPECT_EQ(1, date1.GetDay());
}

TEST_F(DateTest, GetDay2) {
	EXPECT_EQ(1, date2.GetDay());
}

TEST_F(DateTest, GetDay3) {
	EXPECT_EQ(1, date3.GetDay());
}

TEST_F(DateTest, GetHour1) {
	EXPECT_EQ(0, date1.GetHour());
}

TEST_F(DateTest, GetHour2) {
	EXPECT_EQ(0, date1.GetHour());
}

TEST_F(DateTest, GetHour3) {
	EXPECT_EQ(12, date3.GetHour());
}

TEST_F(DateTest, GetMinute1) {
	EXPECT_EQ(0, date1.GetMinute());
}

TEST_F(DateTest, GetMinute2) {
	EXPECT_EQ(0, date2.GetMinute());
}

TEST_F(DateTest, GetMinute3) {
	EXPECT_EQ(0, date3.GetMinute());
}

TEST_F(DateTest, GetSecond1) {
	EXPECT_EQ(0, date1.GetSecond());
}

TEST_F(DateTest, GetSecond2) {
	EXPECT_EQ(0, date2.GetSecond());
}

TEST_F(DateTest, GetSecond3) {
	EXPECT_EQ(0, date3.GetSecond());
}

TEST_F(DateTest, operatorLT) {
	EXPECT_LT(date1, date2);
}

TEST_F(DateTest, operatorEQ) {
	EXPECT_EQ(date1, date1);
}

TEST_F(DateTest, operatorLE) {
	EXPECT_LE(date1, date2);
}

TEST_F(DateTest, operatorGE) {
	EXPECT_GE(date2, date1);
}

TEST_F(DateTest, EqualsDay) {
	EXPECT_EQ(true, date2.EqualsDay(date3));
}

TEST_F(DateTest, Date) {
	Date date(date2);
	EXPECT_EQ(date, date2);
}
