#ifndef UE4SS_SDK_HUD_PlayerClass_Icon_HPP
#define UE4SS_SDK_HUD_PlayerClass_Icon_HPP

class UHUD_PlayerClass_Icon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HBox_Beers;
    class UInvalidationBox* InvalidationBox_2;
    class UITM_CharacterIcon_C* ITM_CharacterIcon;
    FLinearColor Tint_Edge;
    FLinearColor Tint_Class;

    void Add Buff(class UTemporaryBuff* buff);
    void SetIsServer(bool IsServer);
    void Construct();
    void FromPlayerState(class APlayerState* PlayerState, TSubclassOf<class APlayerCharacter> playerClass);
    void OnTemporaryBuffChanged(class UTemporaryBuff* buff, class APlayerCharacter* AffectedPlayer);
    void SetData(class UPlayerCharacterID* playerClass, int32 TimesRetired, bool IsServer);
    void ExecuteUbergraph_HUD_PlayerClass_Icon(int32 EntryPoint);
};

#endif
