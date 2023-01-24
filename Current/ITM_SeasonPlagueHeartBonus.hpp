#ifndef UE4SS_SDK_ITM_SeasonPlagueHeartBonus_HPP
#define UE4SS_SDK_ITM_SeasonPlagueHeartBonus_HPP

class UITM_SeasonPlagueHeartBonus_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ScaleDown;
    class UWidgetAnimation* EnterCheckmark;
    class UWidgetAnimation* Unlock;
    class UButton* Button_Selector;
    class UCanvasPanel* CanvasPanel_Outer;
    class UImage* Image_Background;
    class UImage* Image_Checkmark;
    class UImage* Image_HeartAll;
    class UImage* Image_HeartSome;
    class UImage* Image_Lock;
    class UImage* Image_Scrip;
    class UImage* Image_Shade;
    class USizeBox* SizeBox_Outer;
    class UUI_GlowBackground_C* UI_GlowBackground;
    class USeasonTokenReward* TokenReward;
    bool IsClaimed;
    FITM_SeasonPlagueHeartBonus_COnBonusClaimed OnBonusClaimed;
    void OnBonusClaimed();
    bool CanClaim;
    TArray<class UTexture2D*> TokenImages;
    int32 NumberOfPlaguehearts;

    class UWidget* Get_Tooltip();
    void UpdateLook();
    void PreConstruct(bool IsDesignTime);
    void SetUnlocked(bool IsUnlocked, bool WithAnim);
    void BndEvt__ITM_SeasonPlagueHeartBonus_Button_Selector_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void SetLooks(int32 NumberCollected, TEnumAsByte<ENUM_MenuColors::Type> ScripColor);
    void SetShadeAlpha(float alpha);
    void SetData(int32 NumberOfPlaguehearts, bool IsClaimed);
    void ScaleWidget(bool ScaleDown, bool WithAnim);
    void BndEvt__ITM_SeasonPlagueHeartBonus_Button_Selector_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ITM_SeasonPlagueHeartBonus_Button_Selector_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void OnWindowClose_Event();
    void ExecuteUbergraph_ITM_SeasonPlagueHeartBonus(int32 EntryPoint);
    void OnBonusClaimed__DelegateSignature();
};

#endif
