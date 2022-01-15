#ifndef UE4SS_SDK_UI_CallingMolly_HPP
#define UE4SS_SDK_UI_CallingMolly_HPP

class UUI_CallingMolly_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimPing;
    UWidgetAnimation* AnimShow;
    UBasic_Image_C* Molly_Image;
    USizeBox* MollySize;
    int32 Size;
    AMolly* Donkey;
    AFSDPlayerState* PlayerState;
    bool IsIconVisible;
    FTimerHandle TimeoutHandle;

    void GetIsPlayerCalling(bool& OutIsCalling, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void SetDonkey(UMolly* InDonkey, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, CalledByDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_2, CalledByDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1);
    void SetPlayerState(UPlayerState* InPlayerState, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess);
    void OnDonkeyChanged(UMolly* InDonkey);
    void SetIconVisible(bool InVisible);
    void OnAnimStarted();
    void OnAnimFinished();
    void OnCalledByChanged(UPlayerCharacter* PlayerCharacter);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnTimeOut();
    void PingIcon();
    void OnPingFinished();
    void ExecuteUbergraph_UI_CallingMolly(int32 EntryPoint, bool Temp_bool_Variable, DonkeyCharacterDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, float CallFunc_Conv_IntToFloat_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, UMolly* K2Node_CustomEvent_InDonkey, bool K2Node_CustomEvent_InVisible, bool CallFunc_GetIsPlayerCalling_OutIsCalling, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_UpdateBool_ValueChanged, bool CallFunc_UpdateBool_OutValue, uint8 K2Node_Select_Default, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, UPlayerCharacter* K2Node_CustomEvent_PlayerCharacter, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
}

#endif
