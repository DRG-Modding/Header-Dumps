#ifndef UE4SS_SDK_ITM_TopBar_CharacterLevel_HPP
#define UE4SS_SDK_ITM_TopBar_CharacterLevel_HPP

class UITM_TopBar_CharacterLevel_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* CharacterLevel;
    class UBorder* LevelBG;
    class UHorizontalBox* LineBox;
    float Width;
    float Right Padding;

    void FromPlayerState(class APlayerState* PlayerState);
    void SetCharacterLevel(int32 CharacterLevel);
    void Construct();
    void OnPlayerCharacterSpawned(class APlayerCharacter* PlayerCharacter);
    void OnCharacterStatsChanged_Event(class AFSDPlayerState* PlayerState);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_TopBar_CharacterLevel(int32 EntryPoint);
};

#endif
