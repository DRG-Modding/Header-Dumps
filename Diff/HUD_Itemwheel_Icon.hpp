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
    void ExecuteUbergraph_HUD_Itemwheel_Icon(int32 EntryPoint);
};

#endif
