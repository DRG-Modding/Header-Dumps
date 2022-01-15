#ifndef UE4SS_SDK_ITM_SupplyBar_HPP
#define UE4SS_SDK_ITM_SupplyBar_HPP

class UITM_SupplyBar_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UUI_ImageTinted_C* Image_SupplyType;
    UITM_SupplyBarItem_C* ITM_SupplyBarItem_1;
    UITM_SupplyBarItem_C* ITM_SupplyBarItem_2;
    UITM_SupplyBarItem_C* ITM_SupplyBarItem_3;
    UITM_SupplyBarItem_C* ITM_SupplyBarItem_4;
    UProgressBar* ProgressBar;
    UHorizontalBox* ProgressChunks;
    bool ShowAsProgressBar;
    bool ShowBlinkingSegments;
    UTexture2D* SupplyIcon;
    TEnumAsByte<ENUM_MenuColors::Type> IconTint;
    TEnumAsByte<ENUM_MenuColors::Type> ProgressBarTint;
    TEnumAsByte<ENUM_MenuColors::Type> SegmentBorderTint;
    TEnumAsByte<ENUM_MenuColors::Type> SegmentInnerTint;
    TEnumAsByte<ENUM_MenuColors::Type> SegmentLowTint;

    void SetProgress(float Progress (0-1), UITM_SupplyBarItem_C* BarItem, float ChunkSize, int32 ChunkNo, float Percent, float CallFunc_FClamp_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 Temp_int_Variable, UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, UITM_SupplyBarItem_C* K2Node_DynamicCast_AsITM_Supply_Bar_Item, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable_1, int32 CallFunc_GetChildrenCount_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_SupplyBar(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, FLinearColor CallFunc_MenuColors_OutputColor, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible_2, bool CallFunc_SelectVisibility_VisibilityChanged_2, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_2);
}

#endif
