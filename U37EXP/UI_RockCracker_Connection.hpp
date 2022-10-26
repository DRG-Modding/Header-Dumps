#ifndef UE4SS_SDK_UI_RockCracker_Connection_HPP
#define UE4SS_SDK_UI_RockCracker_Connection_HPP

class UUI_RockCracker_Connection_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimCableProgress;
    class UOverlay* Cable_Anim;
    class UImage* Pod_Broken;
    class UBasic_ProgressBar_C* Pod_Health;
    class UCanvasPanel* RootCanvas;
    class UTextBlock* TextBlock_HealthPercent;
    float CableAnimProgress;
    float Health;
    bool PlayCableAnim;
    bool LeftSide;
    bool InverseText;

    void SetPlayCableAnim(bool InPlay);
    void SetHealth(float InHealth);
    void SetCableAnimProgress(float InValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_RockCracker_Connection(int32 EntryPoint);
};

#endif
