#ifndef UE4SS_SDK_UI_PendingReward_RewardLine_HPP
#define UE4SS_SDK_UI_PendingReward_RewardLine_HPP

class UUI_PendingReward_RewardLine_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* DATAAmount;
    UTextBlock* DataDescription;
    UTextBlock* DataPostfix;

    void Init(FText Description, FText Postfix, int32 Amount, float StartDelay, USoundBase* Sound);
    void PreConstruct(bool IsDesignTime);
    void Init Simple(FText Description, FText Postfix, int32 Amount);
    void ExecuteUbergraph_UI_PendingReward_RewardLine(int32 EntryPoint, FText K2Node_CustomEvent_Description_1, FText K2Node_CustomEvent_Postfix_1, int32 K2Node_CustomEvent_Amount_1, float K2Node_CustomEvent_StartDelay, USoundBase* K2Node_CustomEvent_Sound, bool CallFunc_IsValid_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FText K2Node_CustomEvent_Description, FText K2Node_CustomEvent_Postfix, int32 K2Node_CustomEvent_Amount, FText CallFunc_Conv_IntToText_ReturnValue_1, bool CallFunc_TextIsEmpty_ReturnValue_1, FText CallFunc_TextToUpper_ReturnValue_1, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, ESlateVisibility K2Node_Select_Default_1);
}

#endif
