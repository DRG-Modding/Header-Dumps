#ifndef UE4SS_SDK_HUD_OptionalHudElement_HPP
#define UE4SS_SDK_HUD_OptionalHudElement_HPP

class UHUD_OptionalHudElement_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNamedSlot* Content;
    class UHUDVisibilityGroup* VisibilityGroup;
    ESlateVisibility VisibleMode;
    ESlateVisibility HiddenMode;

    void Construct();
    void ExecuteUbergraph_HUD_OptionalHudElement(int32 EntryPoint);
};

#endif
