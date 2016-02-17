#include <stdio.h>
#include <string>
using namespace std;

#include"../tinyxml/tinyxml.h"

int test1()
{
	TiXmlDocument xml_doc;

	//添加XML声明
	xml_doc.LinkEndChild(new TiXmlDeclaration( "1.0", "GBK", ""));

	//添加根元素
	TiXmlElement * xml_root = new TiXmlElement("root");
	xml_doc.LinkEndChild(xml_root);

	//在根节点下添加其他子元素
	if(1)
	{
		//添加host
		TiXmlElement * xml_child = new TiXmlElement("host");
		xml_root->LinkEndChild(xml_child);

		//添加文档内容
		xml_child->LinkEndChild( new TiXmlText("goodstudy"));

		//设置属性
		xml_child->SetAttribute("checked", "true");
		xml_child->SetAttribute("station", 1001);
	}

	if(1)
	{
		//嵌套子元素
		TiXmlElement* xml_client = new TiXmlElement("client");
		xml_root->LinkEndChild(xml_client);

		TiXmlElement* xml_clientName = new TiXmlElement("name");
		xml_clientName->LinkEndChild( new TiXmlText("qingy"));
		xml_client->LinkEndChild(xml_clientName);

		TiXmlElement* xml_clientId = new TiXmlElement("id");
		xml_clientId->LinkEndChild( new TiXmlText("20160217"));
		xml_client->LinkEndChild(xml_clientId);
	}

	//保存到文件
	xml_doc.SaveFile("example02a.xml");

	//或者转成stirng
	//string text;
	//text << xml_doc;
	return 0;
}

int main()
{
	test1();
	return 0;
}