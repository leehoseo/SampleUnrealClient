#pragma once
#include "Tr.h"
#include <string.h>

#pragma pack(push, 1)    // 1바이트 크기로 정렬 byte padding
class TrChatReq : public Tr
{
public:
	TrChatReq() : Tr( TrId::TrChatReq, ThreadType::eContents , sizeof(TrChatReq))	{}
	~TrChatReq() {}

	void set(const int actorKey , const char* str)
	{
		// 검증을 넣는다.
		_actorKey = actorKey;
		strcpy_s(_str, str);
	}
public:
	int	 _actorKey = 0;
	char _str[60] = {};
};
#pragma pack(pop)