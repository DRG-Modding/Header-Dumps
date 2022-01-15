#ifndef UE4SS_SDK_PlayerReadyBox_HPP
#define UE4SS_SDK_PlayerReadyBox_HPP

class UPlayerReadyBox_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UProgressBar* Bar_Loading;
    UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical;
    UCircularThrobber* CircularThrobber_128;
    UITM_CharacterData_C* ITM_CharacterData;
    UITM_CharacterIcon_C* ITM_CharacterIcon;
    UUI_PlayerSpeaking_C* UI_PlayerSpeaking;
    FLinearColor NotReadyColor;
    FLinearColor ReadyColor;
    bool IsReady;
    AFSDPlayerState* PlayerState;
    float TargetPct;
    float CurrentPct;
    APlayerCharacter* NewVar_0;

    void HideClass();
    void SetReady(bool IsReady);
    void ReadyChanged(bool IsReady);
    void Init(UFSDPlayerState* PlayerState);
    void NameChanged(FString NewName);
    void OnSelectedCharacterChanged(TSubclassOf<UPlayerCharacter> NewCharacter);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void FractionGenerated(float Fraction);
    void LevelGenState(FString NewState);
    void UpdateHeroInfo(UPlayerCharacterID* HeroClass);
    void OnCharacterStatsChanged(UFSDPlayerState* PlayerState);
    void ExecuteUbergraph_PlayerReadyBox(int32 EntryPoint, SelectedCharacterChangedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FractionLevelGeneratedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, LevelGenerationStateSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, CharacterProgressChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_CustomEvent_IsReady, UFSDPlayerState* K2Node_CustomEvent_PlayerState_1, FString K2Node_CustomEvent_NewName, TSubclassOf<UPlayerCharacter> K2Node_CustomEvent_NewCharacter, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, bool CallFunc_IsValid_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float K2Node_CustomEvent_Fraction, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, FString K2Node_CustomEvent_newState, UPlayerCharacterID* K2Node_CustomEvent_HeroClass, UFSDPlayerState* K2Node_CustomEvent_PlayerState, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue_1, float CallFunc_Lerp_ReturnValue, PlayerNameChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4);
}

#endif
