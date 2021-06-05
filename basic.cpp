#include "gtest/gtest.h"

//TEST(FileOperationTest, MoveFile) {
//	EXPECT_EQ(1, 1);
//}

static_assert(sizeof("FileOperationTest") > 1, "test_suite_name must not be empty");
static_assert(sizeof("MoveFile") > 1, "test_name must not be empty");
class FileOperationTest_MoveFile_Test : public::testing::Test {
public:
	FileOperationTest_MoveFile_Test() {
	}
	~FileOperationTest_MoveFile_Test() override = default;
	FileOperationTest_MoveFile_Test(FileOperationTest_MoveFile_Test const&) = delete;
	FileOperationTest_MoveFile_Test& operator = (FileOperationTest_MoveFile_Test const&) = delete;
	FileOperationTest_MoveFile_Test(FileOperationTest_MoveFile_Test&&) noexcept = delete;
	FileOperationTest_MoveFile_Test& operator = (FileOperationTest_MoveFile_Test&&) noexcept = delete;
private: 
	void TestBody() override;
	static::testing::TestInfo* const test_info_;
};

::testing::TestInfo* const FileOperationTest_MoveFile_Test::test_info_ =
::testing::internal::MakeAndRegisterTestInfo(
	"FileOperationTest",
	"MoveFile",
	nullptr,
	nullptr,
	::testing::internal::CodeLocation(
		"C:\\local\\msys2\\home\\hkIurwvKj\\gitdev\\testgtest\\basic.cpp", 3),
	(::testing::internal::GetTestTypeId()),
	::testing::internal::SuiteApiResolver < ::testing::Test > ::GetSetUpCaseOrSuite("C:\\local\\msys2\\home\\hkIurwvKj\\gitdev\\testgtest\\basic.cpp", 3),
	::testing::internal::SuiteApiResolver < ::testing::Test > ::GetTearDownCaseOrSuite("C:\\local\\msys2\\home\\hkIurwvKj\\gitdev\\testgtest\\basic.cpp", 3),
	new::testing::internal::TestFactoryImpl < FileOperationTest_MoveFile_Test >);

void FileOperationTest_MoveFile_Test::TestBody()
{
	switch (0)
    case 0:
	default:
		if (const::testing::AssertionResult gtest_ar = (::testing::internal::EqHelper::Compare("1", "1", 1, 1)));
		else
			::testing::internal::AssertHelper(
				::testing::TestPartResult::kNonFatalFailure, 
				"C:\\local\\msys2\\home\\hkIurwvKj\\gitdev\\testgtest\\basic.cpp",
				4,
				gtest_ar.failure_message()) = ::testing::Message();
}