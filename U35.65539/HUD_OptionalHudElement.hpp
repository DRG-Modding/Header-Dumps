#ifndef UE4SS_SDK_HUD_OptionalHudElement_HPP
#define UE4SS_SDK_HUD_OptionalHudElement_HPP

class UHUD_OptionalHudElement_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UNamedSlot* Content;
    UHUDVisibilityGroup* VisibilityGroup;
    ESlateVisibility VisibleMode;
    ESlateVisibility HiddenMode;

    void Construct();
    void ExecuteUbergraph_HUD_OptionalHudElement(int32 EntryPoint);
}

#endif
