#ifndef UE4SS_SDK_ITM_SeasonPlagueCleanBonus_HPP
#define UE4SS_SDK_ITM_SeasonPlagueCleanBonus_HPP

class UITM_SeasonPlagueCleanBonus_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* EnterCheckmark;
    class UWidgetAnimation* Unlock;
    class UBorder* Border_Token;
    class UButton* Button_Outer;
    class UImage* Image_Checkmark;
    class UImage* Image_Lock;
    class UImage* Image_Token;
    class USeasonTokenReward* TokenReward;
    bool IsClaimed;
    FITM_SeasonPlagueCleanBonus_COnBonusClaimed OnBonusClaimed;
    void OnBonusClaimed();

    class UWidget* Get_Tooltip();
    void UpdateLook();
    void PreConstruct(bool IsDesignTime);
    void SetUnlocked(bool IsUnlocked, bool WithAnim);
    void UnlockAnimFinished();
    void ExecuteUbergraph_ITM_SeasonPlagueCleanBonus(int32 EntryPoint);
    void OnBonusClaimed__DelegateSignature();
};

#endif
