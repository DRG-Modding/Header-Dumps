#ifndef UE4SS_SDK_ScriptPlugin_HPP
#define UE4SS_SDK_ScriptPlugin_HPP

class UScriptBlueprint : UBlueprint
{
    TArray<uint8> ByteCode;
    FString SourceCode;
}

class UScriptBlueprintGeneratedClass : UBlueprintGeneratedClass
{
    TArray<uint8> ByteCode;
    FString SourceCode;
    TArray<UProperty*> ScriptProperties;
}

class UScriptContext : UObject
{

    void CallScriptFunction(FString FunctionName);
}

class UScriptContextComponent : UActorComponent
{

    void CallScriptFunction(FString FunctionName);
}

class UScriptPluginComponent : UActorComponent
{

    bool CallScriptFunction(FString FunctionName);
}

class AScriptTestActor : AActor
{
    FString TestString;
    float TestValue;
    bool TestBool;

    float TestFunction(float InValue, float InFactor, bool bMultiply);
}

class UDefault__ScriptBlueprintGeneratedClass
{
}

#endif
