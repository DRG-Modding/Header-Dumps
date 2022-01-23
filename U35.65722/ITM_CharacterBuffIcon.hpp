#ifndef UE4SS_SDK_ITM_CharacterBuffIcon_HPP
#define UE4SS_SDK_ITM_CharacterBuffIcon_HPP

class UITM_CharacterBuffIcon_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Intro;
    class UImage* BarBuff;
    class USizeBox* SizeBox_0;
    class UTemporaryBuff* CurrentBuf;
    float Size;

    void OnLoaded_4CD03633471C127A79FA3D8CDA739676(class UObject* Loaded);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnTemporaryBuffChanged(class UTemporaryBuff* buff, class APlayerCharacter* AffectedPlayer);
    void ExecuteUbergraph_ITM_CharacterBuffIcon(int32 EntryPoint, FExecuteUbergraph_ITM_CharacterBuffIconK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue_1, ESlateVisibility K2Node_Select_Default, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UTemporaryBuff* K2Node_CustomEvent_buff, class APlayerCharacter* K2Node_CustomEvent_AffectedPlayer, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, FExecuteUbergraph_ITM_CharacterBuffIconK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class APlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue, class APlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_IsLocalController_ReturnValue, class UTemporaryBuff* K2Node_DynamicCast_AsTemporary_Buff, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_2);
};

#endif
