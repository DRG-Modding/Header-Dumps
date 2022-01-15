#ifndef UE4SS_SDK_HUD_Crosshair_LaserPointer_HPP
#define UE4SS_SDK_HUD_Crosshair_LaserPointer_HPP

class UHUD_Crosshair_LaserPointer_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* DotImage;
    bool DotVisible;

    void SetDotVisible(bool IsVisible, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void Construct();
    void ExecuteUbergraph_HUD_Crosshair_LaserPointer(int32 EntryPoint);
}

#endif
