#include "datapackLib.h"

using namespace std;
int main(){
	string datapackName = input("Datapack Name: ");
	string datapackVersion = input("Datapack Version: ");
	string datapackNamespace = input("Datapack Namespace: ");

	mkdir(datapackName.c_str(),0777);
	chdir(datapackName.c_str());
	createAndWriteFile("pack.mcmeta", packMcmeta(datapackVersion));

	mkdir("data",0777);
	chdir("data");
	mkdir("minecraft",0777);
	chdir("minecraft");
	mkdir("tags",0777);
	chdir("tags");
	mkdir("functions",0777);
	chdir("functions");
	createAndWriteFile("load.json", loadJson(datapackNamespace));
	createAndWriteFile("tick.json", tickJson(datapackNamespace));
	chdir("..");
	chdir("..");
	chdir("..");
	mkdir(datapackNamespace.c_str(), 0777);
	chdir(datapackNamespace.c_str());
	mkdir("functions", 0777);
	chdir("functions");
	createAndWriteFile("load.mcfunction", "title @a title {\"text\":\"Hello world\"}");
	createFile("loop.mcfunction");
	return 0;
}