#ifndef UE4SS_SDK_HUD_Salvage_Defend_HPP
#define UE4SS_SDK_HUD_Salvage_Defend_HPP

class UHUD_Salvage_Defend_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_HUD_BracketWindowBig_C* Basic_HUD_BracketWindowBigWindowBracketBig;
    class UProgressBar* DefenseProgress;
    class UHUD_DefaultLabel_C* Header;
    class UHUD_Salvage_Defend_PlayerSlot_C* PlayerSlot_01;
    class UHUD_Salvage_Defend_PlayerSlot_C* PlayerSlot_02;
    class UHUD_Salvage_Defend_PlayerSlot_C* PlayerSlot_03;
    class UHUD_Salvage_Defend_PlayerSlot_C* PlayerSlot_04;
    class UHUD_DefaultLabel_C* Sucess_Done;
    class UVerticalBox* VerticalBox_Complete;
    class UVerticalBox* VerticalBox_InProgress;
    class AEVENT_DropPodDefense_Base_C* Event;
    FLinearColor ProgressColor;
    FText HeaderText;
    FLinearColor NoDefenderColor;
    FLinearColor HasDefenderColor;
    FText SuccesText;
    TArray<class UHUD_Salvage_Defend_PlayerSlot_C*> PlayerSlots;

    void UpdateDefenderBlocks(int32 DefenderCount, TArray<class UHUD_Salvage_Defend_PlayerSlot_C*> DefendSlots, class UHUD_Salvage_Defend_PlayerSlot_C* DefendSlot, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, class UHUD_Salvage_Defend_PlayerSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, TArray<class UHUD_Salvage_Defend_PlayerSlot_C*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, ESlateVisibility K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue);
    void Construct();
    void ProgressUpdated(float NewProgress);
    void PreConstruct(bool IsDesignTime);
    void DefendersUpdated(int32 DefenderCount);
    void success();
    void ExecuteUbergraph_HUD_Salvage_Defend(int32 EntryPoint, FExecuteUbergraph_HUD_Salvage_DefendK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, FLinearColor Temp_struct_Variable, FExecuteUbergraph_HUD_Salvage_DefendK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_HUD_Salvage_DefendK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, float K2Node_CustomEvent_NewProgress, bool CallFunc_Greater_FloatFloat_ReturnValue, FLinearColor K2Node_Select_Default, bool K2Node_Event_IsDesignTime, int32 K2Node_CustomEvent_DefenderCount, FLinearColor CallFunc_MenuColors_OutputColor);
};

#endif
