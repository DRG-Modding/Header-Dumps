#ifndef UE4SS_SDK_Lore_Container_WindowTextAndIcon_HPP
#define UE4SS_SDK_Lore_Container_WindowTextAndIcon_HPP

class ULore_Container_WindowTextAndIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Glow;
    class UBasic_IconWithOutline_C* Basic_HexIcon;
    class UBasic_Window_CutCorner_C* Basic_Window;
    class UHorizontalBox* HorizontalBox_Headline;
    class UImage* IconBackgroundGlow;
    class URichTextBlock* RichTextBlock_Body;
    class UTextBlock* TextBlock_Headline;
    class UUI_RunningText_C* UI_RunningText;
    FText Headline;
    FText TextBody;
    EDamageType DamageType;
    class UTexture2D* Icon;
    TEnumAsByte<M_IconShapes::Type> IconShape;
    FLinearColor IconTint;
    float IconScale;
    bool IconOutline;
    bool IconAtRightSide;

    void SetText(FText Headline, FText TextBody);
    void PreConstruct(bool IsDesignTime);
    void SetBackgruondGlow(bool IsVisible, TEnumAsByte<ENUM_MenuColors::Type> Color);
    void ActiveRunningText();
    void OnFinished();
    void ExecuteUbergraph_Lore_Container_WindowTextAndIcon(int32 EntryPoint, bool Temp_bool_Variable, FText K2Node_CustomEvent_Headline, FText K2Node_CustomEvent_TextBody, bool K2Node_Event_IsDesignTime, FExecuteUbergraph_Lore_Container_WindowTextAndIconK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, ESlateVisibility Temp_byte_Variable, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, bool K2Node_CustomEvent_isVisible, TEnumAsByte<ENUM_MenuColors::Type> K2Node_CustomEvent_Color, FLinearColor CallFunc_MenuColors_OutputColor, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, FLinearColor K2Node_MakeStruct_LinearColor, ESlateVisibility Temp_byte_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, ESlateVisibility K2Node_Select_Default);
};

#endif
