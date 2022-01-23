#ifndef UE4SS_SDK_Cheat_DestroyMolly_HPP
#define UE4SS_SDK_Cheat_DestroyMolly_HPP

class UCheat_DestroyMolly_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_0;
    class UTextBlock* Label;
    FCheat_DestroyMolly_CBosco spawn requested Bosco spawn requested;
    void Bosco spawn requested();

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_DestroyMolly(int32 EntryPoint, TArray<class AMolly*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AMolly* CallFunc_Array_Get_Item, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
    void Bosco spawn requested__DelegateSignature();
};

#endif
