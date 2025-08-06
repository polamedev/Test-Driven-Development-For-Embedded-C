#include <utils/CircularBuffer.h>

#include <unity_fixture.h>

TEST_GROUP(CircularBuffer);

TEST_GROUP_RUNNER(CircularBuffer)
{
    RUN_TEST_CASE(CircularBuffer, CreateBuffer);
}

TEST_SETUP(CircularBuffer)
{
}

TEST_TEAR_DOWN(CircularBuffer)
{
}

TEST(CircularBuffer, CreateBuffer)
{
    CircularBuffer cb = NULL;
    cb = CircularBuffer_Create(10);

    TEST_ASSERT_NOT_EQUAL(NULL, cb);
    TEST_ASSERT_EQUAL(true, CircularBuffer_IsEmpty(cb));
}