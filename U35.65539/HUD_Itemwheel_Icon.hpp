#ifndef UE4SS_SDK_HUD_Itemwheel_Icon_HPP
#define UE4SS_SDK_HUD_Itemwheel_Icon_HPP

class UHUD_Itemwheel_Icon_C : UItemsBarIcon
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimSelected;
    UBasic_HUD_BracketWindowBig_C* BasicWindow_Bracket;
    UImage* BG_Icon;
    UImage* Icon;

    void OnUnselect();
    void OnSelect();
    void OnInit();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_Itemwheel_Icon(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UTexture2D* CallFunc_GetItemIconBG_ReturnValue, bool K2Node_Event_IsDesignTime, UTexture2D* CallFunc_GetItemIconLine_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2);
}

#endif
