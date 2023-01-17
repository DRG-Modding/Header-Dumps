#ifndef UE4SS_SDK_HUD_Itembar_Icon_HPP
#define UE4SS_SDK_HUD_Itembar_Icon_HPP

class UHUD_Itembar_Icon_C : public UItemsBarIcon
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimSelected;
    class UBasic_HUD_BracketWindowBig_C* BasicWindow_Bracket;
    class UImage* BG_Icon;
    class UTextBlock* ButtonKey;
    class UImage* edgeL;
    class UImage* edgeR;
    class UImage* Icon;
    class UImage* NumberBG;
    FSlateColor NumberColor;

    void SetSelected(bool IsSelected);
    void OnUnselect();
    void OnSelect();
    void PreConstruct(bool IsDesignTime);
    void OnInit();
    void ExecuteUbergraph_HUD_Itembar_Icon(int32 EntryPoint);
};

#endif
