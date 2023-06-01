#ifndef UE4SS_SDK_UI_Crafting_MasteryBar_HPP
#define UE4SS_SDK_UI_Crafting_MasteryBar_HPP

class UUI_Crafting_MasteryBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimLevelUp;
    class UWidgetAnimation* AnimProgress;
    class UImage* Image_111;
    class UUI_Crafting_MasteryBar_Reward_C* Mastery_AnimReward;
    class UUI_Crafting_MasteryBar_Reward_C* Mastery_Reward;
    class UUI_Forge_LevelIcon_C* MasteryLevel;
    class UBasic_Image_C* Progress_Background;
    class UProgressBar* Progress_Bar;
    class UBasic_Image_C* Progress_Border;
    class UProgressBar* Progress_GhostBar;
    class UBasic_Label_C* XP_Label;
    float ProgressAnim;
    int32 CurrentLevel;
    int32 CurrentXP;
    int32 TargetLevel;
    int32 TargetXP;
    bool AnimatingProgress;
    FUI_Crafting_MasteryBar_COnMasteryAnimFinished OnMasteryAnimFinished;
    void OnMasteryAnimFinished();

    void SetLevelAndXP(int32 InLevel, int32 InXP);
    void SetProgressAnim(float InProgress);
    void Finished_D0849C0B40CCD7B2D78053B311632C3E();
    void Finished_6474C18043258635ED36ACA9F1D56472();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnVanityMasteryChanged(FVanityMasteryResult Result);
    void StartAnimProgress();
    void ExecuteUbergraph_UI_Crafting_MasteryBar(int32 EntryPoint);
    void OnMasteryAnimFinished__DelegateSignature();
};

#endif
