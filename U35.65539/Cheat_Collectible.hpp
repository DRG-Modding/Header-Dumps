#ifndef UE4SS_SDK_Cheat_Collectible_HPP
#define UE4SS_SDK_Cheat_Collectible_HPP

class UCheat_Collectible_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* TextBlock_0;
    UTextBlock* TextBlock_Material;
    UCollectableResourceData* Resource;

    int32 GetTotalResourceCount(int32 count, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, SoftClassProperty CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TSubclassOf<UObject> CallFunc_LoadClass_ReturnValue, TSubclassOf<AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, TArray<AActor*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_Collectible(int32 EntryPoint, int32 CallFunc_GetTotalResourceCount_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue);
}

#endif
