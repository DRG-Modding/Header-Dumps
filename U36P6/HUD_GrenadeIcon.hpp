#ifndef UE4SS_SDK_HUD_GrenadeIcon_HPP
#define UE4SS_SDK_HUD_GrenadeIcon_HPP

class UHUD_GrenadeIcon_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_17;
    bool IsOn;

    void SetOn(bool Visible);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_GrenadeIcon(int32 EntryPoint);
};

#endif
