#ifndef UE4SS_SDK_LVL_Procedural_HPP
#define UE4SS_SDK_LVL_Procedural_HPP

class ALVL_Procedural_C : ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnLoaded_7F31DA1545372482BDFD4D8E06981759(TSubclassOf<UObject> Loaded);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_LVL_Procedural(int32 EntryPoint, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TSubclassOf<UObject> K2Node_CustomEvent_Loaded, AProceduralSetup* CallFunc_SpawnProcedural_ReturnValue, TSubclassOf<UObject> Temp_class_Variable, bool CallFunc_HasAuthority_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, OnAssetClassLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate, SoftClassProperty CallFunc_GetSoftReferenceToPLS_ReturnValue);
}

#endif
