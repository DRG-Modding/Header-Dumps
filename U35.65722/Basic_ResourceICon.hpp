#ifndef UE4SS_SDK_Basic_ResourceICon_HPP
#define UE4SS_SDK_Basic_ResourceICon_HPP

class UBasic_ResourceIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ResourceIcon;
    float IconSize;
    class UBasic_ToolTip_C* ToolTip;
    bool ShowToolTip;

    void SetIconSize(float InSize, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void SetResource(class UResourceData* Resource, ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_1, ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_2, class UBasic_ToolTip_C* CallFunc_CreateBasicToolTip_ToolTipWidget);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Basic_ResourceIcon(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
