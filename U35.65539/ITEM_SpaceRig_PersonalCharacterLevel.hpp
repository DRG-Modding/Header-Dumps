#ifndef UE4SS_SDK_ITEM_SpaceRig_PersonalCharacterLevel_HPP
#define UE4SS_SDK_ITEM_SpaceRig_PersonalCharacterLevel_HPP

class UITEM_SpaceRig_PersonalCharacterLevel_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCanvasPanel* CanvasPanel_Base;
    UITM_CharacterBuffIcon_C* ITM_CharacterBuffIcon;
    UITM_CharacterData_C* ITM_CharacterData;
    UITM_CharacterIcon_C* ITM_CharacterIcon;
    FLinearColor Tint_Edge;
    FLinearColor Tint_Class;
    AFSDPlayerState* PlayerState;
    APlayerCharacter* SelectedCharacter;
    bool TOGGLE: PlayerName;
    bool TOGGLE: XP Display;

    void Construct();
    void Update(UPlayerCharacter* Character);
    void OnPlayerCharacterSpawned(UPlayerCharacter* PlayerCharacter);
    void OnCharacterStatsChanged_Event(UFSDPlayerState* PlayerState);
    void ExecuteUbergraph_ITEM_SpaceRig_PersonalCharacterLevel(int32 EntryPoint, CharacterProgressChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UPlayerCharacter* K2Node_CustomEvent_character, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, UFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, UPlayerCharacter* K2Node_CustomEvent_PlayerCharacter, PlayerSpawnedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UFSDPlayerState* K2Node_CustomEvent_PlayerState);
}

#endif
