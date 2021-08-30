#pragma once
/**
-elements: int[100]
-size: int
+StackOfIntegers()
+empty(): bool
+peek(): int
+push(value: int): int
+pop(): int
+getSize(): int
 */
class StackOfIntegers
{
public:
	StackOfIntegers();
	~StackOfIntegers();
	bool empty();
	int peek();
	int push(int value);
	int pop();
	int getSize();


private:
	int elements[100];
	int size;
};

