#ifndef UE4SS_SDK_HUD_Itemwheel_Icon_HPP
#define UE4SS_SDK_HUD_Itemwheel_Icon_HPP

class UHUD_Itemwheel_Icon_C : public UItemsBarIcon
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimSelected;
    class UBasic_HUD_BracketWindowBig_C* BasicWindow_Bracket;
    class UImage* BG_Icon;
    class UImage* Icon;

    void OnUnselect();
    void OnSelect();
    void OnInit();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_Itemwheel_Icon(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UTexture2D* CallFunc_GetItemIconBG_ReturnValue, bool K2Node_Event_IsDesignTime, class UTexture2D* CallFunc_GetItemIconLine_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2);
};

#endif
