#ifndef HTMLWRITER_H
#define HTMLWRITER_H

#include "docwriter.h"

class HTMLWriter : public DocWriter
{
public:
	HTMLWriter(void);
	HTMLWriter(const string& fileName, const string& content);
	~HTMLWriter(void);

	// �ؽ�Ʈ�� ���Ϸ� �����Ų��.
	void Write();

	// ��Ʈ�� �����Ѵ�.
	void SetFont(const string& fontName, int fontSize, const string& fontColor);


protected:
	string	_fontName;
	int		_fontSize;
	string	_fontColor;
};

#endif
