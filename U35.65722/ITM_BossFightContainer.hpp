#ifndef UE4SS_SDK_ITM_BossFightContainer_HPP
#define UE4SS_SDK_ITM_BossFightContainer_HPP

class UITM_BossFightContainer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* IntroAnim;
    class UWidgetAnimation* DisengagedAnim;
    class UWidgetAnimation* DeathAnim;
    class UImage* BG_Left_1;
    class UImage* BG_Middle;
    class UImage* BG_Middle_2;
    class UImage* BG_Middle_3;
    class UImage* BG_Middle_4;
    class UImage* BG_Right_1;
    class UTextBlock* EnemyName;
    class UImage* IconLeft;
    class UImage* IconRight;
    class UNamedSlot* LeftContent;
    class UNamedSlot* MiddleBottomContent;
    class UImage* OutlineLeftBottom;
    class UImage* OutlineLeftDiagonal;
    class UImage* OutlineLeftTop;
    class UImage* OutlineMiddleBottom;
    class UImage* OutlineMiddleTop;
    class UImage* OutlineRightBottom;
    class UImage* OutlineRightDiagonal;
    class UImage* OutlineRightTop;
    class UImage* RedGlow;
    class UNamedSlot* RightContent;
    FITM_BossFightContainer_COnDeathAnimFinished OnDeathAnimFinished;
    void OnDeathAnimFinished();
    FITM_BossFightContainer_COnDisengagedAnimFinished OnDisengagedAnimFinished;
    void OnDisengagedAnimFinished();
    FLinearColor OutlimeColor;
    class USoundBase* Sound_OnDeath;
    class USoundBase* Sound_AnimIn;

    void PreConstruct(bool IsDesignTime);
    void PlayIntro();
    void PlayDeath();
    void PlayDisengaged();
    void Construct();
    void OnDeath();
    void OnDisengaged();
    void SetHeader(FText Name, class UTexture2D* Icon);
    void ExecuteUbergraph_ITM_BossFightContainer(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, FText K2Node_CustomEvent_Name, class UTexture2D* K2Node_CustomEvent_Icon, FLinearColor CallFunc_MenuColors_OutputColor, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_Event_IsDesignTime, FExecuteUbergraph_ITM_BossFightContainerK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_ITM_BossFightContainerK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1);
    void OnDisengagedAnimFinished__DelegateSignature();
    void OnDeathAnimFinished__DelegateSignature();
};

#endif
