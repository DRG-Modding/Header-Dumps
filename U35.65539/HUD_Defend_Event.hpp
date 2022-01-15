#ifndef UE4SS_SDK_HUD_Defend_Event_HPP
#define UE4SS_SDK_HUD_Defend_Event_HPP

class UHUD_Defend_Event_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_HUD_BracketWindowBig_C* Basic_HUD_BracketWindowBigWindowBracketBig;
    UImage* DefenderActive_01;
    UImage* DefenderActive_02;
    UImage* DefenderActive_03;
    UImage* DefenderActive_04;
    UImage* DefenderInactive_01;
    UImage* DefenderInactive_02;
    UImage* DefenderInactive_03;
    UImage* DefenderInactive_04;
    UProgressBar* DefenseProgress;
    UHUD_DefaultLabel_C* Failure;
    UHUD_DefaultLabel_C* Header;
    URetainerBox* RetainerBox_0;
    UHUD_DefaultLabel_C* Sucess_Done;
    UVerticalBox* VerticalBox_Complete;
    UVerticalBox* VerticalBox_Failure;
    UVerticalBox* VerticalBox_InProgress;
    AEVENT_Defense_Base_C* Event;
    FLinearColor ProgressColor;
    FText HeaderText;
    TArray<UImage*> DefenderBlocks;
    FLinearColor NoDefenderColor;
    FLinearColor HasDefenderColor;
    FText SuccesText;
    FText FailureText;

    void UpdateDefenderBlocks(int32 DefenderCount, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, ESlateVisibility K2Node_Select_Default, FLinearColor K2Node_Select_Default_1);
    void AddDefendersToArray(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, int32 CallFunc_Array_Add_ReturnValue, UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3);
    void Construct();
    void ProgressUpdated(float NewProgress);
    void PreConstruct(bool IsDesignTime);
    void success();
    void Defenders Updated(int32 DefenderCount);
    void Failed();
    void ExecuteUbergraph_HUD_Defend_Event(int32 EntryPoint, bool Temp_bool_Variable, ProgressUpdated__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FLinearColor Temp_struct_Variable, DefendSucceded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, DefenderCountUpdate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, DefendFailed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, float K2Node_CustomEvent_NewProgress, bool CallFunc_Greater_FloatFloat_ReturnValue, FLinearColor K2Node_Select_Default, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, int32 K2Node_CustomEvent_DefenderCount);
}

#endif
