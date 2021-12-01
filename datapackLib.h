#include "lib.h"

std::string packMcmeta(std::string version){
	std::string mcMeta = 
	"{\n"
	"	\"pack\": {\n"
  	"    \"pack_format\": "+version+",\n"
  	"    \"description\": \"Something interesting\"\n"
  	"    }\n"
    "}";
    return mcMeta;
}
std::string loadJson(std::string nameSpace){
	std::string load = 
	"{\n"
	"    \"values\": [\""+nameSpace+":load\"]\n"
    "}";
    return load;
}
std::string tickJson(std::string nameSpace){
	std::string tick = 
	"{\n"
	"    \"values\": [\""+nameSpace+":loop\"]\n"
    "}";
    return tick;
}