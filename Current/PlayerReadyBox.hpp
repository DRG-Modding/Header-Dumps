#ifndef UE4SS_SDK_PlayerReadyBox_HPP
#define UE4SS_SDK_PlayerReadyBox_HPP

class UPlayerReadyBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProgressBar* Bar_Loading;
    class UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical;
    class UCircularThrobber* CircularThrobber_128;
    class UITM_CharacterData_C* ITM_CharacterData;
    class UITM_CharacterIcon_C* ITM_CharacterIcon;
    FLinearColor NotReadyColor;
    FLinearColor ReadyColor;
    bool IsReady;
    class AFSDPlayerState* PlayerState;
    float TargetPct;
    float CurrentPct;
    class APlayerCharacter* NewVar_0;

    void HideClass();
    void SetReady(bool IsReady);
    void ReadyChanged(bool IsReady);
    void Init(class AFSDPlayerState* PlayerState);
    void NameChanged(FString NewName);
    void OnSelectedCharacterChanged(TSubclassOf<class APlayerCharacter> NewCharacter);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void FractionGenerated(float Fraction);
    void LevelGenState(FString NewState);
    void UpdateHeroInfo(class UPlayerCharacterID* HeroClass);
    void OnCharacterStatsChanged(class AFSDPlayerState* PlayerState);
    void ExecuteUbergraph_PlayerReadyBox(int32 EntryPoint);
};

#endif
