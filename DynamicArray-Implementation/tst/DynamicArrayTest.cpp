#include <gtest/gtest.h>
#include"DynamicArray.h"

TEST(DynamicArrayTests, ReturnArraySize) {
	DynamicArray d = DynamicArray(4);
	EXPECT_EQ(4, d.getArraySize());
}

TEST(DynamicArrayTests, ResizeArray) {
	DynamicArray d = DynamicArray(4);
	EXPECT_EQ(4, d.getArraySize());
	d.resize(6);
	EXPECT_EQ(6, d.getArraySize());
}

TEST(DynamicArrayTests, GetElement) {
	DynamicArray d = DynamicArray(4);
	//d.appendElement(5);
	EXPECT_EQ(5, d.getElement(0));
}

TEST(DynamicArrayTests, AppendElement) {
	DynamicArray d = DynamicArray(4);
	d.appendElement(5);
	d.appendElement(6);
	EXPECT_EQ(6, d.getElement(1));
}

TEST(DynamicArrayTests, InsertElement) {
	DynamicArray d = DynamicArray(4);
	d.appendElement(5);
	d.insertElement(1,6);
	EXPECT_EQ(6, d.getElement(1));
}

TEST(DynamicArrayTests, FindElement) {
	DynamicArray d = DynamicArray(4);
	d.appendElement(5);
	d.appendElement(6);
	EXPECT_EQ(1, d.findElement(6));
}

TEST(DynamicArrayTests, ElemetAvailability) {
	DynamicArray d = DynamicArray(4);
	d.appendElement(5);
	d.appendElement(6);
	EXPECT_EQ(1, d.isAvailable(5));
}
