#ifndef UE4SS_SDK_ITM_CharacterBuffIcon_HPP
#define UE4SS_SDK_ITM_CharacterBuffIcon_HPP

class UITM_CharacterBuffIcon_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Intro;
    UImage* BarBuff;
    USizeBox* SizeBox_0;
    UTemporaryBuff* CurrentBuf;
    float Size;

    void OnLoaded_4CD03633471C127A79FA3D8CDA739676(UObject* Loaded);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnTemporaryBuffChanged(UTemporaryBuff* buff, UPlayerCharacter* AffectedPlayer);
    void ExecuteUbergraph_ITM_CharacterBuffIcon(int32 EntryPoint, TemporaryBuffChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue_1, ESlateVisibility K2Node_Select_Default, UObject* K2Node_CustomEvent_Loaded, UObject* Temp_object_Variable, UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UTemporaryBuff* K2Node_CustomEvent_buff, UPlayerCharacter* K2Node_CustomEvent_AffectedPlayer, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, OnAssetLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UPlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue, UPlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_IsLocalController_ReturnValue, UTemporaryBuff* K2Node_DynamicCast_AsTemporary_Buff, bool K2Node_DynamicCast_bSuccess_1, UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_2);
}

#endif
