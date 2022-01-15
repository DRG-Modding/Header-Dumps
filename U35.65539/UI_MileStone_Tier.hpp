#ifndef UE4SS_SDK_UI_MileStone_Tier_HPP
#define UE4SS_SDK_UI_MileStone_Tier_HPP

class UUI_Milestone_Tier_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Tier01;
    UImage* Tier02;
    UImage* Tier03;
    UImage* Tier04;
    UImage* Tier05;
    UImage* Tier06;
    TArray<UImage*> Tiers;
    int32 MilestoneTier;
    float ImageDimension;

    void InitTierImage(UImage* Image, float CallFunc_Multiply_FloatFloat_ReturnValue, FMargin K2Node_MakeStruct_Margin, UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FVector2D CallFunc_MakeVector2D_ReturnValue, FSlateBrush K2Node_MakeStruct_SlateBrush);
    void Set Tier(int32 Tier, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue_1);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Milestone_Tier(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, TArray<UImage*>& K2Node_MakeArray_Array);
}

#endif
