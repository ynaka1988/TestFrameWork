#include "gtest/gtest.h"

#include "Sample.h"


TEST(SampleTest, Sample_add_1) {
	int result = add(1, 2);

	ASSERT_EQ(3, result);
}

TEST(SampleTest, Sample_add_2) {
	int result = add(3, 4);

	ASSERT_EQ(7, result);
}

