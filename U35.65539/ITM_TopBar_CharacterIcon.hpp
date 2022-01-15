#ifndef UE4SS_SDK_ITM_TopBar_CharacterIcon_HPP
#define UE4SS_SDK_ITM_TopBar_CharacterIcon_HPP

class UITM_TopBar_CharacterIcon_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UITM_CharacterData_C* ITM_CharacterData;
    UITM_CharacterIcon_C* ITM_CharacterIcon;
    APlayerCharacter* SelectedCharacter;
    AFSDPlayerState* PlayerState;

    void FromPlayerState(UPlayerState* PlayerState, UPlayerCharacter* SelectedCharacter, TSubclassOf<UPlayerCharacter> CharacterClass);
    void SetHeroData(float XP Progress, int32 Times Retired, bool IsHost, TSubclassOf<UPlayerCharacter> Character);
    void Update(UPlayerCharacter* Character);
    void Construct();
    void OnPlayerCharacterSpawned(UPlayerCharacter* PlayerCharacter);
    void ExecuteUbergraph_ITM_TopBar_CharacterIcon(int32 EntryPoint, UPlayerCharacter* K2Node_CustomEvent_character, bool CallFunc_IsValid_ReturnValue, PlayerSpawnedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, UFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, UPlayerCharacter* K2Node_CustomEvent_PlayerCharacter);
}

#endif
