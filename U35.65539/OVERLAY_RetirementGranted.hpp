#ifndef UE4SS_SDK_OVERLAY_RetirementGranted_HPP
#define UE4SS_SDK_OVERLAY_RetirementGranted_HPP

class UOVERLAY_RetirementGranted_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* IconOutro;
    UWidgetAnimation* IconIntro;
    UWidgetAnimation* Enter;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow_0;
    UImage* BGgradientBottom;
    UImage* BGgradientTop;
    UHUD_PlayerClass_Icon_C* HUD_PlayerClass_Icon;
    UCanvasPanel* PlayerIconScaler;
    UTextBlock* Text_Mission;
    UTextBlock* Text_MissionStatus;
    FOVERLAY_RetirementGranted_COnFinished OnFinished;
    void OnFinished();

    void PreConstruct(bool IsDesignTime);
    void Play(UPlayerCharacterID* CharacterClass, int32 RetirementCount);
    void Construct();
    void OnEnterFinished();
    void OnIntroFinished();
    void PlayOutro(float Duration);
    void ExecuteUbergraph_OVERLAY_RetirementGranted(int32 EntryPoint, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, UPlayerCharacterID* K2Node_CustomEvent_CharacterClass, int32 K2Node_CustomEvent_RetirementCount, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float K2Node_CustomEvent_Duration, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2);
    void OnFinished__DelegateSignature();
}

#endif
