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

    void SetBuf(class UTemporaryBuff* Buf, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, ESlateVisibility K2Node_Select_Default, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess);
    void SetIsServer(bool IsServer);
    void SetData(class UPlayerCharacterID* playerClass, int32 TimesRetired, bool IsServer, class UTemporaryBuff* Buf);
    void Construct();
    void FromPlayerState(class APlayerState* PlayerState, TSubclassOf<class APlayerCharacter> playerClass);
    void OnTemporaryBuffChanged(class UTemporaryBuff* buff, class APlayerCharacter* AffectedPlayer);
    void ExecuteUbergraph_HUD_PlayerClass_Icon(int32 EntryPoint, class APlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue, class UPlayerCharacterID* K2Node_CustomEvent_playerClass_1, int32 K2Node_CustomEvent_TimesRetired, bool K2Node_CustomEvent_IsServer, class UTemporaryBuff* K2Node_CustomEvent_Buf, FExecuteUbergraph_HUD_PlayerClass_IconK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UTexture2D* CallFunc_GetIcon_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class APlayerState* K2Node_CustomEvent_PlayerState, TSubclassOf<class APlayerCharacter> K2Node_CustomEvent_playerClass, class AFSDPlayerState* CallFunc_GetPlayerState_ReturnValue, TSubclassOf<class APlayerCharacter> CallFunc_GetObjectClass_ReturnValue, class UTemporaryBuff* K2Node_CustomEvent_buff, class APlayerCharacter* K2Node_CustomEvent_AffectedPlayer, bool CallFunc_IsLocallyControlled_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1);
};

#endif
