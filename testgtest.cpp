#include "gtest/gtest.h"


int main()
{
	testing::InitGoogleTest(&__argc, __argv);
	RUN_ALL_TESTS();
}

TEST(FileOperationTest, MoveFile) {
	EXPECT_EQ(1, 1);
}


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