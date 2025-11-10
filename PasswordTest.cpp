/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, two_letter_repeat)
{
	Password my_password;
	ASSERT_EQ(2, my_password.count_leading_characters("aab"))
}

TEST(PasswordTest, lowercase_then_uppercase)
{
	Password my_password;
	ASSERT_EQ(1, my_password.count_leading_characters("aAb"))
}

TEST(PasswordTest, spaced_out)
{
	Password my_password;
	ASSERT_EQ(1, my_password.count_leading_characters("a ab"))
}

TEST(PasswordTest, leading_spaces)
{
	Password my_password;
	ASSERT_EQ(2, my_password.count_leading_characters("  aab"))
}

TEST(PasswordTest, empty_string)
{
	Password my_password;
	ASSERT_EQ(0, my_password.count_leading_characters(""))
}

TEST(PasswordTest, empty_string)
{
	Password my_password;
	ASSERT_EQ(true, my_password.has_mixed_case("Ab"))
}

TEST(PasswordTest, empty_string)
{
	Password my_password;
	ASSERT_EQ(false, my_password.has_mixed_case("aaaaa"))
}

TEST(PasswordTest, empty_string)
{
	Password my_password;
	ASSERT_EQ(true, my_password.has_mixed_case("BaaaaaB"))
}

TEST(PasswordTest, empty_string)
{
	Password my_password;
	ASSERT_EQ(false, my_password.has_mixed_case(""))
}

TEST(PasswordTest, empty_string)
{
	Password my_password;
	ASSERT_EQ(false, my_password.has_mixed_case("BBBBBB"))
}

TEST(PasswordTest, empty_string)
{
	Password my_password;
	ASSERT_EQ(false, my_password.has_mixed_case("A"))
}

TEST(PasswordTest, empty_string)
{
	Password my_password;
	ASSERT_EQ(false, my_password.has_mixed_case("b"))
}
