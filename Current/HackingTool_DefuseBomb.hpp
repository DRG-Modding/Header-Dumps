#ifndef UE4SS_SDK_HackingTool_DefuseBomb_HPP
#define UE4SS_SDK_HackingTool_DefuseBomb_HPP

class UHackingTool_DefuseBomb_C : public UHackingToolWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimColorGrid;
    class UWidgetAnimation* AnimShake;
    class UWidgetAnimation* AnimDeviceEquipped;
    class UWidgetAnimation* AnimHighlightSocket;
    class UBasic_Image_C* Chip_Background;
    class UBasic_Image_C* Chip_Cover;
    class UBasic_Image_C* Chip_Outline;
    class UBasic_Image_C* Grid_Image;
    class UUI_HackingTool_Button_C* Interface_Button;
    class UUI_HackingTool_Header_C* Interface_Header;
    class UUI_HackingTool_Progress_C* Interface_Progress;
    class UProgressBar* TimerProgressBar;
    class UCanvasPanel* WiresCanvas;
    int32 HorizontalSockets;
    int32 VerticalSockets;
    TArray<class UDefuseBomb_SocketsAndWire_C*> Sockets;
    TArray<class UDefuseBomb_SocketsAndWire_C*> Wires;
    TArray<class UDefuseBomb_SocketsAndWire_C*> Cuttables;
    float HighlightSocketProgress;
    int32 HighlightedSocketIndex;
    class UDefuseBomb_SocketsAndWire_C* HighlightedWire;
    class UDefuseBomb_SocketsAndWire_C* CuttableWire;
    class ABP_RivalBombNode_C* Bomb;
    FTimerHandle TimerHandle;
    float GridColorProgress;
    class UAudioComponent* IdleAudio;
    TArray<FLinearColor> WiresToCut;
    bool DoShouts;

    void Shout(class UDialogDataAsset* InShout);
    void OnWireCut();
    bool SortByDistance(const class UWidget* InFirstWidget, const class UWidget* InSecondWidget);
    void SpawnAudioOnDevice(class USoundCue* InCue, float InFadeIn, class UAudioComponent*& AudioComponent);
    void PlayAudioOnDevice(class USoundCue* InCue);
    void SetGridColorProgress(float InProgress);
    void HandleClick();
    void SetHighlightSocketProgress(float InProgress);
    void ShuffleWires();
    void SpawnWires();
    void Finished_C3D3196641A63C5F00D8FE8E04A1FBC1();
    void Finished_6438649444085A754F40E691D18B14D3();
    void Finished_A52BBDD14D1C3758CF01F7A2BAC2D4B5();
    void Finished_1ED3D6CD44E46B8755B39B98A92CDADA();
    void Finished_BEEA36A347506D231A9B2DADDBA9D0EE();
    void Finished_0FEF1054496B26DF35D844906C248D31();
    void ShakeAndContinue(class UUserWidget* InWidget, class UWidgetAnimation* InAnimation);
    void UpdateTimeText();
    void ReceiveHackingStarted();
    void PreConstruct(bool IsDesignTime);
    void ReceiveHackingToolUnequipped();
    void Setup Bomb Event();
    void ReceiveActionClick();
    void ExecuteUbergraph_HackingTool_DefuseBomb(int32 EntryPoint);
};

#endif
