#ifndef _ESDKTOOL_H
#define _ESDKTOOL_H
#include <string>
using namespace std;
//������
class eSDKTool
{
private:
	eSDKTool(void);
	~eSDKTool(void);
public:
	static void getCurrentPath(std::string& cstrPath);				//��ȡ��ǰ�����ִ��·��	
	static void Int10ToStr(std::string& strNum,int num);			//��ȡ10���Ƶ��ַ���
	static unsigned short StrToInt10(const std::string& strNum);	//�ַ���ת����
	static std::string CreateGuidStr();

};
#endif

