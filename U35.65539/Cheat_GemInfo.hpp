#ifndef UE4SS_SDK_Cheat_GemInfo_HPP
#define UE4SS_SDK_Cheat_GemInfo_HPP

class UCheat_GemInfo_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* TextBlock_0;
    UTextBlock* TextBlock_Material;
    UGemResourceData* GemResource;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_GemInfo(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, SoftClassProperty CallFunc_Array_Get_Item, TSubclassOf<UObject> CallFunc_LoadClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TSubclassOf<AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, TArray<AActor*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue);
}

#endif
