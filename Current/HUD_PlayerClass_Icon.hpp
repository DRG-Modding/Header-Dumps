#ifndef UE4SS_SDK_HUD_PlayerClass_Icon_HPP
#define UE4SS_SDK_HUD_PlayerClass_Icon_HPP

class UHUD_PlayerClass_Icon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BarBuff;
    class UInvalidationBox* InvalidationBox_2;
    class UITM_CharacterIcon_C* ITM_CharacterIcon;
    FLinearColor Tint_Edge;
    FLinearColor Tint_Class;

    void SetBuf(class UTemporaryBuff* Buf);
    void SetIsServer(bool IsServer);
    void SetData(class UPlayerCharacterID* playerClass, int32 TimesRetired, bool IsServer, class UTemporaryBuff* Buf);
    void Construct();
    void FromPlayerState(class APlayerState* PlayerState, TSubclassOf<class APlayerCharacter> playerClass);
    void OnTemporaryBuffChanged(class UTemporaryBuff* buff, class APlayerCharacter* AffectedPlayer);
    void ExecuteUbergraph_HUD_PlayerClass_Icon(int32 EntryPoint);
};

#endif
