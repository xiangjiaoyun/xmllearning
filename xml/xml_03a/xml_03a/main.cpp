#include <stdio.h>
#include <stdlib.h>
//�����ֵ�Ԫ���б�Ԫ���ò�doc�ĵ����к�����
#include"../tinyxml/tinyxml.h"
int main()
{
	//����xml
	TiXmlDocument xml_doc;
	if(!xml_doc.LoadFile("example02a.xml"))
	{
		return -1;
	}

	//���ڵ�
	TiXmlElement* xml_root = xml_doc.RootElement();
	if(NULL == xml_root)
	{
		return -1;
	}

	//��ȡԪ�ص��ı�������
	if(1)
	{
		TiXmlElement* xml_host = xml_root->FirstChildElement("host");
		const char* text = xml_host->GetText();
		const char* aChecked = xml_host->Attribute("checked");
		const char* aStation = xml_host->Attribute("station");
		printf("text:%s, check:%s, station:%s\n",text, aChecked, aStation);
	}

	if(1)
	{
		TiXmlElement* xml_client = xml_root->FirstChildElement("client");
		TiXmlElement* xml_clientId = xml_client->FirstChildElement("id");
		TiXmlElement* xml_clientName = xml_client->FirstChildElement("name");

		// ...ȡ��id��name���ı� ...
	}
	getchar();
	return 0;
}