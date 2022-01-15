#ifndef UE4SS_SDK_HUD_Itembar_Icon_HPP
#define UE4SS_SDK_HUD_Itembar_Icon_HPP

class UHUD_Itembar_Icon_C : UItemsBarIcon
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimSelected;
    UBasic_HUD_BracketWindowBig_C* BasicWindow_Bracket;
    UImage* BG_Icon;
    UTextBlock* ButtonKey;
    UImage* edgeL;
    UImage* edgeR;
    UImage* Icon;
    UImage* NumberBG;
    FSlateColor NumberColor;

    void SetSelected(bool IsSelected, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void OnUnselect();
    void OnSelect();
    void PreConstruct(bool IsDesignTime);
    void OnInit();
    void ExecuteUbergraph_HUD_Itembar_Icon(int32 EntryPoint, float Temp_float_Variable, float Temp_float_Variable_1, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor CallFunc_MenuColors_OutputColor_3, bool Temp_bool_Variable, float K2Node_Select_Default, UTexture2D* CallFunc_GetIconBG_ReturnValue, UTexture2D* CallFunc_GetIconLine_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue);
}

#endif
