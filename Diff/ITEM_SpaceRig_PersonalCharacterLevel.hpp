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
    void ExecuteUbergraph_ITEM_SpaceRig_PersonalCharacterLevel(int32 EntryPoint);
};

#endif
