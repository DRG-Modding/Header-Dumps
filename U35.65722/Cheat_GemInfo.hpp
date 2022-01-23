#ifndef UE4SS_SDK_Cheat_GemInfo_HPP
#define UE4SS_SDK_Cheat_GemInfo_HPP

class UCheat_GemInfo_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_Material;
    class UGemResourceData* GemResource;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_GemInfo(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, TSoftClassPtr<AGem> CallFunc_Array_Get_Item, UClass* CallFunc_LoadClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TSubclassOf<class AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

#endif
