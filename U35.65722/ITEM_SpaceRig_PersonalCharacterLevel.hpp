#ifndef UE4SS_SDK_ITEM_SpaceRig_PersonalCharacterLevel_HPP
#define UE4SS_SDK_ITEM_SpaceRig_PersonalCharacterLevel_HPP

class UITEM_SpaceRig_PersonalCharacterLevel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* CanvasPanel_Base;
    class UITM_CharacterBuffIcon_C* ITM_CharacterBuffIcon;
    class UITM_CharacterData_C* ITM_CharacterData;
    class UITM_CharacterIcon_C* ITM_CharacterIcon;
    FLinearColor Tint_Edge;
    FLinearColor Tint_Class;
    class AFSDPlayerState* PlayerState;
    class APlayerCharacter* SelectedCharacter;
    bool TOGGLE: PlayerName;
    bool TOGGLE: XP Display;

    void Construct();
    void Update(class APlayerCharacter* Character);
    void OnPlayerCharacterSpawned(class APlayerCharacter* PlayerCharacter);
    void OnCharacterStatsChanged_Event(class AFSDPlayerState* PlayerState);
    void ExecuteUbergraph_ITEM_SpaceRig_PersonalCharacterLevel(int32 EntryPoint, FExecuteUbergraph_ITEM_SpaceRig_PersonalCharacterLevelK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class APlayerCharacter* K2Node_CustomEvent_character, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, class APlayerCharacter* K2Node_CustomEvent_PlayerCharacter, FExecuteUbergraph_ITEM_SpaceRig_PersonalCharacterLevelK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class AFSDPlayerState* K2Node_CustomEvent_PlayerState);
};

#endif
