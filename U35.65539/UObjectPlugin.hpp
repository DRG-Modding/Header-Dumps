#ifndef UE4SS_SDK_UObjectPlugin_HPP
#define UE4SS_SDK_UObjectPlugin_HPP

class UMyPluginObject : UObject
{
    FMyPluginStruct MyStruct;
}

struct UMyPluginStruct
{
    FString TestString;
}

#endif
