#ifndef UE4SS_SDK_Cheat_SimulateLateJoin_HPP
#define UE4SS_SDK_Cheat_SimulateLateJoin_HPP

class UCheat_SimulateLateJoin_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCheatMenu_BasicButtonWText_C* CheatMenu_BasicButtonWText;
    TSoftClassPtr<AActor> podClass;

    void OnLoaded_61EEE6104D62AB076A753A97DCFEB1FE(UClass* Loaded);
    void Construct();
    void Spawn pod and test(class APlayerCharacter* Character);
    void BndEvt__CheatMenu_BasicButtonWText_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UCheatMenu_BasicButtonWText_C* Button);
    void ExecuteUbergraph_Cheat_SimulateLateJoin(int32 EntryPoint, class UCheatMenu_BasicButtonWText_C* K2Node_ComponentBoundEvent_Button, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UClass* Temp_class_Variable, TSubclassOf<class ARessuplyPodSpawn> K2Node_ClassDynamicCast_AsRessuply_Pod_Spawn, bool K2Node_ClassDynamicCast_bSuccess, class APlayerCharacter* K2Node_CustomEvent_character, class AFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, UClass* K2Node_CustomEvent_Loaded, FExecuteUbergraph_Cheat_SimulateLateJoinK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class APlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue, FVector CallFunc_FindLatejoinDroppodLocation_ReturnValue, const TArray<class APlayerCharacter*>& CallFunc_GetAllPlayerCharacters_ReturnValue, class ARessuplyPodSpawn* CallFunc_DropToTarget_ReturnValue, class APlayerCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

#endif
