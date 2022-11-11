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
    void ExecuteUbergraph_ITM_MutatorIcon(int32 EntryPoint);
};

#endif
