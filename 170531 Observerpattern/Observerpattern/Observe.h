#pragma once
class Observe
{
public:
	void notify();
};


class PatternA : Observe {}; // ������ ���� A
class PatternB : Observe {}; // ������ ���� B