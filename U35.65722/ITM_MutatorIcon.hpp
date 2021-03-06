#ifndef UE4SS_SDK_ITM_MutatorIcon_HPP
#define UE4SS_SDK_ITM_MutatorIcon_HPP

class UITM_MutatorIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* IconWarning;
    class USizeBox* WarningSizer;
    class UTexture2D* MutatorIcon;
    TEnumAsByte<ENUM_MenuColors::Type> Color;
    FVector2D Size;
    FText ToolTip;
    class UBasic_ToolTip_C* WarningToolTip;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_MutatorIcon(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UBasic_ToolTip_C* CallFunc_CreateBasicToolTip_ToolTipWidget);
};

#endif
