#ifndef UE4SS_SDK_HUD_RefineryUsebutton_HPP
#define UE4SS_SDK_HUD_RefineryUsebutton_HPP

class UHUD_RefineryUseButton_C : public UFSDInWorldWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimDownArrow;
    class UUI_ImageTinted_C* IMG_DownArrow;
    class UImage* Img_Icon;
    class AFSDRefinery* Refinery;

    void UpdateState();
    void SetRefinery(class AFSDRefinery* InRefinery);
    void Construct();
    void OnRefineryStateChanged(ERefineryState InRefineryState);
    void PreConstruct(bool IsDesignTime);
    void OnCanStartRefineryChanged(bool CanUse);
    void ExecuteUbergraph_HUD_RefineryUseButton(int32 EntryPoint);
};

#endif
