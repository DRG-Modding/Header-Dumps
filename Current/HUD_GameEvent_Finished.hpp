#ifndef UE4SS_SDK_HUD_GameEvent_Finished_HPP
#define UE4SS_SDK_HUD_GameEvent_Finished_HPP

class UHUD_GameEvent_Finished_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimHide;
    class UWidgetAnimation* AnimShow;
    class UBasic_Label_C* EventName;
    class UBasic_Image_C* FlashImage;
    class UWidgetSwitcher* StateSwitcher;
    class AGameEvent* GameEvent;

    void RegisterGameEvent(class AGameEvent* GameEvent);
    void Finished_BA99227C420ECB8E15A3BE9A3A7928A8();
    void Finished_E481191143891BECBE7FBF91C8F7C489();
    void Construct();
    void ExecuteUbergraph_HUD_GameEvent_Finished(int32 EntryPoint);
};

#endif
