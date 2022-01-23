#ifndef UE4SS_SDK_HUD_Defend_Event_HPP
#define UE4SS_SDK_HUD_Defend_Event_HPP

class UHUD_Defend_Event_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_HUD_BracketWindowBig_C* Basic_HUD_BracketWindowBigWindowBracketBig;
    class UImage* DefenderActive_01;
    class UImage* DefenderActive_02;
    class UImage* DefenderActive_03;
    class UImage* DefenderActive_04;
    class UImage* DefenderInactive_01;
    class UImage* DefenderInactive_02;
    class UImage* DefenderInactive_03;
    class UImage* DefenderInactive_04;
    class UProgressBar* DefenseProgress;
    class UHUD_DefaultLabel_C* Failure;
    class UHUD_DefaultLabel_C* Header;
    class URetainerBox* RetainerBox_0;
    class UHUD_DefaultLabel_C* Sucess_Done;
    class UVerticalBox* VerticalBox_Complete;
    class UVerticalBox* VerticalBox_Failure;
    class UVerticalBox* VerticalBox_InProgress;
    class AEVENT_Defense_Base_C* Event;
    FLinearColor ProgressColor;
    FText HeaderText;
    TArray<class UImage*> DefenderBlocks;
    FLinearColor NoDefenderColor;
    FLinearColor HasDefenderColor;
    FText SuccesText;
    FText FailureText;

    void UpdateDefenderBlocks(int32 DefenderCount, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, ESlateVisibility K2Node_Select_Default, FLinearColor K2Node_Select_Default_1);
    void AddDefendersToArray(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, int32 CallFunc_Array_Add_ReturnValue, class UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3);
    void Construct();
    void ProgressUpdated(float NewProgress);
    void PreConstruct(bool IsDesignTime);
    void success();
    void Defenders Updated(int32 DefenderCount);
    void Failed();
    void ExecuteUbergraph_HUD_Defend_Event(int32 EntryPoint, bool Temp_bool_Variable, FExecuteUbergraph_HUD_Defend_EventK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FLinearColor Temp_struct_Variable, FExecuteUbergraph_HUD_Defend_EventK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_HUD_Defend_EventK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FExecuteUbergraph_HUD_Defend_EventK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, float K2Node_CustomEvent_NewProgress, bool CallFunc_Greater_FloatFloat_ReturnValue, FLinearColor K2Node_Select_Default, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, int32 K2Node_CustomEvent_DefenderCount);
};

#endif
