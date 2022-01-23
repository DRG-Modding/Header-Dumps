#ifndef UE4SS_SDK_LVL_Procedural_HPP
#define UE4SS_SDK_LVL_Procedural_HPP

class ALVL_Procedural_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnLoaded_7F31DA1545372482BDFD4D8E06981759(UClass* Loaded);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_LVL_Procedural(int32 EntryPoint, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UClass* K2Node_CustomEvent_Loaded, class AProceduralSetup* CallFunc_SpawnProcedural_ReturnValue, UClass* Temp_class_Variable, bool CallFunc_HasAuthority_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, FExecuteUbergraph_LVL_ProceduralK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, TSoftClassPtr<AProceduralSetup> CallFunc_GetSoftReferenceToPLS_ReturnValue);
};

#endif
