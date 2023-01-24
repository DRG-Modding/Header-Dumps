#ifndef UE4SS_SDK_OVERLAY_RetirementGranted_HPP
#define UE4SS_SDK_OVERLAY_RetirementGranted_HPP

class UOVERLAY_RetirementGranted_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* IconOutro;
    class UWidgetAnimation* IconIntro;
    class UWidgetAnimation* Enter;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow_0;
    class UImage* BGgradientBottom;
    class UImage* BGgradientTop;
    class UHUD_PlayerClass_Icon_C* HUD_PlayerClass_Icon;
    class UCanvasPanel* PlayerIconScaler;
    class UTextBlock* Text_Mission;
    class UTextBlock* Text_MissionStatus;
    FOVERLAY_RetirementGranted_COnFinished OnFinished;
    void OnFinished();

    void PreConstruct(bool IsDesignTime);
    void Play(class UPlayerCharacterID* CharacterClass, int32 RetirementCount);
    void Construct();
    void OnEnterFinished();
    void OnIntroFinished();
    void PlayOutro(float Duration);
    void ExecuteUbergraph_OVERLAY_RetirementGranted(int32 EntryPoint);
    void OnFinished__DelegateSignature();
};

#endif
