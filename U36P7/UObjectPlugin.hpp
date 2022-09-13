#ifndef UE4SS_SDK_UObjectPlugin_HPP
#define UE4SS_SDK_UObjectPlugin_HPP

struct FMyPluginStruct
{
    FString TestString;

};

class UMyPluginObject : public UObject
{
    FMyPluginStruct MyStruct;

};

#endif
