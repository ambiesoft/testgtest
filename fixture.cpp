#include "gtest/gtest.h"

class FTest : public ::testing::Test {
public:
	static int si_;
	int i_;

	FTest() {
		si_++;
		i_ = si_;
	}
private:
	virtual void SetUp()
	{
		i_++;
	}
	virtual void TearDown()
	{

	}
};
int FTest::si_;

TEST_F(FTest, A) {
	EXPECT_EQ(si_, i_);
}
TEST_F(FTest, B) {
	EXPECT_EQ(si_, i_);
}