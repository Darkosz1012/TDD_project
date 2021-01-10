#include "Buffer.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>


class BufferTest : public ::testing::Test
{
protected:
    Buffer* buffer;
    virtual void SetUp()
    {
        buffer = new Buffer(20);
    }

    virtual void TearDown()
    {
        delete buffer;
    }
};

TEST_F(BufferTest, getAllocatedSize) {
  EXPECT_EQ(20, buffer->getAllocatedSize());
}

TEST_F(BufferTest, add) {
    buffer->add("H");
    EXPECT_EQ("H", buffer->arr[0]);
}

TEST_F(BufferTest, remove) {
    buffer->add("H");
    std::string res = buffer->remove();
    EXPECT_EQ(res, "H");
    EXPECT_EQ(1, buffer->read);
    EXPECT_EQ(1, buffer->write);
}

TEST_F(BufferTest, removeException) {
    EXPECT_ANY_THROW(buffer->remove());
}

TEST_F(BufferTest, getSize) {
	buffer->add("H");
	buffer->add("E");
	EXPECT_EQ(2, buffer->getSize());
    std::string res = buffer->remove();
    EXPECT_EQ(1, buffer->getSize());
}
