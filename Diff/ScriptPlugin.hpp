#ifndef UE4SS_SDK_ScriptPlugin_HPP
#define UE4SS_SDK_ScriptPlugin_HPP

class AScriptTestActor : public AActor
{
    FString TestString;
    float TestValue;
    bool TestBool;

    float TestFunction(float InValue, float InFactor, bool bMultiply);
};

class UDefault__ScriptBlueprintGeneratedClass
{
};

class UScriptBlueprint : public UBlueprint
{
    TArray<uint8> ByteCode;
    FString SourceCode;

};

class UScriptBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
    TArray<uint8> ByteCode;
    FString SourceCode;
    TArray<class UProperty*> ScriptProperties;

};

class UScriptContext : public UObject
{

    void CallScriptFunction(FString FunctionName);
};

class UScriptContextComponent : public UActorComponent
{

    void CallScriptFunction(FString FunctionName);
};

class UScriptPluginComponent : public UActorComponent
{

    bool CallScriptFunction(FString FunctionName);
};

#endif
