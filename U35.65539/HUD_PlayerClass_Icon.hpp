#ifndef UE4SS_SDK_HUD_PlayerClass_Icon_HPP
#define UE4SS_SDK_HUD_PlayerClass_Icon_HPP

class UHUD_PlayerClass_Icon_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* BarBuff;
    UInvalidationBox* InvalidationBox_2;
    UITM_CharacterIcon_C* ITM_CharacterIcon;
    FLinearColor Tint_Edge;
    FLinearColor Tint_Class;

    void SetBuf(UTemporaryBuff* Buf, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, ESlateVisibility K2Node_Select_Default, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess);
    void SetIsServer(bool IsServer);
    void SetData(UPlayerCharacterID* playerClass, int32 TimesRetired, bool IsServer, UTemporaryBuff* Buf);
    void Construct();
    void FromPlayerState(UPlayerState* PlayerState, TSubclassOf<UPlayerCharacter> playerClass);
    void OnTemporaryBuffChanged(UTemporaryBuff* buff, UPlayerCharacter* AffectedPlayer);
    void ExecuteUbergraph_HUD_PlayerClass_Icon(int32 EntryPoint, UPlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue, UPlayerCharacterID* K2Node_CustomEvent_playerClass_1, int32 K2Node_CustomEvent_TimesRetired, bool K2Node_CustomEvent_IsServer, UTemporaryBuff* K2Node_CustomEvent_Buf, TemporaryBuffChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UTexture2D* CallFunc_GetIcon_ReturnValue, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UPlayerState* K2Node_CustomEvent_PlayerState, TSubclassOf<UPlayerCharacter> K2Node_CustomEvent_playerClass, UFSDPlayerState* CallFunc_GetPlayerState_ReturnValue, TSubclassOf<UPlayerCharacter> CallFunc_GetObjectClass_ReturnValue, UTemporaryBuff* K2Node_CustomEvent_buff, UPlayerCharacter* K2Node_CustomEvent_AffectedPlayer, bool CallFunc_IsLocallyControlled_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1);
}

#endif
