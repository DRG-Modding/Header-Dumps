#ifndef UE4SS_SDK_ITM_TopBar_CharacterIcon_HPP
#define UE4SS_SDK_ITM_TopBar_CharacterIcon_HPP

class UITM_TopBar_CharacterIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_CharacterData_C* ITM_CharacterData;
    class UITM_CharacterIcon_C* ITM_CharacterIcon;
    class APlayerCharacter* SelectedCharacter;
    class AFSDPlayerState* PlayerState;

    void FromPlayerState(class APlayerState* PlayerState, class APlayerCharacter* SelectedCharacter);
    void SetHeroData(float XP Progress, int32 Times Retired, bool IsHost, TSubclassOf<class APlayerCharacter> Character);
    void Update(class APlayerCharacter* Character);
    void Construct();
    void OnPlayerCharacterSpawned(class APlayerCharacter* PlayerCharacter);
    void ExecuteUbergraph_ITM_TopBar_CharacterIcon(int32 EntryPoint);
};

#endif
