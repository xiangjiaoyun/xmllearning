#include <stdio.h>
#include <string>
using namespace std;

#include"../tinyxml/tinyxml.h"

int test1()
{
	TiXmlDocument xml_doc;

	//���XML����
	xml_doc.LinkEndChild(new TiXmlDeclaration( "1.0", "GBK", ""));

	//��Ӹ�Ԫ��
	TiXmlElement * xml_root = new TiXmlElement("root");
	xml_doc.LinkEndChild(xml_root);

	//�ڸ��ڵ������������Ԫ��
	if(1)
	{
		//���host
		TiXmlElement * xml_child = new TiXmlElement("host");
		xml_root->LinkEndChild(xml_child);

		//����ĵ�����
		xml_child->LinkEndChild( new TiXmlText("goodstudy"));

		//��������
		xml_child->SetAttribute("checked", "true");
		xml_child->SetAttribute("station", 1001);
	}

	if(1)
	{
		//Ƕ����Ԫ��
		TiXmlElement* xml_client = new TiXmlElement("client");
		xml_root->LinkEndChild(xml_client);

		TiXmlElement* xml_clientName = new TiXmlElement("name");
		xml_clientName->LinkEndChild( new TiXmlText("qingy"));
		xml_client->LinkEndChild(xml_clientName);

		TiXmlElement* xml_clientId = new TiXmlElement("id");
		xml_clientId->LinkEndChild( new TiXmlText("20160217"));
		xml_client->LinkEndChild(xml_clientId);
	}

	//���浽�ļ�
	xml_doc.SaveFile("example02a.xml");

	//����ת��stirng
	//string text;
	//text << xml_doc;
	return 0;
}

int main()
{
	test1();
	return 0;
}