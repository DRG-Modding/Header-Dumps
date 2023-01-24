#ifndef UE4SS_SDK_Lobby_BarTop_Countdown_HPP
#define UE4SS_SDK_Lobby_BarTop_Countdown_HPP

class ULobby_BarTop_Countdown_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Pulse;
    class UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical;
    class UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical_0;
    class UBorder* Border_28;
    class UImage* Icon_Warning;
    class UImage* Image_1;
    class UImage* Image_2;
    class UCanvasPanel* RootCanvas;
    class UTextBlock* TimerText;
    bool Ansel;

    void Construct();
    void CountDownChanged(bool IsActive);
    void TimerChanged(float newTime);
    void HostCoundownChanged(bool IsActive);
    void CustomEvent(float newTime);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Lobby_BarTop_Countdown(int32 EntryPoint);
};

#endif
