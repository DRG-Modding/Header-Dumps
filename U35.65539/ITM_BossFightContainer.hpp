#ifndef UE4SS_SDK_ITM_BossFightContainer_HPP
#define UE4SS_SDK_ITM_BossFightContainer_HPP

class UITM_BossFightContainer_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* IntroAnim;
    UWidgetAnimation* DisengagedAnim;
    UWidgetAnimation* DeathAnim;
    UImage* BG_Left_1;
    UImage* BG_Middle;
    UImage* BG_Middle_2;
    UImage* BG_Middle_3;
    UImage* BG_Middle_4;
    UImage* BG_Right_1;
    UTextBlock* EnemyName;
    UImage* IconLeft;
    UImage* IconRight;
    UNamedSlot* LeftContent;
    UNamedSlot* MiddleBottomContent;
    UImage* OutlineLeftBottom;
    UImage* OutlineLeftDiagonal;
    UImage* OutlineLeftTop;
    UImage* OutlineMiddleBottom;
    UImage* OutlineMiddleTop;
    UImage* OutlineRightBottom;
    UImage* OutlineRightDiagonal;
    UImage* OutlineRightTop;
    UImage* RedGlow;
    UNamedSlot* RightContent;
    FITM_BossFightContainer_COnDeathAnimFinished OnDeathAnimFinished;
    void OnDeathAnimFinished();
    FITM_BossFightContainer_COnDisengagedAnimFinished OnDisengagedAnimFinished;
    void OnDisengagedAnimFinished();
    FLinearColor OutlimeColor;
    USoundBase* Sound_OnDeath;
    USoundBase* Sound_AnimIn;

    void PreConstruct(bool IsDesignTime);
    void PlayIntro();
    void PlayDeath();
    void PlayDisengaged();
    void Construct();
    void OnDeath();
    void OnDisengaged();
    void SetHeader(FText Name, UTexture2D* Icon);
    void ExecuteUbergraph_ITM_BossFightContainer(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, FText K2Node_CustomEvent_Name, UTexture2D* K2Node_CustomEvent_Icon, FLinearColor CallFunc_MenuColors_OutputColor, bool CallFunc_IsValid_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_Event_IsDesignTime, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1);
    void OnDisengagedAnimFinished__DelegateSignature();
    void OnDeathAnimFinished__DelegateSignature();
}

#endif
