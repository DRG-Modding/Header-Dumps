#ifndef UE4SS_SDK_Cheat_SimulateLateJoin_HPP
#define UE4SS_SDK_Cheat_SimulateLateJoin_HPP

class UCheat_SimulateLateJoin_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCheatMenu_BasicButtonWText_C* CheatMenu_BasicButtonWText;
    TSoftClassPtr<AActor> podClass;

    void OnLoaded_61EEE6104D62AB076A753A97DCFEB1FE(TSubclassOf<UObject> Loaded);
    void Construct();
    void Spawn pod and test(UPlayerCharacter* Character);
    void BndEvt__CheatMenu_BasicButtonWText_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(UCheatMenu_BasicButtonWText_C* Button);
    void ExecuteUbergraph_Cheat_SimulateLateJoin(int32 EntryPoint, UCheatMenu_BasicButtonWText_C* K2Node_ComponentBoundEvent_Button, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TSubclassOf<UObject> Temp_class_Variable, TSubclassOf<URessuplyPodSpawn> K2Node_ClassDynamicCast_AsRessuply_Pod_Spawn, bool K2Node_ClassDynamicCast_bSuccess, UPlayerCharacter* K2Node_CustomEvent_character, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, TSubclassOf<UObject> K2Node_CustomEvent_Loaded, OnAssetClassLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, UPlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue, FVector CallFunc_FindLatejoinDroppodLocation_ReturnValue, const TArray<UPlayerCharacter*>& CallFunc_GetAllPlayerCharacters_ReturnValue, URessuplyPodSpawn* CallFunc_DropToTarget_ReturnValue, UPlayerCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
}

#endif
