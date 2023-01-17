#ifndef UE4SS_SDK_HUD_Flashlight_HPP
#define UE4SS_SDK_HUD_Flashlight_HPP

class UHUD_Flashlight_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ImageOFF;
    class UImage* ImageON;
    class UWidgetSwitcher* ImageSwitcher;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel;
    bool IsOn;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnHeadlightOnChanged(bool IsOn);
    void ExecuteUbergraph_HUD_Flashlight(int32 EntryPoint);
};

#endif
