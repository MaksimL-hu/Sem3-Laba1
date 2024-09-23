#include "CppUnitTest.h"
#include "..\Project1\UniquePtr.h"
#include "..\Project1\SharedPtr.h"
#include "..\Project1\Creator.h"
#include "StructToDestroy.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestsUniquePtr
{
	TEST_CLASS(UnitTests)
	{
	public:
		
		TEST_METHOD(ConstructorTest)
		{
			int value = 10;
			UniquePtr<int> ptr(new int(value));
			Assert::IsTrue(*ptr == value);
		}

		TEST_METHOD(MovePointerTest)
		{
			int value = 10;
			UniquePtr<int> ptr1(new int(value));
			UniquePtr<int> ptr2 = std::move(ptr1);

			Assert::IsTrue(ptr1.get() == nullptr);
			Assert::IsTrue(*ptr2 == value);
		}

		TEST_METHOD(AssignmentOperatorByMovingTest)
		{
			int value = 10;
			UniquePtr<int> ptr1(new int(value));
			UniquePtr<int> ptr2;

			ptr2 = std::move(ptr1);
			Assert::IsTrue(ptr1.get() == nullptr);
			Assert::IsTrue(*ptr2 == value);
		}

		TEST_METHOD(DereferenceOperatorTest)
		{
			struct TestStruct {
				int x;

				void setX(int value) { x = value; }
			};

			int value = 10;

			UniquePtr<TestStruct> ptr(new TestStruct{});
			ptr->setX(value);
			Assert::IsTrue(ptr->x == value);
		}

		TEST_METHOD(ResetAndReleaseTest)
		{
			int value1 = 10;
			int value2 = 20;
			UniquePtr<int> ptr(new int(value1));

			Assert::IsTrue(*ptr == value1);

			ptr.reset(new int(value2));
			Assert::IsTrue(*ptr == value2);
			
			int* raw_ptr = ptr.release();
			Assert::IsTrue(ptr.get() == nullptr);
			Assert::IsTrue(*raw_ptr == value2);

			delete raw_ptr;
		}

		TEST_METHOD(AutoDeleteTest)
		{
			bool destroyed = false;

			{
				UniquePtr<StructToDestroy> ptr(new StructToDestroy(&destroyed));
			}

			Assert::IsTrue(destroyed == true);
		}

		TEST_METHOD(CreateSmallCountUniquePtrTest)
		{
			int iterations = 1000;

			for (int i = 0; i < iterations; i++)
			{
				create_my_unique_ptr();
			}
		}

		TEST_METHOD(CreateBigCountUniquePtrTest)
		{
			int iterations = 1000000;

			for (int i = 0; i < iterations; i++)
			{
				create_my_unique_ptr();
			}
		}
	};
}

namespace UnitTestsSharedPtr
{
	TEST_CLASS(UnitTests)
	{
	public:
		TEST_METHOD(ConstructorTest)
		{
			int value = 10;
			SharedPtr<int> ptr(new int(value));
			Assert::IsTrue(*ptr == value);
			Assert::IsTrue(ptr.use_count() == 1);
		}

		TEST_METHOD(CopyingTest)
		{
			int value = 10;
			int use_count = 2;
			SharedPtr<int> ptr1(new int(value));
			SharedPtr<int> ptr2 = ptr1;

			Assert::IsTrue(ptr1.use_count() == use_count);
			Assert::IsTrue(ptr2.use_count() == use_count);
			Assert::IsTrue(*ptr1 == value && *ptr2 == value);
		}

		TEST_METHOD(AssignmentsTest)
		{
			int value = 10;
			int use_count = 2;
			SharedPtr<int> ptr1(new int(value));
			SharedPtr<int> ptr2(new int);

			ptr2 = ptr1;
			Assert::IsTrue(ptr1.use_count() == use_count);
			Assert::IsTrue(ptr2.use_count() == use_count);
			Assert::IsTrue(*ptr1 == value && *ptr2 == value);
		}

		TEST_METHOD(MovePointerTest)
		{
			int value = 10;
			int use_count = 1;
			SharedPtr<int> ptr1(new int(value));
			SharedPtr<int> ptr2(new int);
			ptr2 = std::move(ptr1);

			Assert::IsTrue(ptr1.get() == nullptr);
			Assert::IsTrue(ptr2.use_count() == use_count);
			Assert::IsTrue(*ptr2 == value);
		}

		TEST_METHOD(AssignmentsMovingTest)
		{
			int value = 10;
			int use_count = 1;
			SharedPtr<int> ptr1(new int(value));
			SharedPtr<int> ptr2(new int);

			ptr2 = std::move(ptr1);
			Assert::IsTrue(ptr1.get() == nullptr);
			Assert::IsTrue(ptr2.use_count() == use_count);
			Assert::IsTrue(*ptr2 == value);
		}

		TEST_METHOD(UsingObjectBySeveralTest)
		{
			int value = 10;
			SharedPtr<int> ptr1(new int(value));
			SharedPtr<int> ptr2 = ptr1;
			SharedPtr<int> ptr3 = ptr2;

			Assert::IsTrue(ptr1.use_count() == 3);
			Assert::IsTrue(*ptr1 == value && *ptr2 == value && *ptr3 == value);
		}

		TEST_METHOD(AutoDeleteTest)
		{
			bool destroyed = false;
			int use_count = 2;

			{
				SharedPtr<StructToDestroy> ptr(new StructToDestroy(&destroyed));
				SharedPtr<StructToDestroy> ptr2 = ptr;
				Assert::IsTrue(ptr.use_count() == use_count);
			}

			Assert::IsTrue(destroyed == true);
		}

		TEST_METHOD(CreateSmallCountSharedPtrTest)
		{
			int iterations = 1000;

			for (int i = 0; i < iterations; i++)
			{
				create_my_shared_ptr();
			}
		}

		TEST_METHOD(CreateBigCountSharedPtrTest)
		{
			int iterations = 1000000;

			for (int i = 0; i < iterations; i++)
			{
				create_my_shared_ptr();
			}
		}
	};
}