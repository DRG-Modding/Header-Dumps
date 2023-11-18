#ifndef UE4SS_SDK_MENU_Merch_HPP
#define UE4SS_SDK_MENU_Merch_HPP

class UMENU_Merch_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimFadeIn;
    class UCanvasPanel* RootCanvas;

    void Construct();
    void OnVisibilityChanged_Event(ESlateVisibility InVisibility);
    void ExecuteUbergraph_MENU_Merch(int32 EntryPoint);
};

#endif
