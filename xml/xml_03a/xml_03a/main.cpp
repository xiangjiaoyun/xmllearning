#include <stdio.h>
#include <stdlib.h>
//解析兄弟元素列表元素用查doc文档中有函数。
#include"../tinyxml/tinyxml.h"
int main()
{
	//解析xml
	TiXmlDocument xml_doc;
	if(!xml_doc.LoadFile("example02a.xml"))
	{
		return -1;
	}

	//根节点
	TiXmlElement* xml_root = xml_doc.RootElement();
	if(NULL == xml_root)
	{
		return -1;
	}

	//获取元素的文本与属性
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

		// ...取得id和name的文本 ...
	}
	getchar();
	return 0;
}