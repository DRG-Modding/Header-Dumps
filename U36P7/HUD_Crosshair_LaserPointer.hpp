#ifndef UE4SS_SDK_HUD_Crosshair_LaserPointer_HPP
#define UE4SS_SDK_HUD_Crosshair_LaserPointer_HPP

class UHUD_Crosshair_LaserPointer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* DotImage;
    bool DotVisible;

    void SetDotVisible(bool IsVisible);
    void Construct();
    void ExecuteUbergraph_HUD_Crosshair_LaserPointer(int32 EntryPoint);
};

#endif
