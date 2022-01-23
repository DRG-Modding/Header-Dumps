#ifndef UE4SS_SDK_UI_CallingMolly_HPP
#define UE4SS_SDK_UI_CallingMolly_HPP

class UUI_CallingMolly_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimPing;
    class UWidgetAnimation* AnimShow;
    class UBasic_Image_C* Molly_Image;
    class USizeBox* MollySize;
    int32 Size;
    class AMolly* Donkey;
    class AFSDPlayerState* PlayerState;
    bool IsIconVisible;
    FTimerHandle TimeoutHandle;

    void GetIsPlayerCalling(bool& OutIsCalling, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void SetDonkey(class AMolly* InDonkey, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FSetDonkeyK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_2, FSetDonkeyK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1);
    void SetPlayerState(class APlayerState* InPlayerState, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess);
    void OnDonkeyChanged(class AMolly* InDonkey);
    void SetIconVisible(bool InVisible);
    void OnAnimStarted();
    void OnAnimFinished();
    void OnCalledByChanged(class APlayerCharacter* PlayerCharacter);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnTimeOut();
    void PingIcon();
    void OnPingFinished();
    void ExecuteUbergraph_UI_CallingMolly(int32 EntryPoint, bool Temp_bool_Variable, FExecuteUbergraph_UI_CallingMollyK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable_1, FExecuteUbergraph_UI_CallingMollyK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_UI_CallingMollyK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FExecuteUbergraph_UI_CallingMollyK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, float CallFunc_Conv_IntToFloat_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, class AMolly* K2Node_CustomEvent_InDonkey, bool K2Node_CustomEvent_InVisible, bool CallFunc_GetIsPlayerCalling_OutIsCalling, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_UpdateBool_ValueChanged, bool CallFunc_UpdateBool_OutValue, TEnumAsByte<EUMGSequencePlayMode::Type> K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, class APlayerCharacter* K2Node_CustomEvent_PlayerCharacter, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
};

#endif
