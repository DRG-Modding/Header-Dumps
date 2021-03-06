#ifndef UE4SS_SDK_ITM_MutatorImage_HPP
#define UE4SS_SDK_ITM_MutatorImage_HPP

class UITM_MutatorImage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_Warning;
    class UTexture2D* Icon;
    TEnumAsByte<ENUM_MenuColors::Type> Color;
    FText ToolTip;
    class UBasic_ToolTip_C* WarningToolTip;

    void Construct();
    void ExecuteUbergraph_ITM_MutatorImage(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, class UBasic_ToolTip_C* CallFunc_CreateBasicToolTip_ToolTipWidget);
};

#endif
