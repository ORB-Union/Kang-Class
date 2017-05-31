#pragma once
class Observe
{
public:
	void notify();
};


class PatternA : Observe {}; // 옵저브 패턴 A
class PatternB : Observe {}; // 옵저브 패턴 B