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
    class UUI_PlayerSpeaking_C* UI_PlayerSpeaking;
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
    void ExecuteUbergraph_PlayerReadyBox(int32 EntryPoint, FExecuteUbergraph_PlayerReadyBoxK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_PlayerReadyBoxK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_PlayerReadyBoxK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FExecuteUbergraph_PlayerReadyBoxK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_CustomEvent_IsReady, class AFSDPlayerState* K2Node_CustomEvent_PlayerState_1, FString K2Node_CustomEvent_NewName, TSubclassOf<class APlayerCharacter> K2Node_CustomEvent_NewCharacter, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, bool CallFunc_IsValid_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float K2Node_CustomEvent_Fraction, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, FString K2Node_CustomEvent_newState, class UPlayerCharacterID* K2Node_CustomEvent_HeroClass, class AFSDPlayerState* K2Node_CustomEvent_PlayerState, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue_1, float CallFunc_Lerp_ReturnValue, FExecuteUbergraph_PlayerReadyBoxK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4);
};

#endif
