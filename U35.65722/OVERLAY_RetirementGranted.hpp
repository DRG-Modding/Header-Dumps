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
    void ExecuteUbergraph_OVERLAY_RetirementGranted(int32 EntryPoint, FExecuteUbergraph_OVERLAY_RetirementGrantedK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_OVERLAY_RetirementGrantedK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, class UPlayerCharacterID* K2Node_CustomEvent_CharacterClass, int32 K2Node_CustomEvent_RetirementCount, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float K2Node_CustomEvent_Duration, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2);
    void OnFinished__DelegateSignature();
};

#endif
