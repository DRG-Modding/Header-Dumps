#ifndef UE4SS_SDK_UI_RockCracker_Connection_HPP
#define UE4SS_SDK_UI_RockCracker_Connection_HPP

class UUI_RockCracker_Connection_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* CrackerActive;
    class UWidgetAnimation* AnimCableProgress;
    class UOverlay* Cable_Anim;
    class UBasic_Image_C* Cable_Bg;
    class UITM_Pipeline_BrokenIcon_C* ITM_Pipeline_BrokenIcon;
    class UImage* Line_RightPercent;
    class UImage* Pod_Broken;
    class UBasic_ProgressBar_C* Pod_Health;
    class UBasic_Image_C* RockCracker_Filled;
    class UCanvasPanel* RootCanvas;
    class UTextBlock* TextBlock_HealthPercent;
    float CableAnimProgress;
    float Health;
    bool PlayCableAnim;
    bool LeftSide;
    bool Inversed;
    bool EventStarted;

    void SetPlayCableAnim(bool InPlay);
    void SetHealth(float InHealth);
    void SetCableAnimProgress(float InValue);
    void PreConstruct(bool IsDesignTime);
    void PlayActiveAnim(bool Active);
    void SetEventStarted();
    void CrackerBuild();
    void CableConnected();
    void ExecuteUbergraph_UI_RockCracker_Connection(int32 EntryPoint);
};

#endif
