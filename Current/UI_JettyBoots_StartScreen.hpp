#ifndef UE4SS_SDK_UI_JettyBoots_StartScreen_HPP
#define UE4SS_SDK_UI_JettyBoots_StartScreen_HPP

class UUI_JettyBoots_StartScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimBootIdle;
    class UWidgetAnimation* AnimBootJump;
    class UWidgetSwitcher* CenterSwitcher;
    class UBasic_Image_C* Character_Image;
    class UVerticalBox* HighScores_Box;
    FTimerHandle SwitchContentTimer;

    void SetFSDEventSettings(bool InHasSettings, FJettyBootEventSettings InSettings);
    void Start(bool StartWithHighScores);
    void SetHighScores(TArray<FJettyBootsScore>& InHighScores, int32 InLastIndex, int32& OutCurrentBest);
    void Finished_501568F5450B58B30B9BA992AA66184E();
    void Finished_FD22870B47131B500E9FB18111157FEE();
    void Construct();
    void PlayBootAnim();
    void SwitchContent();
    void ExecuteUbergraph_UI_JettyBoots_StartScreen(int32 EntryPoint);
};

#endif
