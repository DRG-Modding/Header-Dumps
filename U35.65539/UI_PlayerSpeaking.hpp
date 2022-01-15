#ifndef UE4SS_SDK_UI_PlayerSpeaking_HPP
#define UE4SS_SDK_UI_PlayerSpeaking_HPP

class UUI_PlayerSpeaking_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Image_C* Basic_Image;
    float Size;
    AFSDPlayerState* PlayerState;
    FUI_PlayerSpeaking_COnChanged OnChanged;
    void OnChanged(bool InTalking);

    void PreConstruct(bool IsDesignTime);
    void OnTalkingChanged(bool IsTalking);
    void SetPlayerState(UFSDPlayerState* NewPlayerState);
    void ExecuteUbergraph_UI_PlayerSpeaking(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_IsTalking, FVector2D CallFunc_MakeVector2D_ReturnValue, ESlateVisibility K2Node_Select_Default, UFSDPlayerState* K2Node_CustomEvent_NewPlayerState, PlayerVoiceSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, PlayerVoiceSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1);
    void OnChanged__DelegateSignature(bool InTalking);
}

#endif
