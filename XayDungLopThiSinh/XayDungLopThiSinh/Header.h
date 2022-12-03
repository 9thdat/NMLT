#pragma once
#include "Candidate.h"
class ListCandidate
{
private:
	int SiSo;
	Candidate* TS;
public:
	void InputSS()
	{
		cin >> SiSo;
		TS = new Candidate[SiSo];
		for (int i = 0; i < SiSo; i++)
		{
			cout << "Thi sinh thu " << i + 1 << ": \n";
			TS[i].Input();
		}
	}
	void OutputSS()
	{
		for (int i = 0; i < SiSo; i++)
		{
			if ( )
				TS[i].Output();
		}
	}
};